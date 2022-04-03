
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
  virtual antlrcpp::Any visitStart(LuminusParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitBool_Const(LuminusParser::Bool_ConstContext *context) = 0;

    virtual antlrcpp::Any visitParantheses(LuminusParser::ParanthesesContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) = 0;

    virtual antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnary_Negate(LuminusParser::Unary_NegateContext *context) = 0;

    virtual antlrcpp::Any visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) = 0;

    virtual antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBoolExpression(LuminusParser::BoolExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(LuminusParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitReinitialization(LuminusParser::ReinitializationContext *context) = 0;

    virtual antlrcpp::Any visitInitialization(LuminusParser::InitializationContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(LuminusParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) = 0;


};

