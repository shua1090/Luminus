
// Generated from LuxLang.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuxLangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LuxLangParser.
 */
class  LuxLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(LuxLangParser::StartContext *ctx) = 0;
  virtual void exitStart(LuxLangParser::StartContext *ctx) = 0;

  virtual void enterBool_Const(LuxLangParser::Bool_ConstContext *ctx) = 0;
  virtual void exitBool_Const(LuxLangParser::Bool_ConstContext *ctx) = 0;

  virtual void enterParantheses(LuxLangParser::ParanthesesContext *ctx) = 0;
  virtual void exitParantheses(LuxLangParser::ParanthesesContext *ctx) = 0;

  virtual void enterMultiplyOrDivide(LuxLangParser::MultiplyOrDivideContext *ctx) = 0;
  virtual void exitMultiplyOrDivide(LuxLangParser::MultiplyOrDivideContext *ctx) = 0;

  virtual void enterUnary_Negate(LuxLangParser::Unary_NegateContext *ctx) = 0;
  virtual void exitUnary_Negate(LuxLangParser::Unary_NegateContext *ctx) = 0;

  virtual void enterAddOrSubtract(LuxLangParser::AddOrSubtractContext *ctx) = 0;
  virtual void exitAddOrSubtract(LuxLangParser::AddOrSubtractContext *ctx) = 0;

  virtual void enterFloatExpression(LuxLangParser::FloatExpressionContext *ctx) = 0;
  virtual void exitFloatExpression(LuxLangParser::FloatExpressionContext *ctx) = 0;

  virtual void enterIntegerExpression(LuxLangParser::IntegerExpressionContext *ctx) = 0;
  virtual void exitIntegerExpression(LuxLangParser::IntegerExpressionContext *ctx) = 0;

  virtual void enterFunctionCall(LuxLangParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(LuxLangParser::FunctionCallContext *ctx) = 0;

  virtual void enterIdentifierExpression(LuxLangParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(LuxLangParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterBoolExpression(LuxLangParser::BoolExpressionContext *ctx) = 0;
  virtual void exitBoolExpression(LuxLangParser::BoolExpressionContext *ctx) = 0;

  virtual void enterArgument(LuxLangParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(LuxLangParser::ArgumentContext *ctx) = 0;

  virtual void enterFunctionDeclaration(LuxLangParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(LuxLangParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterConditional_if(LuxLangParser::Conditional_ifContext *ctx) = 0;
  virtual void exitConditional_if(LuxLangParser::Conditional_ifContext *ctx) = 0;

  virtual void enterConditional_else(LuxLangParser::Conditional_elseContext *ctx) = 0;
  virtual void exitConditional_else(LuxLangParser::Conditional_elseContext *ctx) = 0;

  virtual void enterInitialization(LuxLangParser::InitializationContext *ctx) = 0;
  virtual void exitInitialization(LuxLangParser::InitializationContext *ctx) = 0;

  virtual void enterBoolInitialization(LuxLangParser::BoolInitializationContext *ctx) = 0;
  virtual void exitBoolInitialization(LuxLangParser::BoolInitializationContext *ctx) = 0;

  virtual void enterDeclaration(LuxLangParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(LuxLangParser::DeclarationContext *ctx) = 0;

  virtual void enterStatement(LuxLangParser::StatementContext *ctx) = 0;
  virtual void exitStatement(LuxLangParser::StatementContext *ctx) = 0;


};
