
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuminusParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LuminusParser.
 */
class LuminusListener : public antlr4::tree::ParseTreeListener {
public:

    virtual void enterInit_stmt(LuminusParser::Init_stmtContext *ctx) = 0;

    virtual void exitInit_stmt(LuminusParser::Init_stmtContext *ctx) = 0;

    virtual void enterReinit_stmt(LuminusParser::Reinit_stmtContext *ctx) = 0;

    virtual void exitReinit_stmt(LuminusParser::Reinit_stmtContext *ctx) = 0;

    virtual void enterDecl_stmt(LuminusParser::Decl_stmtContext *ctx) = 0;

    virtual void exitDecl_stmt(LuminusParser::Decl_stmtContext *ctx) = 0;

    virtual void enterVar_set_stmts(LuminusParser::Var_set_stmtsContext *ctx) = 0;

    virtual void exitVar_set_stmts(LuminusParser::Var_set_stmtsContext *ctx) = 0;

    virtual void enterAdditionExpression(LuminusParser::AdditionExpressionContext *ctx) = 0;

    virtual void exitAdditionExpression(LuminusParser::AdditionExpressionContext *ctx) = 0;

    virtual void enterModulusExpression(LuminusParser::ModulusExpressionContext *ctx) = 0;

    virtual void exitModulusExpression(LuminusParser::ModulusExpressionContext *ctx) = 0;

    virtual void enterFloatConstant(LuminusParser::FloatConstantContext *ctx) = 0;

    virtual void exitFloatConstant(LuminusParser::FloatConstantContext *ctx) = 0;

    virtual void enterUnaryNegateExpression(LuminusParser::UnaryNegateExpressionContext *ctx) = 0;

    virtual void exitUnaryNegateExpression(LuminusParser::UnaryNegateExpressionContext *ctx) = 0;

    virtual void enterMultiplyExpression(LuminusParser::MultiplyExpressionContext *ctx) = 0;

    virtual void exitMultiplyExpression(LuminusParser::MultiplyExpressionContext *ctx) = 0;

    virtual void enterExplicitCastExpression(LuminusParser::ExplicitCastExpressionContext *ctx) = 0;

    virtual void exitExplicitCastExpression(LuminusParser::ExplicitCastExpressionContext *ctx) = 0;

    virtual void enterNotExpression(LuminusParser::NotExpressionContext *ctx) = 0;

    virtual void exitNotExpression(LuminusParser::NotExpressionContext *ctx) = 0;

    virtual void enterParanthesesExpression(LuminusParser::ParanthesesExpressionContext *ctx) = 0;

    virtual void exitParanthesesExpression(LuminusParser::ParanthesesExpressionContext *ctx) = 0;

    virtual void enterIntegerConstant(LuminusParser::IntegerConstantContext *ctx) = 0;

    virtual void exitIntegerConstant(LuminusParser::IntegerConstantContext *ctx) = 0;

    virtual void enterIdentifierExpression(LuminusParser::IdentifierExpressionContext *ctx) = 0;

    virtual void exitIdentifierExpression(LuminusParser::IdentifierExpressionContext *ctx) = 0;

    virtual void enterSubtractionExpression(LuminusParser::SubtractionExpressionContext *ctx) = 0;

    virtual void exitSubtractionExpression(LuminusParser::SubtractionExpressionContext *ctx) = 0;

    virtual void enterComparisonExpression(LuminusParser::ComparisonExpressionContext *ctx) = 0;

    virtual void exitComparisonExpression(LuminusParser::ComparisonExpressionContext *ctx) = 0;

    virtual void enterLogicalExpression(LuminusParser::LogicalExpressionContext *ctx) = 0;

    virtual void exitLogicalExpression(LuminusParser::LogicalExpressionContext *ctx) = 0;

    virtual void enterDivideExpression(LuminusParser::DivideExpressionContext *ctx) = 0;

    virtual void exitDivideExpression(LuminusParser::DivideExpressionContext *ctx) = 0;

    virtual void enterIncrementOperator(LuminusParser::IncrementOperatorContext *ctx) = 0;

    virtual void exitIncrementOperator(LuminusParser::IncrementOperatorContext *ctx) = 0;

    virtual void enterBooleanConstant(LuminusParser::BooleanConstantContext *ctx) = 0;

    virtual void exitBooleanConstant(LuminusParser::BooleanConstantContext *ctx) = 0;

    virtual void enterDecrementOperator(LuminusParser::DecrementOperatorContext *ctx) = 0;

    virtual void exitDecrementOperator(LuminusParser::DecrementOperatorContext *ctx) = 0;

    virtual void enterStringConstant(LuminusParser::StringConstantContext *ctx) = 0;

    virtual void exitStringConstant(LuminusParser::StringConstantContext *ctx) = 0;

    virtual void enterArgument(LuminusParser::ArgumentContext *ctx) = 0;

    virtual void exitArgument(LuminusParser::ArgumentContext *ctx) = 0;

    virtual void enterFunction_definition(LuminusParser::Function_definitionContext *ctx) = 0;

    virtual void exitFunction_definition(LuminusParser::Function_definitionContext *ctx) = 0;

    virtual void enterClass_definition(LuminusParser::Class_definitionContext *ctx) = 0;

    virtual void exitClass_definition(LuminusParser::Class_definitionContext *ctx) = 0;

    virtual void enterStatement(LuminusParser::StatementContext *ctx) = 0;

    virtual void exitStatement(LuminusParser::StatementContext *ctx) = 0;

    virtual void enterBlockExpression(LuminusParser::BlockExpressionContext *ctx) = 0;

    virtual void exitBlockExpression(LuminusParser::BlockExpressionContext *ctx) = 0;

    virtual void enterStart(LuminusParser::StartContext *ctx) = 0;

    virtual void exitStart(LuminusParser::StartContext *ctx) = 0;


};

