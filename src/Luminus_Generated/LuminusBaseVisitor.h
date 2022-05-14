
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuminusVisitor.h"


/**
 * This class provides an empty implementation of LuminusVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class LuminusBaseVisitor : public LuminusVisitor {
public:

    virtual antlrcpp::Any visitInit_stmt(LuminusParser::Init_stmtContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitReinit_stmt(LuminusParser::Reinit_stmtContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDecl_stmt(LuminusParser::Decl_stmtContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitVar_set_stmts(LuminusParser::Var_set_stmtsContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitFunc_call(LuminusParser::Func_callContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAdditionExpression(LuminusParser::AdditionExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitMemberAccessExpression(LuminusParser::MemberAccessExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitModulusExpression(LuminusParser::ModulusExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitFloatConstant(LuminusParser::FloatConstantContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitUnaryNegateExpression(LuminusParser::UnaryNegateExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitMultiplyExpression(LuminusParser::MultiplyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitCastExpression(LuminusParser::ExplicitCastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpression(LuminusParser::NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParanthesesExpression(LuminusParser::ParanthesesExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerConstant(LuminusParser::IntegerConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubtractionExpression(LuminusParser::SubtractionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonExpression(LuminusParser::ComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExpression(LuminusParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivideExpression(LuminusParser::DivideExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncrementOperator(LuminusParser::IncrementOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodAccessExpression(LuminusParser::MethodAccessExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanConstant(LuminusParser::BooleanConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecrementOperator(LuminusParser::DecrementOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringConstant(LuminusParser::StringConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_definition(LuminusParser::Function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClass_definition(LuminusParser::Class_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(LuminusParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart(LuminusParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }


};

