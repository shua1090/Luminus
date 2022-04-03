//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_LUMVISITOR_H
#define LUMINUS_LUMVISITOR_H

#include "LuminusVisitor.h"
#include "ErrorLogger.h"
#include <unordered_map>

enum Types {
    NONEXISTENT,
    INTEGER,
    DOUBLE,
    BOOLEAN,
    VOID,
};

struct LumFunction{
    Types returnType;
    std::vector<Types> args;
    bool hasValidReturnVal = false;
    bool sameReturnval(LumFunction & lf) const{
        if (lf.returnType == returnType) return true;
        return false;
    }
    bool sameArgs(LumFunction & lf){
        if (lf.args.size() != this->args.size()) return false;
        for (int i = 0; i < args.size(); i++){
            if (this->args[i] != lf.args[i]) return false;
        }
        return true;
    }
};

class LuminusGenerator : public LuminusVisitor {
    std::string currentLine;
    std::vector<std::unordered_map<std::string, Types>> names;

    std::unordered_map<std::string, LumFunction> vec_of_funcs;

    std::string currentFunctionName;

    inline Types checkForVariable(std::string varName) {
        for (int i = names.size() - 1; i >= 0; i--) {
            try {
                return names[i].at(varName);
            } catch (std::out_of_range r) {}
        }
        return NONEXISTENT;
    }

    inline LumFunction checkFunction(std::string functionName){
        try {
            return vec_of_funcs.at(functionName);
        } catch (std::out_of_range r){
            return {NONEXISTENT};
        }
    }

    static Types textToType(std::string type){
        Types dec_type_t;
        if (type == "int"){
            dec_type_t = INTEGER;
        } else if (type == "double"){
            dec_type_t = DOUBLE;
        } else if (type == "bool") {
            dec_type_t = BOOLEAN;
        } else if (type == "void") {
            dec_type_t = VOID;
        } else {
            dec_type_t = INTEGER;
        }
        return dec_type_t;
    }


private:

    static size_t getColumnNum(antlr4::ParserRuleContext *ctx) {
        return ctx->getStart()->getCharPositionInLine();
    }

    static size_t getRowNum(antlr4::ParserRuleContext *ctx) {
        return ctx->getStart()->getLine();
    }

    static std::string getText(antlr4::ParserRuleContext *ctx) {
        return ctx->getText();
    }
    static BaseError* fillError(BaseError * err, antlr4::ParserRuleContext * ctx, std::string errDescription){
        err->errorDescription = errDescription;
        err->columNum = getColumnNum(ctx);
        err->lineNum = getRowNum(ctx);
        err->line = getText(ctx);
        return err;
    }

public:
    Logger logger;
    antlrcpp::Any visitStart(LuminusParser::StartContext *context) override {
        this->names.push_back(std::unordered_map<std::string, Types>()) ;
        this->visitChildren(context);
        return antlrcpp::Any();
    }

    antlrcpp::Any visitBool_Const(LuminusParser::Bool_ConstContext *context) override {
        return BOOLEAN;
    }

    antlrcpp::Any visitParantheses(LuminusParser::ParanthesesContext *context) override {
        return this->visit(context->inner);
    }

    antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) override {
        return this->visitChildren(context);
    };

    antlrcpp::Any visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) override;

    antlrcpp::Any visitUnary_Negate(LuminusParser::Unary_NegateContext *context) override;

    antlrcpp::Any visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) override;

    antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *context) override {
        return DOUBLE;
    }

    antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *context) override {
        return INTEGER;
    }

    antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *context) override;

    antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) override;

    antlrcpp::Any visitBoolExpression(LuminusParser::BoolExpressionContext *context) override;

    antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) override;

    antlrcpp::Any visitInitialization(LuminusParser::InitializationContext *context) override;

    antlrcpp::Any visitDeclaration(LuminusParser::DeclarationContext *context) override;

    antlrcpp::Any visitReinitialization(LuminusParser::ReinitializationContext *context) override;

    antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) override {
        if (this->currentFunctionName.empty()) {
            logger.addError(fillError(new UnreachableCodeWarning,
                                      context,
                                      "Unreachable Code below this line, skipping"));
        } else return this->visitChildren(context);

        return antlrcpp::Any();
    }

    antlrcpp::Any visitReturnStatement(LuminusParser::ReturnStatementContext *context) override;
};

#endif //LUMINUS_LUMVISITOR_H
