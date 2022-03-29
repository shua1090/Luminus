//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_LUMVISITOR_H
#define LUMINUS_LUMVISITOR_H

#include "LuminusVisitor.h"
#include "ErrorLogger.h"
#include <unordered_map>

enum Types{
    NONEXISTENT,
    INTEGER,
    DOUBLE,
    BOOLEAN,
};

struct LumFunction{
    Types returnType;
    std::vector<Types> args;
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

class LumVisitor : public LuminusVisitor{
    std::string currentLine;
    std::vector<std::unordered_map<std::string, Types>> names;
    std::unordered_map<std::string, LumFunction> funcs;
    std::string currentFunctionName;

    inline Types checkForVariable(std::string varName){
        for (int i = names.size()-1; i >= 0 ; i --){
            try {
                std::cout << "All current Variables: " << varName << " " << names[i].at(varName) << std::endl;
                return names[i].at(varName);
            } catch (std::out_of_range r){}
        }
        return NONEXISTENT;
    }

    void print() {
//        std::cout << "The vector elements are : ";

//        for(int i=0; i < this->names.size(); i++)
//            std::cout << this->names.at(i). << ' ';
    }

    inline LumFunction checkFunction(std::string functionName){
        try {
            return funcs.at(functionName);
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
        } else if (type == "bool"){
            dec_type_t = BOOLEAN;
        } else {
            dec_type_t = INTEGER;
        }
        return dec_type_t;
    }

    static size_t getColumnNum (antlr4::ParserRuleContext * ctx){
        return ctx->getStart()->getCharPositionInLine();
    }
    static size_t getRowNum(antlr4::ParserRuleContext * ctx){
        return ctx->getStart()->getLine();
    }
    static std::string getText(antlr4::ParserRuleContext * ctx){
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

    antlrcpp::Any visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitUnary_Negate(LuminusParser::Unary_NegateContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) override {
        Types left = this->visit(context->left).as<Types>();
        Types right = this->visit(context->right).as<Types>();
        if (left == BOOLEAN || right==BOOLEAN){
            logger.addBaseError(fillError(
                    new TypeMismatchError,
                    context,
                    "Cannot operate on Booleans"));
        }
        return left;
    }

    antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *context) override {
        return DOUBLE;
    }

    antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *context) override {
        return INTEGER;
    }

    antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *context) override;

    antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) override;

    antlrcpp::Any visitBoolExpression(LuminusParser::BoolExpressionContext *context) override {
        std::cout << "Visit Boolean Expression" << std::endl;
        Types left = this->visit(context->left).as<Types>();
        Types right = this->visit(context->right).as<Types>();
        if (left == NONEXISTENT || right==NONEXISTENT){
            logger.addBaseError(fillError(
                    new NonexistentVariable,
                    context,
                    "One of the values being compared has not been initialized"));
        } else if (left == BOOLEAN || right==BOOLEAN){
            logger.addBaseError(fillError(
                    new TypeMismatchError,
                    context,
                    "Cannot operate on Booleans"));
        } else if (left != right) {
            logger.addBaseError(fillError(
                    new TypeMismatchError,
                    context,
                    "Cannot operate on Booleans"));
        }
        return BOOLEAN;
    }

    antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) override;

    antlrcpp::Any visitConditional_if(LuminusParser::Conditional_ifContext *context) override {
        this->visit(context->inner);
        return antlrcpp::Any();
    }

    antlrcpp::Any visitConditional_else(LuminusParser::Conditional_elseContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitInitialization(LuminusParser::InitializationContext *context) override;

    antlrcpp::Any visitDeclaration(LuminusParser::DeclarationContext *context) override;

    antlrcpp::Any visitReinitialization(LuminusParser::ReinitializationContext *context) override;

    antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) override {
        this->visitChildren(context);
        return antlrcpp::Any();
    }

    antlrcpp::Any visitReturnStatement(LuminusParser::ReturnStatementContext *context) override {
        this->visitChildren(context);
        return antlrcpp::Any();
    }
};

#endif //LUMINUS_LUMVISITOR_H
