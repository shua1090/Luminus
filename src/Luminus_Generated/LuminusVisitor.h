
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuminusParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LuminusParser.
 */
class  LuminusVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LuminusParser.
   */
  virtual antlrcpp::Any visitInit_stmt(LuminusParser::Init_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReinit_stmt(LuminusParser::Reinit_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDecl_stmt(LuminusParser::Decl_stmtContext *context) = 0;

    virtual antlrcpp::Any visitVar_set_stmts(LuminusParser::Var_set_stmtsContext *context) = 0;

    virtual antlrcpp::Any visitAdditionExpression(LuminusParser::AdditionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitModulusExpression(LuminusParser::ModulusExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFloatConstant(LuminusParser::FloatConstantContext *context) = 0;

    virtual antlrcpp::Any visitUnaryNegateExpression(LuminusParser::UnaryNegateExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyExpression(LuminusParser::MultiplyExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExplicitCastExpression(LuminusParser::ExplicitCastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(LuminusParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParanthesesExpression(LuminusParser::ParanthesesExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConstant(LuminusParser::IntegerConstantContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSubtractionExpression(LuminusParser::SubtractionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitComparisonExpression(LuminusParser::ComparisonExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(LuminusParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDivideExpression(LuminusParser::DivideExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIncrementOperator(LuminusParser::IncrementOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBooleanConstant(LuminusParser::BooleanConstantContext *context) = 0;

    virtual antlrcpp::Any visitDecrementOperator(LuminusParser::DecrementOperatorContext *context) = 0;

    virtual antlrcpp::Any visitStringConstant(LuminusParser::StringConstantContext *context) = 0;

    virtual antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunction_definition(LuminusParser::Function_definitionContext *context) = 0;

    virtual antlrcpp::Any visitClass_definition(LuminusParser::Class_definitionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStart(LuminusParser::StartContext *context) = 0;


};

