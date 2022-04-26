
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

    virtual void enterInit_stmt(LuminusParser::Init_stmtContext * /*ctx*/) override {}

    virtual void exitInit_stmt(LuminusParser::Init_stmtContext * /*ctx*/) override {}

    virtual void enterReinit_stmt(LuminusParser::Reinit_stmtContext * /*ctx*/) override {}

    virtual void exitReinit_stmt(LuminusParser::Reinit_stmtContext * /*ctx*/) override {}

    virtual void enterDecl_stmt(LuminusParser::Decl_stmtContext * /*ctx*/) override {}

    virtual void exitDecl_stmt(LuminusParser::Decl_stmtContext * /*ctx*/) override {}

    virtual void enterVar_set_stmts(LuminusParser::Var_set_stmtsContext * /*ctx*/) override {}

    virtual void exitVar_set_stmts(LuminusParser::Var_set_stmtsContext * /*ctx*/) override {}

    virtual void enterAdditionExpression(LuminusParser::AdditionExpressionContext * /*ctx*/) override {}

    virtual void exitAdditionExpression(LuminusParser::AdditionExpressionContext * /*ctx*/) override {}

    virtual void enterModulusExpression(LuminusParser::ModulusExpressionContext * /*ctx*/) override {}

    virtual void exitModulusExpression(LuminusParser::ModulusExpressionContext * /*ctx*/) override {}

    virtual void enterFloatConstant(LuminusParser::FloatConstantContext * /*ctx*/) override {}

    virtual void exitFloatConstant(LuminusParser::FloatConstantContext * /*ctx*/) override {}

    virtual void enterUnaryNegateExpression(LuminusParser::UnaryNegateExpressionContext * /*ctx*/) override {}

    virtual void exitUnaryNegateExpression(LuminusParser::UnaryNegateExpressionContext * /*ctx*/) override {}

    virtual void enterMultiplyExpression(LuminusParser::MultiplyExpressionContext * /*ctx*/) override {}

    virtual void exitMultiplyExpression(LuminusParser::MultiplyExpressionContext * /*ctx*/) override {}

    virtual void enterExplicitCastExpression(LuminusParser::ExplicitCastExpressionContext * /*ctx*/) override {}

    virtual void exitExplicitCastExpression(LuminusParser::ExplicitCastExpressionContext * /*ctx*/) override {}

    virtual void enterNotExpression(LuminusParser::NotExpressionContext * /*ctx*/) override {}

    virtual void exitNotExpression(LuminusParser::NotExpressionContext * /*ctx*/) override {}

    virtual void enterParanthesesExpression(LuminusParser::ParanthesesExpressionContext * /*ctx*/) override {}

    virtual void exitParanthesesExpression(LuminusParser::ParanthesesExpressionContext * /*ctx*/) override {}

    virtual void enterIntegerConstant(LuminusParser::IntegerConstantContext * /*ctx*/) override {}

    virtual void exitIntegerConstant(LuminusParser::IntegerConstantContext * /*ctx*/) override {}

    virtual void enterIdentifierExpression(LuminusParser::IdentifierExpressionContext * /*ctx*/) override {}

    virtual void exitIdentifierExpression(LuminusParser::IdentifierExpressionContext * /*ctx*/) override {}

    virtual void enterSubtractionExpression(LuminusParser::SubtractionExpressionContext * /*ctx*/) override {}

    virtual void exitSubtractionExpression(LuminusParser::SubtractionExpressionContext * /*ctx*/) override {}

    virtual void enterComparisonExpression(LuminusParser::ComparisonExpressionContext * /*ctx*/) override {}

    virtual void exitComparisonExpression(LuminusParser::ComparisonExpressionContext * /*ctx*/) override {}

    virtual void enterLogicalExpression(LuminusParser::LogicalExpressionContext * /*ctx*/) override {}

    virtual void exitLogicalExpression(LuminusParser::LogicalExpressionContext * /*ctx*/) override {}

    virtual void enterDivideExpression(LuminusParser::DivideExpressionContext * /*ctx*/) override {}

    virtual void exitDivideExpression(LuminusParser::DivideExpressionContext * /*ctx*/) override {}

    virtual void enterIncrementOperator(LuminusParser::IncrementOperatorContext * /*ctx*/) override {}

    virtual void exitIncrementOperator(LuminusParser::IncrementOperatorContext * /*ctx*/) override {}

    virtual void enterBooleanConstant(LuminusParser::BooleanConstantContext * /*ctx*/) override {}

    virtual void exitBooleanConstant(LuminusParser::BooleanConstantContext * /*ctx*/) override {}

    virtual void enterDecrementOperator(LuminusParser::DecrementOperatorContext * /*ctx*/) override {}

    virtual void exitDecrementOperator(LuminusParser::DecrementOperatorContext * /*ctx*/) override {}

    virtual void enterStringConstant(LuminusParser::StringConstantContext * /*ctx*/) override {}

    virtual void exitStringConstant(LuminusParser::StringConstantContext * /*ctx*/) override {}

    virtual void enterArgument(LuminusParser::ArgumentContext * /*ctx*/) override {}

    virtual void exitArgument(LuminusParser::ArgumentContext * /*ctx*/) override {}

    virtual void enterFunction_definition(LuminusParser::Function_definitionContext * /*ctx*/) override {}

    virtual void exitFunction_definition(LuminusParser::Function_definitionContext * /*ctx*/) override {}

    virtual void enterClass_definition(LuminusParser::Class_definitionContext * /*ctx*/) override {}

    virtual void exitClass_definition(LuminusParser::Class_definitionContext * /*ctx*/) override {}

    virtual void enterStatement(LuminusParser::StatementContext * /*ctx*/) override {}

    virtual void exitStatement(LuminusParser::StatementContext * /*ctx*/) override {}

    virtual void enterBlockExpression(LuminusParser::BlockExpressionContext * /*ctx*/) override {}

    virtual void exitBlockExpression(LuminusParser::BlockExpressionContext * /*ctx*/) override {}

    virtual void enterStart(LuminusParser::StartContext * /*ctx*/) override {}

    virtual void exitStart(LuminusParser::StartContext * /*ctx*/) override {}


    virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override {}

    virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override {}

    virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override {}

    virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override {}

};

