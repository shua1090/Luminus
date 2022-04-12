
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

    virtual antlrcpp::Any visitStart(LuminusParser::StartContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitStruct_declaration(LuminusParser::Struct_declarationContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDeclaration(LuminusParser::DeclarationContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitReinitialization(LuminusParser::ReinitializationContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInitialization(LuminusParser::InitializationContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitParantheses(LuminusParser::ParanthesesContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDereferenceExpression(LuminusParser::DereferenceExpressionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitStringConst(LuminusParser::StringConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueOfPointerExpression(LuminusParser::ValueOfPointerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpression(LuminusParser::NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastToType(LuminusParser::CastToTypeContext *ctx) override {
    return visitChildren(ctx);
  }

    virtual antlrcpp::Any visitBool_Const(LuminusParser::Bool_ConstContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitLogicalExpression(LuminusParser::LogicalExpressionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitModulus(LuminusParser::ModulusContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitUnary_Negate(LuminusParser::Unary_NegateContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAddOrSubtract(LuminusParser::AddOrSubtractContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitCompExpression(LuminusParser::CompExpressionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAccessInternal(LuminusParser::AccessInternalContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIndexing(LuminusParser::IndexingContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitWhile_statement(LuminusParser::While_statementContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIf_statement(LuminusParser::If_statementContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitElse_statement(LuminusParser::Else_statementContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitElif_statement(LuminusParser::Elif_statementContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitConditional_statement(LuminusParser::Conditional_statementContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitReturnStatement(LuminusParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(LuminusParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }


};

