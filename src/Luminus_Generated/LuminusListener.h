
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuminusParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LuminusParser.
 */
class LuminusListener : public antlr4::tree::ParseTreeListener {
public:

    virtual void enterStart(LuminusParser::StartContext *ctx) = 0;

    virtual void exitStart(LuminusParser::StartContext *ctx) = 0;

    virtual void enterBool_Const(LuminusParser::Bool_ConstContext *ctx) = 0;

    virtual void exitBool_Const(LuminusParser::Bool_ConstContext *ctx) = 0;

    virtual void enterParantheses(LuminusParser::ParanthesesContext *ctx) = 0;

    virtual void exitParantheses(LuminusParser::ParanthesesContext *ctx) = 0;

    virtual void enterMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *ctx) = 0;

    virtual void exitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *ctx) = 0;

    virtual void enterFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *ctx) = 0;

    virtual void exitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *ctx) = 0;

    virtual void enterUnary_Negate(LuminusParser::Unary_NegateContext *ctx) = 0;

    virtual void exitUnary_Negate(LuminusParser::Unary_NegateContext *ctx) = 0;

    virtual void enterAddOrSubtract(LuminusParser::AddOrSubtractContext *ctx) = 0;

    virtual void exitAddOrSubtract(LuminusParser::AddOrSubtractContext *ctx) = 0;

    virtual void enterFloatExpression(LuminusParser::FloatExpressionContext *ctx) = 0;

    virtual void exitFloatExpression(LuminusParser::FloatExpressionContext *ctx) = 0;

    virtual void enterIntegerExpression(LuminusParser::IntegerExpressionContext *ctx) = 0;

    virtual void exitIntegerExpression(LuminusParser::IntegerExpressionContext *ctx) = 0;

    virtual void enterIdentifierExpression(LuminusParser::IdentifierExpressionContext *ctx) = 0;

    virtual void exitIdentifierExpression(LuminusParser::IdentifierExpressionContext *ctx) = 0;

    virtual void enterCastToType(LuminusParser::CastToTypeContext *ctx) = 0;

    virtual void exitCastToType(LuminusParser::CastToTypeContext *ctx) = 0;

    virtual void enterBoolExpression(LuminusParser::BoolExpressionContext *ctx) = 0;

    virtual void exitBoolExpression(LuminusParser::BoolExpressionContext *ctx) = 0;

    virtual void enterArgument(LuminusParser::ArgumentContext *ctx) = 0;

    virtual void exitArgument(LuminusParser::ArgumentContext *ctx) = 0;

    virtual void enterFunctionDeclaration(LuminusParser::FunctionDeclarationContext *ctx) = 0;

    virtual void exitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *ctx) = 0;

    virtual void enterFunctionCall(LuminusParser::FunctionCallContext *ctx) = 0;

    virtual void exitFunctionCall(LuminusParser::FunctionCallContext *ctx) = 0;

    virtual void enterDeclaration(LuminusParser::DeclarationContext *ctx) = 0;

    virtual void exitDeclaration(LuminusParser::DeclarationContext *ctx) = 0;

    virtual void enterReinitialization(LuminusParser::ReinitializationContext *ctx) = 0;

    virtual void exitReinitialization(LuminusParser::ReinitializationContext *ctx) = 0;

    virtual void enterInitialization(LuminusParser::InitializationContext *ctx) = 0;

    virtual void exitInitialization(LuminusParser::InitializationContext *ctx) = 0;

    virtual void enterReturnStatement(LuminusParser::ReturnStatementContext *ctx) = 0;

    virtual void exitReturnStatement(LuminusParser::ReturnStatementContext *ctx) = 0;

    virtual void enterBlockExpression(LuminusParser::BlockExpressionContext *ctx) = 0;

    virtual void exitBlockExpression(LuminusParser::BlockExpressionContext *ctx) = 0;

    virtual void enterStatement(LuminusParser::StatementContext *ctx) = 0;

    virtual void exitStatement(LuminusParser::StatementContext *ctx) = 0;


};

