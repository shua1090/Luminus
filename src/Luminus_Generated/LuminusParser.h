
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class LuminusParser : public antlr4::Parser {
public:
    enum {
        T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7,
        T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, MUL = 13, DIV = 14,
        ADD = 15, SUB = 16, LESS_THAN = 17, GREATER_THAN = 18, LESS_THAN_EQUAL = 19,
        GREATER_THAN_EQUAL = 20, EQUAL_TO = 21, TRUE_CONST = 22, FALSE_CONST = 23,
        VOID = 24, TYPE = 25, STRING_CONST = 26, IDENTIFIER = 27, INTEGER_CONST = 28,
        FLOATING_CONST = 29, DIGIT = 30, OCTAL_DIG = 31, HEX_DIG = 32, WHITESPACE = 33
    };

    enum {
        RuleStart = 0, RuleExpression = 1, RuleArgument = 2, RuleFunction = 3,
        RuleFunc_call = 4, RuleAssignment = 5, RuleReturn_statement = 6, RuleBlock = 7,
        RuleStatement = 8
    };

    explicit LuminusParser(antlr4::TokenStream *input);

    ~LuminusParser();

    virtual std::string getGrammarFileName() const override;

    virtual const antlr4::atn::ATN &getATN() const override { return _atn; };

    virtual const std::vector<std::string> &
    getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
    virtual const std::vector<std::string> &getRuleNames() const override;

    virtual antlr4::dfa::Vocabulary &getVocabulary() const override;


    class StartContext;

    class ExpressionContext;

    class ArgumentContext;

    class FunctionContext;

    class Func_callContext;

    class AssignmentContext;

    class Return_statementContext;

    class BlockContext;

    class StatementContext;

    class StartContext : public antlr4::ParserRuleContext {
    public:
        StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        std::vector<FunctionContext *> function();

        FunctionContext *function(size_t i);

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    StartContext *start();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Bool_ConstContext : public ExpressionContext {
  public:
    Bool_ConstContext(ExpressionContext *ctx);

    antlr4::Token *BOOL_CONST = nullptr;
    antlr4::tree::TerminalNode *TRUE_CONST();
    antlr4::tree::TerminalNode *FALSE_CONST();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

    class ParanthesesContext : public ExpressionContext {
    public:
        ParanthesesContext(ExpressionContext *ctx);

        LuminusParser::ExpressionContext *inner = nullptr;

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class MultiplyOrDivideContext : public ExpressionContext {
    public:
        MultiplyOrDivideContext(ExpressionContext *ctx);

        LuminusParser::ExpressionContext *left = nullptr;
        antlr4::Token *op = nullptr;
        LuminusParser::ExpressionContext *right = nullptr;

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *MUL();

        antlr4::tree::TerminalNode *DIV();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class StringConstContext : public ExpressionContext {
    public:
        StringConstContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *STRING_CONST();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class Func_Call_ExpressionContext : public ExpressionContext {
    public:
        Func_Call_ExpressionContext(ExpressionContext *ctx);

        LuminusParser::Func_callContext *call = nullptr;

        Func_callContext *func_call();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class Unary_NegateContext : public ExpressionContext {
    public:
        Unary_NegateContext(ExpressionContext *ctx);

        LuminusParser::ExpressionContext *inner = nullptr;

        antlr4::tree::TerminalNode *SUB();

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

  class  AddOrSubtractContext : public ExpressionContext {
  public:
    AddOrSubtractContext(ExpressionContext *ctx);

    LuminusParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LuminusParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FloatExpressionContext : public ExpressionContext {
  public:
    FloatExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *FLOATING_CONST();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

    class IntegerExpressionContext : public ExpressionContext {
    public:
        IntegerExpressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *INTEGER_CONST();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class IdentifierExpressionContext : public ExpressionContext {
    public:
        IdentifierExpressionContext(ExpressionContext *ctx);

        antlr4::Token *id = nullptr;

        antlr4::tree::TerminalNode *IDENTIFIER();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class CastToTypeContext : public ExpressionContext {
    public:
        CastToTypeContext(ExpressionContext *ctx);

        antlr4::Token *cast_type = nullptr;
        LuminusParser::ExpressionContext *inner = nullptr;

        antlr4::tree::TerminalNode *LESS_THAN();

        antlr4::tree::TerminalNode *GREATER_THAN();

        antlr4::tree::TerminalNode *TYPE();

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class BoolExpressionContext : public ExpressionContext {
    public:
        BoolExpressionContext(ExpressionContext *ctx);

        LuminusParser::ExpressionContext *left = nullptr;
        antlr4::Token *op = nullptr;
        LuminusParser::ExpressionContext *right = nullptr;

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *LESS_THAN();

        antlr4::tree::TerminalNode *GREATER_THAN();

        antlr4::tree::TerminalNode *LESS_THAN_EQUAL();

        antlr4::tree::TerminalNode *GREATER_THAN_EQUAL();

        antlr4::tree::TerminalNode *EQUAL_TO();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);

    class ArgumentContext : public antlr4::ParserRuleContext {
    public:
        antlr4::Token *ref = nullptr;
        antlr4::Token *dec_type = nullptr;
        antlr4::Token *id = nullptr;

        ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *TYPE();

        antlr4::tree::TerminalNode *IDENTIFIER();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

    class FunctionContext : public antlr4::ParserRuleContext {
    public:
        FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        FunctionContext() = default;

        void copyFrom(FunctionContext *context);

        using antlr4::ParserRuleContext::copyFrom;

        virtual size_t getRuleIndex() const override;


    };

    class FunctionDeclarationContext : public FunctionContext {
    public:
        FunctionDeclarationContext(FunctionContext *ctx);

        antlr4::Token *funcName = nullptr;
        LuminusParser::ArgumentContext *argumentContext = nullptr;
        std::vector<ArgumentContext *> args;
        antlr4::Token *returnType = nullptr;

        antlr4::tree::TerminalNode *IDENTIFIER();

        antlr4::tree::TerminalNode *TYPE();

        antlr4::tree::TerminalNode *VOID();

        std::vector<StatementContext *> statement();

        StatementContext *statement(size_t i);

        std::vector<ArgumentContext *> argument();

        ArgumentContext *argument(size_t i);

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    FunctionContext *function();

    class Func_callContext : public antlr4::ParserRuleContext {
    public:
        Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        Func_callContext() = default;

        void copyFrom(Func_callContext *context);

        using antlr4::ParserRuleContext::copyFrom;

        virtual size_t getRuleIndex() const override;


    };

    class FunctionCallContext : public Func_callContext {
    public:
        FunctionCallContext(Func_callContext *ctx);

        antlr4::Token *funcid = nullptr;
        LuminusParser::ExpressionContext *expressionContext = nullptr;
        std::vector<ExpressionContext *> args;

        antlr4::tree::TerminalNode *IDENTIFIER();

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Func_callContext *func_call();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentContext() = default;
    void copyFrom(AssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ReinitializationContext : public AssignmentContext {
  public:
    ReinitializationContext(AssignmentContext *ctx);

    antlr4::Token *id = nullptr;
    LuminusParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitializationContext : public AssignmentContext {
  public:
    InitializationContext(AssignmentContext *ctx);

    antlr4::Token *dec_type = nullptr;
    antlr4::Token *id = nullptr;
    LuminusParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationContext : public AssignmentContext {
  public:
    DeclarationContext(AssignmentContext *ctx);

    antlr4::Token *dec_type = nullptr;
    antlr4::Token *id = nullptr;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentContext* assignment();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Return_statementContext() = default;
    void copyFrom(Return_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

    class ReturnStatementContext : public Return_statementContext {
    public:
        ReturnStatementContext(Return_statementContext *ctx);

        LuminusParser::ExpressionContext *value = nullptr;

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Return_statementContext *return_statement();

    class BlockContext : public antlr4::ParserRuleContext {
    public:
        BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        BlockContext() = default;

        void copyFrom(BlockContext *context);

        using antlr4::ParserRuleContext::copyFrom;

        virtual size_t getRuleIndex() const override;


    };

    class BlockExpressionContext : public BlockContext {
    public:
        BlockExpressionContext(BlockContext *ctx);

        std::vector<StatementContext *> statement();

        StatementContext *statement(size_t i);

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    BlockContext *block();

    class StatementContext : public antlr4::ParserRuleContext {
    public:
        StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        AssignmentContext *assignment();

        Return_statementContext *return_statement();

        Func_callContext *func_call();

        BlockContext *block();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    StatementContext *statement();


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

