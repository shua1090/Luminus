
// Generated from LuxLang.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuxLangVisitor.h"


/**
 * This class provides an empty implementation of LuxLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LuxLangBaseVisitor : public LuxLangVisitor {
public:

  virtual antlrcpp::Any visitStart(LuxLangParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_Const(LuxLangParser::Bool_ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParantheses(LuxLangParser::ParanthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplyOrDivide(LuxLangParser::MultiplyOrDivideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_Negate(LuxLangParser::Unary_NegateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddOrSubtract(LuxLangParser::AddOrSubtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatExpression(LuxLangParser::FloatExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerExpression(LuxLangParser::IntegerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(LuxLangParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierExpression(LuxLangParser::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolExpression(LuxLangParser::BoolExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(LuxLangParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(LuxLangParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_if(LuxLangParser::Conditional_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_else(LuxLangParser::Conditional_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitialization(LuxLangParser::InitializationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolInitialization(LuxLangParser::BoolInitializationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(LuxLangParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(LuxLangParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }


};

