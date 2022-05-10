
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LuminusParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, MUL = 10, DIV = 11, MOD = 12, ADD = 13, SUB = 14, 
    LT = 15, GT = 16, LTE = 17, GTE = 18, EQ = 19, NOT_EQ = 20, LOG_AND = 21, 
    LOG_OR = 22, LOG_NOT = 23, TRUE_CONST = 24, FALSE_CONST = 25, VOID = 26, 
    STRING_CONST = 27, INTEGER_LITERAL = 28, FLOAT_LITERAL = 29, DIGIT = 30, 
    FUNCTION = 31, ARROW = 32, WHILE = 33, FOR = 34, RETURN = 35, IF = 36, 
    ELIF = 37, ELSE = 38, NEW = 39, DELETE = 40, TYPE = 41, INT = 42, BYTE = 43, 
    LONG = 44, DOUBLE = 45, STRING = 46, BOOL = 47, IDENTIFIER = 48, FUNC_OOP_MODIFIERS = 49, 
    FUNC_VISIBILITY_MODIFIERS = 50, WHITESPACE = 51
  };

  enum {
    RuleInit_stmt = 0, RuleReinit_stmt = 1, RuleDecl_stmt = 2, RuleVar_set_stmts = 3, 
    RuleExpression = 4, RuleArgument = 5, RuleFunc_call = 6, RuleFunction_definition = 7, 
    RuleClass_definition = 8, RuleStatement = 9, RuleBlock = 10, RuleStart = 11
  };

  explicit LuminusParser(antlr4::TokenStream *input);
  ~LuminusParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Init_stmtContext;
  class Reinit_stmtContext;
  class Decl_stmtContext;
  class Var_set_stmtsContext;
  class ExpressionContext;
  class ArgumentContext;
  class Func_callContext;
  class Function_definitionContext;
  class Class_definitionContext;
  class StatementContext;
  class BlockContext;
  class StartContext; 

  class  Init_stmtContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    antlr4::Token *id = nullptr;
    LuminusParser::ExpressionContext *rhs = nullptr;
    Init_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Init_stmtContext* init_stmt();

  class  Reinit_stmtContext : public antlr4::ParserRuleContext {
  public:
    LuminusParser::ExpressionContext *id = nullptr;
    LuminusParser::ExpressionContext *rhs = nullptr;
    Reinit_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reinit_stmtContext* reinit_stmt();

  class  Decl_stmtContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    antlr4::Token *id = nullptr;
    Decl_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_stmtContext* decl_stmt();

  class  Var_set_stmtsContext : public antlr4::ParserRuleContext {
  public:
    Var_set_stmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Init_stmtContext *init_stmt();
    Reinit_stmtContext *reinit_stmt();
    Decl_stmtContext *decl_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_set_stmtsContext* var_set_stmts();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AdditionExpressionContext : public ExpressionContext {
  public:
    AdditionExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ADD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberAccessExpressionContext : public ExpressionContext {
  public:
    MemberAccessExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *front = nullptr;
    antlr4::Token *id = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Func_Call_ExpressionContext : public ExpressionContext {
  public:
    Func_Call_ExpressionContext(ExpressionContext *ctx);

    LuminusParser::Func_callContext *call = nullptr;
    Func_callContext *func_call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModulusExpressionContext : public ExpressionContext {
  public:
    ModulusExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MOD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FloatConstantContext : public ExpressionContext {
  public:
    FloatConstantContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryNegateExpressionContext : public ExpressionContext {
  public:
    UnaryNegateExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *exp = nullptr;
    antlr4::tree::TerminalNode *SUB();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplyExpressionContext : public ExpressionContext {
  public:
    MultiplyExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MUL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExplicitCastExpressionContext : public ExpressionContext {
  public:
    ExplicitCastExpressionContext(ExpressionContext *ctx);

    antlr4::Token *cast_type = nullptr;
    LuminusParser::ExpressionContext *exp = nullptr;
    antlr4::tree::TerminalNode *TYPE();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExpressionContext : public ExpressionContext {
  public:
    NotExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *exp = nullptr;
    antlr4::tree::TerminalNode *LOG_NOT();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParanthesesExpressionContext : public ExpressionContext {
  public:
    ParanthesesExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *inner = nullptr;
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerConstantContext : public ExpressionContext {
  public:
    IntegerConstantContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *INTEGER_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdentifierExpressionContext : public ExpressionContext {
  public:
    IdentifierExpressionContext(ExpressionContext *ctx);

    antlr4::Token *id = nullptr;
    antlr4::tree::TerminalNode *IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubtractionExpressionContext : public ExpressionContext {
  public:
    SubtractionExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonExpressionContext : public ExpressionContext {
  public:
    ComparisonExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NOT_EQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalExpressionContext : public ExpressionContext {
  public:
    LogicalExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *log_op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LOG_AND();
    antlr4::tree::TerminalNode *LOG_OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivideExpressionContext : public ExpressionContext {
  public:
    DivideExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncrementOperatorContext : public ExpressionContext {
  public:
    IncrementOperatorContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *exp = nullptr;
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MethodAccessExpressionContext : public ExpressionContext {
  public:
    MethodAccessExpressionContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *front = nullptr;
    LuminusParser::Func_callContext *method = nullptr;
    ExpressionContext *expression();
    Func_callContext *func_call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanConstantContext : public ExpressionContext {
  public:
    BooleanConstantContext(ExpressionContext *ctx);

    antlr4::Token *BOOL_LITERAL = nullptr;
    antlr4::tree::TerminalNode *TRUE_CONST();
    antlr4::tree::TerminalNode *FALSE_CONST();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecrementOperatorContext : public ExpressionContext {
  public:
    DecrementOperatorContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *exp = nullptr;
    std::vector<antlr4::tree::TerminalNode *> SUB();
    antlr4::tree::TerminalNode* SUB(size_t i);
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringConstantContext : public ExpressionContext {
  public:
    StringConstantContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *STRING_CONST();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dec_type = nullptr;
    antlr4::Token *id = nullptr;
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_callContext() = default;
    void copyFrom(Func_callContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionCallContext : public Func_callContext {
  public:
    FunctionCallContext(Func_callContext *ctx);

    antlr4::Token *funcid = nullptr;
    LuminusParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> args;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_callContext* func_call();

  class  Function_definitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *func_name = nullptr;
    LuminusParser::ArgumentContext *argumentContext = nullptr;
    std::vector<ArgumentContext *> args;
    antlr4::Token *return_type = nullptr;
    LuminusParser::BlockContext *vals = nullptr;
    Function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *IDENTIFIER();
    BlockContext *block();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *VOID();
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_definitionContext* function_definition();

  class  Class_definitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *class_name = nullptr;
    Class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<Function_definitionContext *> function_definition();
    Function_definitionContext* function_definition(size_t i);
    std::vector<Decl_stmtContext *> decl_stmt();
    Decl_stmtContext* decl_stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_definitionContext* class_definition();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Var_set_stmtsContext *var_set_stmts();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BlockContext() = default;
    void copyFrom(BlockContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlockExpressionContext : public BlockContext {
  public:
    BlockExpressionContext(BlockContext *ctx);

    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BlockContext* block();

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_definitionContext *> function_definition();
    Function_definitionContext* function_definition(size_t i);
    std::vector<Class_definitionContext *> class_definition();
    Class_definitionContext* class_definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

