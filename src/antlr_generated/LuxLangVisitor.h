
// Generated from LuxLang.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LuxLangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LuxLangParser.
 */
class  LuxLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LuxLangParser.
   */
    virtual antlrcpp::Any visitStart(LuxLangParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitBool_Const(LuxLangParser::Bool_ConstContext *context) = 0;

    virtual antlrcpp::Any visitParantheses(LuxLangParser::ParanthesesContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyOrDivide(LuxLangParser::MultiplyOrDivideContext *context) = 0;

    virtual antlrcpp::Any visitUnary_Negate(LuxLangParser::Unary_NegateContext *context) = 0;

    virtual antlrcpp::Any visitAddOrSubtract(LuxLangParser::AddOrSubtractContext *context) = 0;

    virtual antlrcpp::Any visitFloatExpression(LuxLangParser::FloatExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntegerExpression(LuxLangParser::IntegerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(LuxLangParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(LuxLangParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBoolExpression(LuxLangParser::BoolExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgument(LuxLangParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(LuxLangParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConditional_if(LuxLangParser::Conditional_ifContext *context) = 0;

    virtual antlrcpp::Any visitConditional_else(LuxLangParser::Conditional_elseContext *context) = 0;

    virtual antlrcpp::Any visitInitialization(LuxLangParser::InitializationContext *context) = 0;

    virtual antlrcpp::Any visitBoolInitialization(LuxLangParser::BoolInitializationContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(LuxLangParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(LuxLangParser::StatementContext *context) = 0;


};
