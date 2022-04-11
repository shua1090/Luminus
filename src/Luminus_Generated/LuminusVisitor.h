
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuminusParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LuminusParser.
 */
class LuminusVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

    /**
     * Visit parse trees produced by LuminusParser.
     */
    virtual antlrcpp::Any visitStart(LuminusParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(LuminusParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitReinitialization(LuminusParser::ReinitializationContext *context) = 0;

    virtual antlrcpp::Any visitInitialization(LuminusParser::InitializationContext *context) = 0;

    virtual antlrcpp::Any visitParantheses(LuminusParser::ParanthesesContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) = 0;

    virtual antlrcpp::Any visitDereferenceExpression(LuminusParser::DereferenceExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStringConst(LuminusParser::StringConstContext *context) = 0;

    virtual antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitValueOfPointerExpression(LuminusParser::ValueOfPointerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastToType(LuminusParser::CastToTypeContext *context) = 0;

    virtual antlrcpp::Any visitBool_Const(LuminusParser::Bool_ConstContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(LuminusParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitModulus(LuminusParser::ModulusContext *context) = 0;

    virtual antlrcpp::Any visitUnary_Negate(LuminusParser::Unary_NegateContext *context) = 0;

    virtual antlrcpp::Any visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) = 0;

    virtual antlrcpp::Any visitCompExpression(LuminusParser::CompExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExtendedComparison(LuminusParser::ExtendedComparisonContext *context) = 0;

    virtual antlrcpp::Any visitIndexing(LuminusParser::IndexingContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(LuminusParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(LuminusParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitElse_statement(LuminusParser::Else_statementContext *context) = 0;

    virtual antlrcpp::Any visitElif_statement(LuminusParser::Elif_statementContext *context) = 0;

    virtual antlrcpp::Any visitConditional_statement(LuminusParser::Conditional_statementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(LuminusParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) = 0;


};

