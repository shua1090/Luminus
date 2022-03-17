
// Generated from LuxLang.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuxLangListener.h"


/**
 * This class provides an empty implementation of LuxLangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LuxLangBaseListener : public LuxLangListener {
public:

  virtual void enterStart(LuxLangParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(LuxLangParser::StartContext * /*ctx*/) override { }

  virtual void enterParantheses(LuxLangParser::ParanthesesContext * /*ctx*/) override { }
  virtual void exitParantheses(LuxLangParser::ParanthesesContext * /*ctx*/) override { }

  virtual void enterMultiplyOrDivide(LuxLangParser::MultiplyOrDivideContext * /*ctx*/) override { }
  virtual void exitMultiplyOrDivide(LuxLangParser::MultiplyOrDivideContext * /*ctx*/) override { }

  virtual void enterUnary_Negate(LuxLangParser::Unary_NegateContext * /*ctx*/) override { }
  virtual void exitUnary_Negate(LuxLangParser::Unary_NegateContext * /*ctx*/) override { }

  virtual void enterAddOrSubtract(LuxLangParser::AddOrSubtractContext * /*ctx*/) override { }
  virtual void exitAddOrSubtract(LuxLangParser::AddOrSubtractContext * /*ctx*/) override { }

  virtual void enterFloatExpression(LuxLangParser::FloatExpressionContext * /*ctx*/) override { }
  virtual void exitFloatExpression(LuxLangParser::FloatExpressionContext * /*ctx*/) override { }

  virtual void enterIntegerExpression(LuxLangParser::IntegerExpressionContext * /*ctx*/) override { }
  virtual void exitIntegerExpression(LuxLangParser::IntegerExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(LuxLangParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(LuxLangParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterInitialization(LuxLangParser::InitializationContext * /*ctx*/) override { }
  virtual void exitInitialization(LuxLangParser::InitializationContext * /*ctx*/) override { }

  virtual void enterDeclaration(LuxLangParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(LuxLangParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterStatement(LuxLangParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(LuxLangParser::StatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

