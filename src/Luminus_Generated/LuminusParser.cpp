
// Generated from Luminus.g4 by ANTLR 4.9.3


#include "LuminusListener.h"
#include "LuminusVisitor.h"

#include "LuminusParser.h"


using namespace antlrcpp;
using namespace antlr4;

LuminusParser::LuminusParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LuminusParser::~LuminusParser() {
  delete _interpreter;
}

std::string LuminusParser::getGrammarFileName() const {
  return "Luminus.g4";
}

const std::vector<std::string>& LuminusParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LuminusParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Init_stmtContext ------------------------------------------------------------------

LuminusParser::Init_stmtContext::Init_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuminusParser::Init_stmtContext::IDENTIFIER() {
  return getTokens(LuminusParser::IDENTIFIER);
}

tree::TerminalNode* LuminusParser::Init_stmtContext::IDENTIFIER(size_t i) {
  return getToken(LuminusParser::IDENTIFIER, i);
}

LuminusParser::ExpressionContext* LuminusParser::Init_stmtContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

tree::TerminalNode* LuminusParser::Init_stmtContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}


size_t LuminusParser::Init_stmtContext::getRuleIndex() const {
  return LuminusParser::RuleInit_stmt;
}

void LuminusParser::Init_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit_stmt(this);
}

void LuminusParser::Init_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit_stmt(this);
}


antlrcpp::Any LuminusParser::Init_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitInit_stmt(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Init_stmtContext* LuminusParser::init_stmt() {
  Init_stmtContext *_localctx = _tracker.createInstance<Init_stmtContext>(_ctx, getState());
  enterRule(_localctx, 0, LuminusParser::RuleInit_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    antlrcpp::downCast<Init_stmtContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == LuminusParser::TYPE

    || _la == LuminusParser::IDENTIFIER)) {
      antlrcpp::downCast<Init_stmtContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(25);
    antlrcpp::downCast<Init_stmtContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
    setState(26);
    match(LuminusParser::T__0);
    setState(27);
    antlrcpp::downCast<Init_stmtContext *>(_localctx)->rhs = expression(0);
    setState(28);
    match(LuminusParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reinit_stmtContext ------------------------------------------------------------------

LuminusParser::Reinit_stmtContext::Reinit_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuminusParser::ExpressionContext *> LuminusParser::Reinit_stmtContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::Reinit_stmtContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}


size_t LuminusParser::Reinit_stmtContext::getRuleIndex() const {
  return LuminusParser::RuleReinit_stmt;
}

void LuminusParser::Reinit_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReinit_stmt(this);
}

void LuminusParser::Reinit_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReinit_stmt(this);
}


antlrcpp::Any LuminusParser::Reinit_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitReinit_stmt(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Reinit_stmtContext* LuminusParser::reinit_stmt() {
  Reinit_stmtContext *_localctx = _tracker.createInstance<Reinit_stmtContext>(_ctx, getState());
  enterRule(_localctx, 2, LuminusParser::RuleReinit_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    antlrcpp::downCast<Reinit_stmtContext *>(_localctx)->id = expression(0);
    setState(31);
    match(LuminusParser::T__0);
    setState(32);
    antlrcpp::downCast<Reinit_stmtContext *>(_localctx)->rhs = expression(0);
    setState(33);
    match(LuminusParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_stmtContext ------------------------------------------------------------------

LuminusParser::Decl_stmtContext::Decl_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuminusParser::Decl_stmtContext::IDENTIFIER() {
  return getTokens(LuminusParser::IDENTIFIER);
}

tree::TerminalNode* LuminusParser::Decl_stmtContext::IDENTIFIER(size_t i) {
  return getToken(LuminusParser::IDENTIFIER, i);
}

tree::TerminalNode* LuminusParser::Decl_stmtContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}


size_t LuminusParser::Decl_stmtContext::getRuleIndex() const {
  return LuminusParser::RuleDecl_stmt;
}

void LuminusParser::Decl_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl_stmt(this);
}

void LuminusParser::Decl_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl_stmt(this);
}


antlrcpp::Any LuminusParser::Decl_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitDecl_stmt(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Decl_stmtContext* LuminusParser::decl_stmt() {
  Decl_stmtContext *_localctx = _tracker.createInstance<Decl_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, LuminusParser::RuleDecl_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    antlrcpp::downCast<Decl_stmtContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == LuminusParser::TYPE

    || _la == LuminusParser::IDENTIFIER)) {
      antlrcpp::downCast<Decl_stmtContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(36);
    antlrcpp::downCast<Decl_stmtContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
    setState(37);
    match(LuminusParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_set_stmtsContext ------------------------------------------------------------------

LuminusParser::Var_set_stmtsContext::Var_set_stmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuminusParser::Init_stmtContext* LuminusParser::Var_set_stmtsContext::init_stmt() {
  return getRuleContext<LuminusParser::Init_stmtContext>(0);
}

LuminusParser::Reinit_stmtContext* LuminusParser::Var_set_stmtsContext::reinit_stmt() {
  return getRuleContext<LuminusParser::Reinit_stmtContext>(0);
}

LuminusParser::Decl_stmtContext* LuminusParser::Var_set_stmtsContext::decl_stmt() {
  return getRuleContext<LuminusParser::Decl_stmtContext>(0);
}


size_t LuminusParser::Var_set_stmtsContext::getRuleIndex() const {
  return LuminusParser::RuleVar_set_stmts;
}

void LuminusParser::Var_set_stmtsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_set_stmts(this);
}

void LuminusParser::Var_set_stmtsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_set_stmts(this);
}


antlrcpp::Any LuminusParser::Var_set_stmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitVar_set_stmts(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Var_set_stmtsContext* LuminusParser::var_set_stmts() {
  Var_set_stmtsContext *_localctx = _tracker.createInstance<Var_set_stmtsContext>(_ctx, getState());
  enterRule(_localctx, 6, LuminusParser::RuleVar_set_stmts);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(39);
        init_stmt();
        break;
    }

        case 2: {
            setState(40);
            reinit_stmt();
            break;
        }

        case 3: {
            setState(41);
            decl_stmt();
            break;
        }

        default:
            break;
    }

  }
  catch (RecognitionException &e) {
      _errHandler->reportError(this, e);
      _localctx->exception = std::current_exception();
      _errHandler->recover(this, _localctx->exception);
  }

    return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

LuminusParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
        : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *LuminusParser::Func_callContext::IDENTIFIER() {
    return getToken(LuminusParser::IDENTIFIER, 0);
}

std::vector<LuminusParser::ExpressionContext *> LuminusParser::Func_callContext::expression() {
    return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext *LuminusParser::Func_callContext::expression(size_t i) {
    return getRuleContext<LuminusParser::ExpressionContext>(i);
}


size_t LuminusParser::Func_callContext::getRuleIndex() const {
    return LuminusParser::RuleFunc_call;
}

void LuminusParser::Func_callContext::enterRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterFunc_call(this);
}

void LuminusParser::Func_callContext::exitRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitFunc_call(this);
}


antlrcpp::Any LuminusParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitFunc_call(this);
    else
        return visitor->visitChildren(this);
}

LuminusParser::Func_callContext *LuminusParser::func_call() {
    Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
    enterRule(_localctx, 8, LuminusParser::RuleFunc_call);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(44);
        antlrcpp::downCast<Func_callContext *>(_localctx)->funcid = match(LuminusParser::IDENTIFIER);
        setState(45);
        match(LuminusParser::T__2);
        setState(54);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & ((1ULL << LuminusParser::T__2)
                               | (1ULL << LuminusParser::SUB)
                               | (1ULL << LuminusParser::LOG_NOT)
                               | (1ULL << LuminusParser::TRUE_CONST)
                               | (1ULL << LuminusParser::FALSE_CONST)
                               | (1ULL << LuminusParser::STRING_CONST)
                               | (1ULL << LuminusParser::INTEGER_LITERAL)
                               | (1ULL << LuminusParser::FLOAT_LITERAL)
                               | (1ULL << LuminusParser::IDENTIFIER))) != 0)) {
            setState(46);
            antlrcpp::downCast<Func_callContext *>(_localctx)->expressionContext = expression(0);
            antlrcpp::downCast<Func_callContext *>(_localctx)->args.push_back(
                    antlrcpp::downCast<Func_callContext *>(_localctx)->expressionContext);
            setState(51);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(47);
                    match(LuminusParser::T__3);
                    setState(48);
                    antlrcpp::downCast<Func_callContext *>(_localctx)->expressionContext = expression(0);
                    antlrcpp::downCast<Func_callContext *>(_localctx)->args.push_back(
                            antlrcpp::downCast<Func_callContext *>(_localctx)->expressionContext);
                }
                setState(53);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
            }
        }
        setState(57);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuminusParser::T__3) {
            setState(56);
            match(LuminusParser::T__3);
        }
        setState(59);
        match(LuminusParser::T__4);

    }
    catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

LuminusParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
        : ParserRuleContext(parent, invokingState) {
}


size_t LuminusParser::ExpressionContext::getRuleIndex() const {
    return LuminusParser::RuleExpression;
}

void LuminusParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AdditionExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::AdditionExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::AdditionExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::AdditionExpressionContext::ADD() {
  return getToken(LuminusParser::ADD, 0);
}

LuminusParser::AdditionExpressionContext::AdditionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::AdditionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditionExpression(this);
}
void LuminusParser::AdditionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditionExpression(this);
}

antlrcpp::Any LuminusParser::AdditionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitAdditionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberAccessExpressionContext ------------------------------------------------------------------

LuminusParser::ExpressionContext* LuminusParser::MemberAccessExpressionContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

tree::TerminalNode* LuminusParser::MemberAccessExpressionContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

LuminusParser::MemberAccessExpressionContext::MemberAccessExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::MemberAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessExpression(this);
}
void LuminusParser::MemberAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessExpression(this);
}

antlrcpp::Any LuminusParser::MemberAccessExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitMemberAccessExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_Call_ExpressionContext ------------------------------------------------------------------

LuminusParser::Func_callContext* LuminusParser::Func_Call_ExpressionContext::func_call() {
  return getRuleContext<LuminusParser::Func_callContext>(0);
}

LuminusParser::Func_Call_ExpressionContext::Func_Call_ExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::Func_Call_ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_Call_Expression(this);
}
void LuminusParser::Func_Call_ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_Call_Expression(this);
}

antlrcpp::Any LuminusParser::Func_Call_ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitFunc_Call_Expression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModulusExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::ModulusExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::ModulusExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::ModulusExpressionContext::MOD() {
  return getToken(LuminusParser::MOD, 0);
}

LuminusParser::ModulusExpressionContext::ModulusExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::ModulusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModulusExpression(this);
}
void LuminusParser::ModulusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModulusExpression(this);
}

antlrcpp::Any LuminusParser::ModulusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitModulusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatConstantContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::FloatConstantContext::FLOAT_LITERAL() {
  return getToken(LuminusParser::FLOAT_LITERAL, 0);
}

LuminusParser::FloatConstantContext::FloatConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::FloatConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatConstant(this);
}
void LuminusParser::FloatConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatConstant(this);
}

antlrcpp::Any LuminusParser::FloatConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitFloatConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryNegateExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::UnaryNegateExpressionContext::SUB() {
  return getToken(LuminusParser::SUB, 0);
}

LuminusParser::ExpressionContext* LuminusParser::UnaryNegateExpressionContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::UnaryNegateExpressionContext::UnaryNegateExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::UnaryNegateExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryNegateExpression(this);
}
void LuminusParser::UnaryNegateExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryNegateExpression(this);
}

antlrcpp::Any LuminusParser::UnaryNegateExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitUnaryNegateExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplyExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::MultiplyExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::MultiplyExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::MultiplyExpressionContext::MUL() {
  return getToken(LuminusParser::MUL, 0);
}

LuminusParser::MultiplyExpressionContext::MultiplyExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::MultiplyExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplyExpression(this);
}
void LuminusParser::MultiplyExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplyExpression(this);
}

antlrcpp::Any LuminusParser::MultiplyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitMultiplyExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExplicitCastExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::ExplicitCastExpressionContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}

LuminusParser::ExpressionContext* LuminusParser::ExplicitCastExpressionContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::ExplicitCastExpressionContext::ExplicitCastExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::ExplicitCastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitCastExpression(this);
}
void LuminusParser::ExplicitCastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitCastExpression(this);
}

antlrcpp::Any LuminusParser::ExplicitCastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitExplicitCastExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::NotExpressionContext::LOG_NOT() {
  return getToken(LuminusParser::LOG_NOT, 0);
}

LuminusParser::ExpressionContext* LuminusParser::NotExpressionContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::NotExpressionContext::NotExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void LuminusParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}

antlrcpp::Any LuminusParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParanthesesExpressionContext ------------------------------------------------------------------

LuminusParser::ExpressionContext* LuminusParser::ParanthesesExpressionContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::ParanthesesExpressionContext::ParanthesesExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::ParanthesesExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParanthesesExpression(this);
}
void LuminusParser::ParanthesesExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParanthesesExpression(this);
}

antlrcpp::Any LuminusParser::ParanthesesExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitParanthesesExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerConstantContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::IntegerConstantContext::INTEGER_LITERAL() {
  return getToken(LuminusParser::INTEGER_LITERAL, 0);
}

LuminusParser::IntegerConstantContext::IntegerConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::IntegerConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerConstant(this);
}
void LuminusParser::IntegerConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerConstant(this);
}

antlrcpp::Any LuminusParser::IntegerConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitIntegerConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::IdentifierExpressionContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

LuminusParser::IdentifierExpressionContext::IdentifierExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void LuminusParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}

antlrcpp::Any LuminusParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubtractionExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::SubtractionExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::SubtractionExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::SubtractionExpressionContext::SUB() {
  return getToken(LuminusParser::SUB, 0);
}

LuminusParser::SubtractionExpressionContext::SubtractionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::SubtractionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractionExpression(this);
}
void LuminusParser::SubtractionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractionExpression(this);
}

antlrcpp::Any LuminusParser::SubtractionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitSubtractionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::ComparisonExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::ComparisonExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::ComparisonExpressionContext::LT() {
  return getToken(LuminusParser::LT, 0);
}

tree::TerminalNode* LuminusParser::ComparisonExpressionContext::GT() {
  return getToken(LuminusParser::GT, 0);
}

tree::TerminalNode* LuminusParser::ComparisonExpressionContext::LTE() {
  return getToken(LuminusParser::LTE, 0);
}

tree::TerminalNode* LuminusParser::ComparisonExpressionContext::GTE() {
  return getToken(LuminusParser::GTE, 0);
}

tree::TerminalNode* LuminusParser::ComparisonExpressionContext::EQ() {
  return getToken(LuminusParser::EQ, 0);
}

tree::TerminalNode* LuminusParser::ComparisonExpressionContext::NOT_EQ() {
  return getToken(LuminusParser::NOT_EQ, 0);
}

LuminusParser::ComparisonExpressionContext::ComparisonExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::ComparisonExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonExpression(this);
}
void LuminusParser::ComparisonExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonExpression(this);
}

antlrcpp::Any LuminusParser::ComparisonExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitComparisonExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::LogicalExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::LogicalExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::LogicalExpressionContext::LOG_AND() {
  return getToken(LuminusParser::LOG_AND, 0);
}

tree::TerminalNode* LuminusParser::LogicalExpressionContext::LOG_OR() {
  return getToken(LuminusParser::LOG_OR, 0);
}

LuminusParser::LogicalExpressionContext::LogicalExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::LogicalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpression(this);
}
void LuminusParser::LogicalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpression(this);
}

antlrcpp::Any LuminusParser::LogicalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitLogicalExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivideExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::DivideExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::DivideExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::DivideExpressionContext::DIV() {
  return getToken(LuminusParser::DIV, 0);
}

LuminusParser::DivideExpressionContext::DivideExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::DivideExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivideExpression(this);
}
void LuminusParser::DivideExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivideExpression(this);
}

antlrcpp::Any LuminusParser::DivideExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitDivideExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncrementOperatorContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> LuminusParser::IncrementOperatorContext::ADD() {
  return getTokens(LuminusParser::ADD);
}

tree::TerminalNode* LuminusParser::IncrementOperatorContext::ADD(size_t i) {
  return getToken(LuminusParser::ADD, i);
}

LuminusParser::ExpressionContext* LuminusParser::IncrementOperatorContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::IncrementOperatorContext::IncrementOperatorContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::IncrementOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementOperator(this);
}
void LuminusParser::IncrementOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementOperator(this);
}

antlrcpp::Any LuminusParser::IncrementOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitIncrementOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MethodAccessExpressionContext ------------------------------------------------------------------

LuminusParser::ExpressionContext* LuminusParser::MethodAccessExpressionContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::Func_callContext* LuminusParser::MethodAccessExpressionContext::func_call() {
  return getRuleContext<LuminusParser::Func_callContext>(0);
}

LuminusParser::MethodAccessExpressionContext::MethodAccessExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::MethodAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodAccessExpression(this);
}
void LuminusParser::MethodAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodAccessExpression(this);
}

antlrcpp::Any LuminusParser::MethodAccessExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitMethodAccessExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanConstantContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::BooleanConstantContext::TRUE_CONST() {
  return getToken(LuminusParser::TRUE_CONST, 0);
}

tree::TerminalNode* LuminusParser::BooleanConstantContext::FALSE_CONST() {
  return getToken(LuminusParser::FALSE_CONST, 0);
}

LuminusParser::BooleanConstantContext::BooleanConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::BooleanConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanConstant(this);
}
void LuminusParser::BooleanConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanConstant(this);
}

antlrcpp::Any LuminusParser::BooleanConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitBooleanConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecrementOperatorContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> LuminusParser::DecrementOperatorContext::SUB() {
  return getTokens(LuminusParser::SUB);
}

tree::TerminalNode* LuminusParser::DecrementOperatorContext::SUB(size_t i) {
  return getToken(LuminusParser::SUB, i);
}

LuminusParser::ExpressionContext* LuminusParser::DecrementOperatorContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::DecrementOperatorContext::DecrementOperatorContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::DecrementOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementOperator(this);
}
void LuminusParser::DecrementOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementOperator(this);
}

antlrcpp::Any LuminusParser::DecrementOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitDecrementOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringConstantContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::StringConstantContext::STRING_CONST() {
  return getToken(LuminusParser::STRING_CONST, 0);
}

LuminusParser::StringConstantContext::StringConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::StringConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringConstant(this);
}
void LuminusParser::StringConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringConstant(this);
}

antlrcpp::Any LuminusParser::StringConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitStringConstant(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::ExpressionContext* LuminusParser::expression() {
   return expression(0);
}

LuminusParser::ExpressionContext* LuminusParser::expression(int precedence) {
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    LuminusParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
    LuminusParser::ExpressionContext *previousContext = _localctx;
    (void) previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 10;
    enterRecursionRule(_localctx, 10, LuminusParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
  try {
      size_t alt;
      enterOuterAlt(_localctx, 1);
      setState(80);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
          case 1: {
              _localctx = _tracker.createInstance<BooleanConstantContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;

              setState(62);
              antlrcpp::downCast<BooleanConstantContext *>(_localctx)->BOOL_LITERAL = _input->LT(1);
              _la = _input->LA(1);
              if (!(_la == LuminusParser::TRUE_CONST

                    || _la == LuminusParser::FALSE_CONST)) {
                  antlrcpp::downCast<BooleanConstantContext *>(_localctx)->BOOL_LITERAL = _errHandler->recoverInline(
                          this);
              } else {
                  _errHandler->reportMatch(this);
                  consume();
              }
              break;
          }

    case 2: {
        _localctx = _tracker.createInstance<IntegerConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(63);
        match(LuminusParser::INTEGER_LITERAL);
        break;
    }

    case 3: {
        _localctx = _tracker.createInstance<FloatConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(64);
        match(LuminusParser::FLOAT_LITERAL);
        break;
    }

    case 4: {
        _localctx = _tracker.createInstance<StringConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(65);
        match(LuminusParser::STRING_CONST);
        break;
    }

    case 5: {
        _localctx = _tracker.createInstance<ParanthesesExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(66);
        match(LuminusParser::T__2);
        setState(67);
        antlrcpp::downCast<ParanthesesExpressionContext *>(_localctx)->inner = expression(0);
        setState(68);
        match(LuminusParser::T__4);
        break;
    }

    case 6: {
        _localctx = _tracker.createInstance<Func_Call_ExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(70);
        antlrcpp::downCast<Func_Call_ExpressionContext *>(_localctx)->call = func_call();
        break;
    }

    case 7: {
        _localctx = _tracker.createInstance<UnaryNegateExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(71);
        match(LuminusParser::SUB);
        setState(72);
        antlrcpp::downCast<UnaryNegateExpressionContext *>(_localctx)->exp = expression(11);
        break;
    }

    case 8: {
        _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(73);
        antlrcpp::downCast<IdentifierExpressionContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
        break;
    }

    case 9: {
        _localctx = _tracker.createInstance<ExplicitCastExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(74);
        match(LuminusParser::T__2);
        setState(75);
        antlrcpp::downCast<ExplicitCastExpressionContext *>(_localctx)->cast_type = match(LuminusParser::TYPE);
        setState(76);
        match(LuminusParser::T__4);
        setState(77);
        antlrcpp::downCast<ExplicitCastExpressionContext *>(_localctx)->exp = expression(4);
        break;
    }

    case 10: {
        _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(78);
        match(LuminusParser::LOG_NOT);
        setState(79);
        antlrcpp::downCast<NotExpressionContext *>(_localctx)->exp = expression(1);
        break;
    }

          default:
              break;
      }
      _ctx->stop = _input->LT(-1);
      setState(117);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
              if (!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext = _localctx;
              setState(115);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
                  case 1: {
                      auto newContext = _tracker.createInstance<MultiplyExpressionContext>(
                              _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                      _localctx = newContext;
                      newContext->left = previousContext;
                      pushNewRecursionContext(newContext, startState, RuleExpression);
                      setState(82);

                      if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
                      setState(83);
                      antlrcpp::downCast<MultiplyExpressionContext *>(_localctx)->op = match(LuminusParser::MUL);
                      setState(84);
                      antlrcpp::downCast<MultiplyExpressionContext *>(_localctx)->right = expression(11);
                      break;
                  }

                  case 2: {
                      auto newContext = _tracker.createInstance<DivideExpressionContext>(
                              _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                      _localctx = newContext;
                      newContext->left = previousContext;
                      pushNewRecursionContext(newContext, startState, RuleExpression);
                      setState(85);

                      if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
                      setState(86);
                      antlrcpp::downCast<DivideExpressionContext *>(_localctx)->op = match(LuminusParser::DIV);
                      setState(87);
                      antlrcpp::downCast<DivideExpressionContext *>(_localctx)->right = expression(10);
                      break;
                  }

                  case 3: {
                      auto newContext = _tracker.createInstance<ModulusExpressionContext>(
                              _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                      _localctx = newContext;
                      newContext->left = previousContext;
                      pushNewRecursionContext(newContext, startState, RuleExpression);
                      setState(88);

                      if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
                      setState(89);
                      antlrcpp::downCast<ModulusExpressionContext *>(_localctx)->op = match(LuminusParser::MOD);
                      setState(90);
                      antlrcpp::downCast<ModulusExpressionContext *>(_localctx)->right = expression(9);
                      break;
                  }

        case 4: {
            auto newContext = _tracker.createInstance<AdditionExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(91);

            if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
            setState(92);
            antlrcpp::downCast<AdditionExpressionContext *>(_localctx)->op = match(LuminusParser::ADD);
            setState(93);
            antlrcpp::downCast<AdditionExpressionContext *>(_localctx)->right = expression(8);
            break;
        }

        case 5: {
            auto newContext = _tracker.createInstance<SubtractionExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(94);

            if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
            setState(95);
            antlrcpp::downCast<SubtractionExpressionContext *>(_localctx)->op = match(LuminusParser::SUB);
            setState(96);
            antlrcpp::downCast<SubtractionExpressionContext *>(_localctx)->right = expression(7);
            break;
        }

        case 6: {
            auto newContext = _tracker.createInstance<ComparisonExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(97);

            if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
            setState(98);
            antlrcpp::downCast<ComparisonExpressionContext *>(_localctx)->op = _input->LT(1);
            _la = _input->LA(1);
            if (!((((_la & ~0x3fULL) == 0) &&
                   ((1ULL << _la) & ((1ULL << LuminusParser::LT)
                                     | (1ULL << LuminusParser::GT)
                                     | (1ULL << LuminusParser::LTE)
                                     | (1ULL << LuminusParser::GTE)
                                     | (1ULL << LuminusParser::EQ)
                                     | (1ULL << LuminusParser::NOT_EQ))) != 0))) {
                antlrcpp::downCast<ComparisonExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(99);
            antlrcpp::downCast<ComparisonExpressionContext *>(_localctx)->right = expression(4);
            break;
        }

        case 7: {
            auto newContext = _tracker.createInstance<LogicalExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(100);

            if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
            setState(101);
            antlrcpp::downCast<LogicalExpressionContext *>(_localctx)->log_op = _input->LT(1);
            _la = _input->LA(1);
            if (!(_la == LuminusParser::LOG_AND

                  || _la == LuminusParser::LOG_OR)) {
                antlrcpp::downCast<LogicalExpressionContext *>(_localctx)->log_op = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(102);
            antlrcpp::downCast<LogicalExpressionContext *>(_localctx)->right = expression(3);
            break;
        }

        case 8: {
            auto newContext = _tracker.createInstance<MemberAccessExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->front = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(103);

            if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
            setState(104);
            match(LuminusParser::T__5);
            setState(105);
            antlrcpp::downCast<MemberAccessExpressionContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
            break;
        }

        case 9: {
            auto newContext = _tracker.createInstance<MethodAccessExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->front = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(106);

            if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
            setState(107);
            match(LuminusParser::T__5);
            setState(108);
            antlrcpp::downCast<MethodAccessExpressionContext *>(_localctx)->method = func_call();
            break;
        }

        case 10: {
            auto newContext = _tracker.createInstance<IncrementOperatorContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->exp = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(109);

            if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
            setState(110);
            match(LuminusParser::ADD);
            setState(111);
            match(LuminusParser::ADD);
            break;
        }

        case 11: {
            auto newContext = _tracker.createInstance<DecrementOperatorContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->exp = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(112);

            if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
            setState(113);
            match(LuminusParser::SUB);
            setState(114);
            match(LuminusParser::SUB);
            break;
        }

                  default:
                      break;
              }
          }
          setState(119);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

LuminusParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuminusParser::ArgumentContext::IDENTIFIER() {
  return getTokens(LuminusParser::IDENTIFIER);
}

tree::TerminalNode* LuminusParser::ArgumentContext::IDENTIFIER(size_t i) {
  return getToken(LuminusParser::IDENTIFIER, i);
}

tree::TerminalNode* LuminusParser::ArgumentContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}


size_t LuminusParser::ArgumentContext::getRuleIndex() const {
  return LuminusParser::RuleArgument;
}

void LuminusParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void LuminusParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any LuminusParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::ArgumentContext* LuminusParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
    enterRule(_localctx, 12, LuminusParser::RuleArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      enterOuterAlt(_localctx, 1);
      setState(120);
      antlrcpp::downCast<ArgumentContext *>(_localctx)->dec_type = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == LuminusParser::TYPE

            || _la == LuminusParser::IDENTIFIER)) {
          antlrcpp::downCast<ArgumentContext *>(_localctx)->dec_type = _errHandler->recoverInline(this);
      } else {
          _errHandler->reportMatch(this);
          consume();
      }
      setState(121);
      antlrcpp::downCast<ArgumentContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_definitionContext ------------------------------------------------------------------

LuminusParser::Function_definitionContext::Function_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuminusParser::Function_definitionContext::FUNCTION() {
  return getToken(LuminusParser::FUNCTION, 0);
}

tree::TerminalNode* LuminusParser::Function_definitionContext::ARROW() {
  return getToken(LuminusParser::ARROW, 0);
}

tree::TerminalNode* LuminusParser::Function_definitionContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

LuminusParser::BlockContext* LuminusParser::Function_definitionContext::block() {
  return getRuleContext<LuminusParser::BlockContext>(0);
}

tree::TerminalNode* LuminusParser::Function_definitionContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}

tree::TerminalNode* LuminusParser::Function_definitionContext::VOID() {
  return getToken(LuminusParser::VOID, 0);
}

std::vector<LuminusParser::ArgumentContext *> LuminusParser::Function_definitionContext::argument() {
  return getRuleContexts<LuminusParser::ArgumentContext>();
}

LuminusParser::ArgumentContext* LuminusParser::Function_definitionContext::argument(size_t i) {
  return getRuleContext<LuminusParser::ArgumentContext>(i);
}


size_t LuminusParser::Function_definitionContext::getRuleIndex() const {
  return LuminusParser::RuleFunction_definition;
}

void LuminusParser::Function_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition(this);
}

void LuminusParser::Function_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition(this);
}


antlrcpp::Any LuminusParser::Function_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitFunction_definition(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Function_definitionContext* LuminusParser::function_definition() {
  Function_definitionContext *_localctx = _tracker.createInstance<Function_definitionContext>(_ctx, getState());
  enterRule(_localctx, 14, LuminusParser::RuleFunction_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(LuminusParser::FUNCTION);
    setState(124);
    antlrcpp::downCast<Function_definitionContext *>(_localctx)->func_name = match(LuminusParser::IDENTIFIER);
    setState(125);
    match(LuminusParser::T__2);
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuminusParser::TYPE

    || _la == LuminusParser::IDENTIFIER) {
        setState(126);
        antlrcpp::downCast<Function_definitionContext *>(_localctx)->argumentContext = argument();
        antlrcpp::downCast<Function_definitionContext *>(_localctx)->args.push_back(
                antlrcpp::downCast<Function_definitionContext *>(_localctx)->argumentContext);
        setState(131);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LuminusParser::T__3) {
            setState(127);
            match(LuminusParser::T__3);
            setState(128);
            antlrcpp::downCast<Function_definitionContext *>(_localctx)->argumentContext = argument();
            antlrcpp::downCast<Function_definitionContext *>(_localctx)->args.push_back(
                    antlrcpp::downCast<Function_definitionContext *>(_localctx)->argumentContext);
            setState(133);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
      setState(136);
      match(LuminusParser::T__4);
      setState(137);
      match(LuminusParser::ARROW);
      setState(138);
      antlrcpp::downCast<Function_definitionContext *>(_localctx)->return_type = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == LuminusParser::VOID

            || _la == LuminusParser::TYPE)) {
          antlrcpp::downCast<Function_definitionContext *>(_localctx)->return_type = _errHandler->recoverInline(this);
      } else {
          _errHandler->reportMatch(this);
          consume();
      }
      setState(139);
      antlrcpp::downCast<Function_definitionContext *>(_localctx)->vals = block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_definitionContext ------------------------------------------------------------------

LuminusParser::Class_definitionContext::Class_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuminusParser::Class_definitionContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

std::vector<LuminusParser::Function_definitionContext *> LuminusParser::Class_definitionContext::function_definition() {
  return getRuleContexts<LuminusParser::Function_definitionContext>();
}

LuminusParser::Function_definitionContext* LuminusParser::Class_definitionContext::function_definition(size_t i) {
  return getRuleContext<LuminusParser::Function_definitionContext>(i);
}

std::vector<LuminusParser::Decl_stmtContext *> LuminusParser::Class_definitionContext::decl_stmt() {
  return getRuleContexts<LuminusParser::Decl_stmtContext>();
}

LuminusParser::Decl_stmtContext* LuminusParser::Class_definitionContext::decl_stmt(size_t i) {
  return getRuleContext<LuminusParser::Decl_stmtContext>(i);
}


size_t LuminusParser::Class_definitionContext::getRuleIndex() const {
  return LuminusParser::RuleClass_definition;
}

void LuminusParser::Class_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_definition(this);
}

void LuminusParser::Class_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_definition(this);
}


antlrcpp::Any LuminusParser::Class_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitClass_definition(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Class_definitionContext* LuminusParser::class_definition() {
  Class_definitionContext *_localctx = _tracker.createInstance<Class_definitionContext>(_ctx, getState());
  enterRule(_localctx, 16, LuminusParser::RuleClass_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(LuminusParser::T__6);
    setState(142);
    antlrcpp::downCast<Class_definitionContext *>(_localctx)->class_name = match(LuminusParser::IDENTIFIER);
    setState(143);
    match(LuminusParser::T__7);
    setState(146); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(146);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LuminusParser::FUNCTION: {
          setState(144);
          function_definition();
          break;
        }

        case LuminusParser::TYPE:
        case LuminusParser::IDENTIFIER: {
          setState(145);
          decl_stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(148); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuminusParser::FUNCTION)
      | (1ULL << LuminusParser::TYPE)
      | (1ULL << LuminusParser::IDENTIFIER))) != 0));
    setState(150);
    match(LuminusParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

LuminusParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuminusParser::ExpressionContext* LuminusParser::StatementContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::Var_set_stmtsContext* LuminusParser::StatementContext::var_set_stmts() {
  return getRuleContext<LuminusParser::Var_set_stmtsContext>(0);
}


size_t LuminusParser::StatementContext::getRuleIndex() const {
  return LuminusParser::RuleStatement;
}

void LuminusParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void LuminusParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any LuminusParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::StatementContext* LuminusParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, LuminusParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(152);
      expression(0);
      setState(153);
      match(LuminusParser::T__1);
      break;
    }

    case 2: {
      setState(155);
      var_set_stmts();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

LuminusParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuminusParser::BlockContext::getRuleIndex() const {
  return LuminusParser::RuleBlock;
}

void LuminusParser::BlockContext::copyFrom(BlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlockExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::StatementContext *> LuminusParser::BlockExpressionContext::statement() {
  return getRuleContexts<LuminusParser::StatementContext>();
}

LuminusParser::StatementContext* LuminusParser::BlockExpressionContext::statement(size_t i) {
  return getRuleContext<LuminusParser::StatementContext>(i);
}

LuminusParser::BlockExpressionContext::BlockExpressionContext(BlockContext *ctx) { copyFrom(ctx); }

void LuminusParser::BlockExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockExpression(this);
}
void LuminusParser::BlockExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockExpression(this);
}

antlrcpp::Any LuminusParser::BlockExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitBlockExpression(this);
  else
    return visitor->visitChildren(this);
}
LuminusParser::BlockContext* LuminusParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, LuminusParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<LuminusParser::BlockExpressionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(LuminusParser::T__7);
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuminusParser::T__2)
      | (1ULL << LuminusParser::SUB)
      | (1ULL << LuminusParser::LOG_NOT)
      | (1ULL << LuminusParser::TRUE_CONST)
      | (1ULL << LuminusParser::FALSE_CONST)
      | (1ULL << LuminusParser::STRING_CONST)
      | (1ULL << LuminusParser::INTEGER_LITERAL)
      | (1ULL << LuminusParser::FLOAT_LITERAL)
      | (1ULL << LuminusParser::TYPE)
      | (1ULL << LuminusParser::IDENTIFIER))) != 0)) {
      setState(159);
      statement();
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(165);
    match(LuminusParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartContext ------------------------------------------------------------------

LuminusParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuminusParser::Function_definitionContext *> LuminusParser::StartContext::function_definition() {
  return getRuleContexts<LuminusParser::Function_definitionContext>();
}

LuminusParser::Function_definitionContext* LuminusParser::StartContext::function_definition(size_t i) {
  return getRuleContext<LuminusParser::Function_definitionContext>(i);
}

std::vector<LuminusParser::Class_definitionContext *> LuminusParser::StartContext::class_definition() {
  return getRuleContexts<LuminusParser::Class_definitionContext>();
}

LuminusParser::Class_definitionContext* LuminusParser::StartContext::class_definition(size_t i) {
  return getRuleContext<LuminusParser::Class_definitionContext>(i);
}


size_t LuminusParser::StartContext::getRuleIndex() const {
  return LuminusParser::RuleStart;
}

void LuminusParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void LuminusParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


antlrcpp::Any LuminusParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::StartContext* LuminusParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 22, LuminusParser::RuleStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(169);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LuminusParser::FUNCTION: {
          setState(167);
          function_definition();
          break;
        }

        case LuminusParser::T__6: {
          setState(168);
          class_definition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(171); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LuminusParser::T__6

    || _la == LuminusParser::FUNCTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LuminusParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
      case 5:
          return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

      default:
          break;
  }
  return true;
}

bool LuminusParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 16);
    case 8: return precpred(_ctx, 15);
    case 9: return precpred(_ctx, 13);
    case 10: return precpred(_ctx, 12);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> LuminusParser::_decisionToDFA;
atn::PredictionContextCache LuminusParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LuminusParser::_atn;
std::vector<uint16_t> LuminusParser::_serializedATN;

std::vector<std::string> LuminusParser::_ruleNames = {
        "init_stmt", "reinit_stmt", "decl_stmt", "var_set_stmts", "func_call",
        "expression", "argument", "function_definition", "class_definition", "statement",
        "block", "start"
};

std::vector<std::string> LuminusParser::_literalNames = {
        "", "'='", "';'", "'('", "','", "')'", "'.'", "'class'", "'{'", "'}'",
        "'*'", "'/'", "'%'", "'+'", "'-'", "'<'", "'>'", "'<='", "'>='", "'=='",
        "'!='", "'and'", "'or'", "'not'", "'true'", "'false'", "'void'", "", "",
        "", "", "'func'", "'->'", "'while'", "'for'", "'return'", "'if'", "'elif'",
        "'else'", "'new'", "'delete'", "", "'int'", "'byte'", "'long'", "'double'",
        "'string'", "'bool'"
};

std::vector<std::string> LuminusParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "MUL", "DIV", "MOD", "ADD", "SUB", 
  "LT", "GT", "LTE", "GTE", "EQ", "NOT_EQ", "LOG_AND", "LOG_OR", "LOG_NOT", 
  "TRUE_CONST", "FALSE_CONST", "VOID", "STRING_CONST", "INTEGER_LITERAL", 
  "FLOAT_LITERAL", "DIGIT", "FUNCTION", "ARROW", "WHILE", "FOR", "RETURN", 
  "IF", "ELIF", "ELSE", "NEW", "DELETE", "TYPE", "INT", "BYTE", "LONG", 
  "DOUBLE", "STRING", "BOOL", "IDENTIFIER", "FUNC_OOP_MODIFIERS", "FUNC_VISIBILITY_MODIFIERS", 
  "WHITESPACE"
};

dfa::Vocabulary LuminusParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LuminusParser::_tokenNames;

LuminusParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
          0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964,
          0x3, 0x35, 0xb0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4,
          0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9,
          0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa,
          0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3,
          0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3,
          0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3,
          0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x2d, 0xa,
          0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6,
          0x34, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x37, 0xb, 0x6, 0x5, 0x6, 0x39,
          0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x3c, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6,
          0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3,
          0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7,
          0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5,
          0x7, 0x53, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3,
          0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7,
          0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3,
          0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7,
          0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3,
          0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x76, 0xa, 0x7, 0xc, 0x7, 0xe,
          0x7, 0x79, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3,
          0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x84, 0xa,
          0x9, 0xc, 0x9, 0xe, 0x9, 0x87, 0xb, 0x9, 0x5, 0x9, 0x89, 0xa, 0x9,
          0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3,
          0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x95, 0xa, 0xa, 0xd,
          0xa, 0xe, 0xa, 0x96, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3,
          0xb, 0x3, 0xb, 0x5, 0xb, 0x9f, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7,
          0xc, 0xa3, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xa6, 0xb, 0xc, 0x3, 0xc,
          0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xac, 0xa, 0xd, 0xd, 0xd,
          0xe, 0xd, 0xad, 0x3, 0xd, 0x2, 0x3, 0xc, 0xe, 0x2, 0x4, 0x6, 0x8,
          0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x2, 0x7, 0x4, 0x2,
          0x2b, 0x2b, 0x32, 0x32, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x11, 0x16,
          0x3, 0x2, 0x17, 0x18, 0x4, 0x2, 0x1c, 0x1c, 0x2b, 0x2b, 0x2, 0xc4,
          0x2, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x20, 0x3, 0x2, 0x2, 0x2, 0x6,
          0x25, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2e,
          0x3, 0x2, 0x2, 0x2, 0xc, 0x52, 0x3, 0x2, 0x2, 0x2, 0xe, 0x7a, 0x3,
          0x2, 0x2, 0x2, 0x10, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x8f, 0x3, 0x2,
          0x2, 0x2, 0x14, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x16, 0xa0, 0x3, 0x2, 0x2,
          0x2, 0x18, 0xab, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x9, 0x2, 0x2, 0x2,
          0x1b, 0x1c, 0x7, 0x32, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x3, 0x2, 0x2,
          0x1d, 0x1e, 0x5, 0xc, 0x7, 0x2, 0x1e, 0x1f, 0x7, 0x4, 0x2, 0x2, 0x1f,
          0x3, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x5, 0xc, 0x7, 0x2, 0x21, 0x22,
          0x7, 0x3, 0x2, 0x2, 0x22, 0x23, 0x5, 0xc, 0x7, 0x2, 0x23, 0x24, 0x7,
          0x4, 0x2, 0x2, 0x24, 0x5, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x9, 0x2,
          0x2, 0x2, 0x26, 0x27, 0x7, 0x32, 0x2, 0x2, 0x27, 0x28, 0x7, 0x4,
          0x2, 0x2, 0x28, 0x7, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2d, 0x5, 0x2, 0x2,
          0x2, 0x2a, 0x2d, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2d, 0x5, 0x6, 0x4, 0x2,
          0x2c, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c,
          0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f,
          0x7, 0x32, 0x2, 0x2, 0x2f, 0x38, 0x7, 0x5, 0x2, 0x2, 0x30, 0x35,
          0x5, 0xc, 0x7, 0x2, 0x31, 0x32, 0x7, 0x6, 0x2, 0x2, 0x32, 0x34, 0x5,
          0xc, 0x7, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2,
          0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2,
          0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2,
          0x38, 0x30, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39,
          0x3b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3c, 0x7, 0x6, 0x2, 0x2, 0x3b, 0x3a,
          0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3,
          0x2, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x7, 0x2, 0x2, 0x3e, 0xb, 0x3, 0x2,
          0x2, 0x2, 0x3f, 0x40, 0x8, 0x7, 0x1, 0x2, 0x40, 0x53, 0x9, 0x3, 0x2,
          0x2, 0x41, 0x53, 0x7, 0x1e, 0x2, 0x2, 0x42, 0x53, 0x7, 0x1f, 0x2,
          0x2, 0x43, 0x53, 0x7, 0x1d, 0x2, 0x2, 0x44, 0x45, 0x7, 0x5, 0x2,
          0x2, 0x45, 0x46, 0x5, 0xc, 0x7, 0x2, 0x46, 0x47, 0x7, 0x7, 0x2, 0x2,
          0x47, 0x53, 0x3, 0x2, 0x2, 0x2, 0x48, 0x53, 0x5, 0xa, 0x6, 0x2, 0x49,
          0x4a, 0x7, 0x10, 0x2, 0x2, 0x4a, 0x53, 0x5, 0xc, 0x7, 0xd, 0x4b,
          0x53, 0x7, 0x32, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x5, 0x2, 0x2, 0x4d,
          0x4e, 0x7, 0x2b, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x7, 0x2, 0x2, 0x4f,
          0x53, 0x5, 0xc, 0x7, 0x6, 0x50, 0x51, 0x7, 0x19, 0x2, 0x2, 0x51,
          0x53, 0x5, 0xc, 0x7, 0x3, 0x52, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x52, 0x41,
          0x3, 0x2, 0x2, 0x2, 0x52, 0x42, 0x3, 0x2, 0x2, 0x2, 0x52, 0x43, 0x3,
          0x2, 0x2, 0x2, 0x52, 0x44, 0x3, 0x2, 0x2, 0x2, 0x52, 0x48, 0x3, 0x2,
          0x2, 0x2, 0x52, 0x49, 0x3, 0x2, 0x2, 0x2, 0x52, 0x4b, 0x3, 0x2, 0x2,
          0x2, 0x52, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2,
          0x53, 0x77, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0xc, 0xc, 0x2, 0x2, 0x55,
          0x56, 0x7, 0xc, 0x2, 0x2, 0x56, 0x76, 0x5, 0xc, 0x7, 0xd, 0x57, 0x58,
          0xc, 0xb, 0x2, 0x2, 0x58, 0x59, 0x7, 0xd, 0x2, 0x2, 0x59, 0x76, 0x5,
          0xc, 0x7, 0xc, 0x5a, 0x5b, 0xc, 0xa, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0xe,
          0x2, 0x2, 0x5c, 0x76, 0x5, 0xc, 0x7, 0xb, 0x5d, 0x5e, 0xc, 0x9, 0x2,
          0x2, 0x5e, 0x5f, 0x7, 0xf, 0x2, 0x2, 0x5f, 0x76, 0x5, 0xc, 0x7, 0xa,
          0x60, 0x61, 0xc, 0x8, 0x2, 0x2, 0x61, 0x62, 0x7, 0x10, 0x2, 0x2,
          0x62, 0x76, 0x5, 0xc, 0x7, 0x9, 0x63, 0x64, 0xc, 0x5, 0x2, 0x2, 0x64,
          0x65, 0x9, 0x4, 0x2, 0x2, 0x65, 0x76, 0x5, 0xc, 0x7, 0x6, 0x66, 0x67,
          0xc, 0x4, 0x2, 0x2, 0x67, 0x68, 0x9, 0x5, 0x2, 0x2, 0x68, 0x76, 0x5,
          0xc, 0x7, 0x5, 0x69, 0x6a, 0xc, 0x12, 0x2, 0x2, 0x6a, 0x6b, 0x7,
          0x8, 0x2, 0x2, 0x6b, 0x76, 0x7, 0x32, 0x2, 0x2, 0x6c, 0x6d, 0xc,
          0x11, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x8, 0x2, 0x2, 0x6e, 0x76, 0x5,
          0xa, 0x6, 0x2, 0x6f, 0x70, 0xc, 0xf, 0x2, 0x2, 0x70, 0x71, 0x7, 0xf,
          0x2, 0x2, 0x71, 0x76, 0x7, 0xf, 0x2, 0x2, 0x72, 0x73, 0xc, 0xe, 0x2,
          0x2, 0x73, 0x74, 0x7, 0x10, 0x2, 0x2, 0x74, 0x76, 0x7, 0x10, 0x2,
          0x2, 0x75, 0x54, 0x3, 0x2, 0x2, 0x2, 0x75, 0x57, 0x3, 0x2, 0x2, 0x2,
          0x75, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x75, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x75,
          0x60, 0x3, 0x2, 0x2, 0x2, 0x75, 0x63, 0x3, 0x2, 0x2, 0x2, 0x75, 0x66,
          0x3, 0x2, 0x2, 0x2, 0x75, 0x69, 0x3, 0x2, 0x2, 0x2, 0x75, 0x6c, 0x3,
          0x2, 0x2, 0x2, 0x75, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x75, 0x72, 0x3, 0x2,
          0x2, 0x2, 0x76, 0x79, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2,
          0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0xd, 0x3, 0x2, 0x2, 0x2,
          0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x9, 0x2, 0x2, 0x2, 0x7b,
          0x7c, 0x7, 0x32, 0x2, 0x2, 0x7c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e,
          0x7, 0x21, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x32, 0x2, 0x2, 0x7f, 0x88,
          0x7, 0x5, 0x2, 0x2, 0x80, 0x85, 0x5, 0xe, 0x8, 0x2, 0x81, 0x82, 0x7,
          0x6, 0x2, 0x2, 0x82, 0x84, 0x5, 0xe, 0x8, 0x2, 0x83, 0x81, 0x3, 0x2,
          0x2, 0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2,
          0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 0x2, 0x2,
          0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x80, 0x3, 0x2, 0x2, 0x2, 0x88,
          0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b,
          0x7, 0x7, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x22, 0x2, 0x2, 0x8c, 0x8d,
          0x9, 0x6, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x16, 0xc, 0x2, 0x8e, 0x11,
          0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x9, 0x2, 0x2, 0x90, 0x91, 0x7,
          0x32, 0x2, 0x2, 0x91, 0x94, 0x7, 0xa, 0x2, 0x2, 0x92, 0x95, 0x5,
          0x10, 0x9, 0x2, 0x93, 0x95, 0x5, 0x6, 0x4, 0x2, 0x94, 0x92, 0x3,
          0x2, 0x2, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2,
          0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2,
          0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0xb, 0x2, 0x2,
          0x99, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0xc, 0x7, 0x2, 0x9b,
          0x9c, 0x7, 0x4, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f,
          0x5, 0x8, 0x5, 0x2, 0x9e, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9d, 0x3,
          0x2, 0x2, 0x2, 0x9f, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa4, 0x7, 0xa,
          0x2, 0x2, 0xa1, 0xa3, 0x5, 0x14, 0xb, 0x2, 0xa2, 0xa1, 0x3, 0x2,
          0x2, 0x2, 0xa3, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2,
          0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 0x2,
          0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0xb, 0x2, 0x2, 0xa8,
          0x17, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x5, 0x10, 0x9, 0x2, 0xaa,
          0xac, 0x5, 0x12, 0xa, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab,
          0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab,
          0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0x19, 0x3,
          0x2, 0x2, 0x2, 0x11, 0x2c, 0x35, 0x38, 0x3b, 0x52, 0x75, 0x77, 0x85,
          0x88, 0x94, 0x96, 0x9e, 0xa4, 0xab, 0xad,
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

LuminusParser::Initializer LuminusParser::_init;
