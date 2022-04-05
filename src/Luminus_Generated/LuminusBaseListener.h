
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuminusListener.h"


/**
 * This class provides an empty implementation of LuminusListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class LuminusBaseListener : public LuminusListener {
public:

    virtual void enterStart(LuminusParser::StartContext * /*ctx*/) override {}

    virtual void exitStart(LuminusParser::StartContext * /*ctx*/) override {}

    virtual void enterBool_Const(LuminusParser::Bool_ConstContext * /*ctx*/) override {}

    virtual void exitBool_Const(LuminusParser::Bool_ConstContext * /*ctx*/) override {}

    virtual void enterParantheses(LuminusParser::ParanthesesContext * /*ctx*/) override {}

    virtual void exitParantheses(LuminusParser::ParanthesesContext * /*ctx*/) override {}

    virtual void enterMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext * /*ctx*/) override {}

    virtual void exitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext * /*ctx*/) override {}

    virtual void enterFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext * /*ctx*/) override {}

    virtual void exitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext * /*ctx*/) override {}

    virtual void enterUnary_Negate(LuminusParser::Unary_NegateContext * /*ctx*/) override {}

    virtual void exitUnary_Negate(LuminusParser::Unary_NegateContext * /*ctx*/) override {}

    virtual void enterAddOrSubtract(LuminusParser::AddOrSubtractContext * /*ctx*/) override {}

    virtual void exitAddOrSubtract(LuminusParser::AddOrSubtractContext * /*ctx*/) override {}

    virtual void enterFloatExpression(LuminusParser::FloatExpressionContext * /*ctx*/) override {}

    virtual void exitFloatExpression(LuminusParser::FloatExpressionContext * /*ctx*/) override {}

    virtual void enterIntegerExpression(LuminusParser::IntegerExpressionContext * /*ctx*/) override {}

    virtual void exitIntegerExpression(LuminusParser::IntegerExpressionContext * /*ctx*/) override {}

    virtual void enterIdentifierExpression(LuminusParser::IdentifierExpressionContext * /*ctx*/) override {}

    virtual void exitIdentifierExpression(LuminusParser::IdentifierExpressionContext * /*ctx*/) override {}

    virtual void enterCastToType(LuminusParser::CastToTypeContext * /*ctx*/) override {}

    virtual void exitCastToType(LuminusParser::CastToTypeContext * /*ctx*/) override {}

    virtual void enterBoolExpression(LuminusParser::BoolExpressionContext * /*ctx*/) override {}

    virtual void exitBoolExpression(LuminusParser::BoolExpressionContext * /*ctx*/) override {}

    virtual void enterArgument(LuminusParser::ArgumentContext * /*ctx*/) override {}

    virtual void exitArgument(LuminusParser::ArgumentContext * /*ctx*/) override {}

    virtual void enterFunctionDeclaration(LuminusParser::FunctionDeclarationContext * /*ctx*/) override {}

    virtual void exitFunctionDeclaration(LuminusParser::FunctionDeclarationContext * /*ctx*/) override {}

    virtual void enterFunctionCall(LuminusParser::FunctionCallContext * /*ctx*/) override {}

    virtual void exitFunctionCall(LuminusParser::FunctionCallContext * /*ctx*/) override {}

    virtual void enterDeclaration(LuminusParser::DeclarationContext * /*ctx*/) override {}

    virtual void exitDeclaration(LuminusParser::DeclarationContext * /*ctx*/) override {}

    virtual void enterReinitialization(LuminusParser::ReinitializationContext * /*ctx*/) override {}

    virtual void exitReinitialization(LuminusParser::ReinitializationContext * /*ctx*/) override {}

    virtual void enterInitialization(LuminusParser::InitializationContext * /*ctx*/) override {}

    virtual void exitInitialization(LuminusParser::InitializationContext * /*ctx*/) override {}

    virtual void enterReturnStatement(LuminusParser::ReturnStatementContext * /*ctx*/) override {}

    virtual void exitReturnStatement(LuminusParser::ReturnStatementContext * /*ctx*/) override {}

    virtual void enterStatement(LuminusParser::StatementContext * /*ctx*/) override {}

    virtual void exitStatement(LuminusParser::StatementContext * /*ctx*/) override {}


    virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override {}

    virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override {}
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

