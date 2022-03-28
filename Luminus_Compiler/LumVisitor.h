//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_LUMVISITOR_H
#define LUMINUS_LUMVISITOR_H

#include "LuminusVisitor.h"
#include "ErrorLogger.h"
#include <unordered_map>

enum Types{
    INTEGER,
    DOUBLE,
    BOOLEAN,
};

class LumVisitor : public LuminusVisitor{
    std::string currentLine;

    static size_t getColumnNum (antlr4::ParserRuleContext * ctx){
        return ctx->getStart()->getCharPositionInLine();
    }
    static size_t getRowNum(antlr4::ParserRuleContext * ctx){
        return ctx->getStart()->getLine();
    }
    static std::string getText(antlr4::ParserRuleContext * ctx){
        return ctx->getText();
    }

public:
    Logger logger;
    antlrcpp::Any visitStart(LuminusParser::StartContext *context) override {
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
            TypeMismatchError * tme = new TypeMismatchError;
            tme->errorDescription = "Cannot operate on Booleans";
            tme->columNum = LumVisitor::getColumnNum(context);
            tme->lineNum = LumVisitor::getRowNum(context);
            tme->line = LumVisitor::getText(context);
            logger.addBaseError(tme);
        }
        return left;
    }

    antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *context) override {
        return DOUBLE;
    }

    antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *context) override {
        return INTEGER;
    }

    antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *context) override {
        this->visitChildren(context);
        return antlrcpp::Any();
    }

    antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitBoolExpression(LuminusParser::BoolExpressionContext *context) override {
        return BOOLEAN;
    }

    antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) override {
        this->visitChildren(context);
        return antlrcpp::Any();
    }

    antlrcpp::Any visitConditional_if(LuminusParser::Conditional_ifContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitConditional_else(LuminusParser::Conditional_elseContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitInitialization(LuminusParser::InitializationContext *context) override {
        std::string type = context->dec_type->getText();
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
        Types val_type_t = this->visit(context->value).as<Types>();
        if (val_type_t != dec_type_t){
        }
        std::cout << "Initialization Dec Type: " << dec_type_t << std::endl;
        return antlrcpp::Any();
    }

    antlrcpp::Any visitDeclaration(LuminusParser::DeclarationContext *context) override {
        this->visitChildren(context);
        return antlrcpp::Any();
    }

    antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) override {
        this->currentLine = context->getText();
        this->visitChildren(context);
        return antlrcpp::Any();
    }
};

#endif //LUMINUS_LUMVISITOR_H
