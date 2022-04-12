
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


//----------------- StartContext ------------------------------------------------------------------

LuminusParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuminusParser::FunctionContext *> LuminusParser::StartContext::function() {
  return getRuleContexts<LuminusParser::FunctionContext>();
}

LuminusParser::FunctionContext *LuminusParser::StartContext::function(size_t i) {
    return getRuleContext<LuminusParser::FunctionContext>(i);
}

std::vector<LuminusParser::Struct_declarationContext *> LuminusParser::StartContext::struct_declaration() {
    return getRuleContexts<LuminusParser::Struct_declarationContext>();
}

LuminusParser::Struct_declarationContext *LuminusParser::StartContext::struct_declaration(size_t i) {
    return getRuleContext<LuminusParser::Struct_declarationContext>(i);
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
  enterRule(_localctx, 0, LuminusParser::RuleStart);
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
      setState(32);
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
          setState(32);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
              case LuminusParser::T__0: {
                  setState(30);
                  function();
                  break;
              }

              case LuminusParser::T__7: {
                  setState(31);
                  struct_declaration();
                  break;
              }

              default:
                  throw NoViableAltException(this);
          }
          setState(34);
          _errHandler->sync(this);
          _la = _input->LA(1);
      } while (_la == LuminusParser::T__0

               || _la == LuminusParser::T__7);
   
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
  enterRule(_localctx, 2, LuminusParser::RuleArgument);
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
      setState(36);
      antlrcpp::downCast<ArgumentContext *>(_localctx)->dec_type = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == LuminusParser::TYPE

            || _la == LuminusParser::IDENTIFIER)) {
          antlrcpp::downCast<ArgumentContext *>(_localctx)->dec_type = _errHandler->recoverInline(this);
      } else {
          _errHandler->reportMatch(this);
          consume();
      }
      setState(37);
      antlrcpp::downCast<ArgumentContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

LuminusParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuminusParser::FunctionContext::getRuleIndex() const {
  return LuminusParser::RuleFunction;
}

void LuminusParser::FunctionContext::copyFrom(FunctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

tree::TerminalNode* LuminusParser::FunctionDeclarationContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}

tree::TerminalNode* LuminusParser::FunctionDeclarationContext::VOID() {
  return getToken(LuminusParser::VOID, 0);
}

std::vector<LuminusParser::StatementContext *> LuminusParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<LuminusParser::StatementContext>();
}

LuminusParser::StatementContext* LuminusParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<LuminusParser::StatementContext>(i);
}

std::vector<LuminusParser::ArgumentContext *> LuminusParser::FunctionDeclarationContext::argument() {
  return getRuleContexts<LuminusParser::ArgumentContext>();
}

LuminusParser::ArgumentContext* LuminusParser::FunctionDeclarationContext::argument(size_t i) {
  return getRuleContext<LuminusParser::ArgumentContext>(i);
}

LuminusParser::FunctionDeclarationContext::FunctionDeclarationContext(FunctionContext *ctx) { copyFrom(ctx); }

void LuminusParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}
void LuminusParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

antlrcpp::Any LuminusParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}
LuminusParser::FunctionContext* LuminusParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, LuminusParser::RuleFunction);
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
      _localctx = _tracker.createInstance<LuminusParser::FunctionDeclarationContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(39);
      match(LuminusParser::T__0);
      setState(40);
      antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->funcName = match(LuminusParser::IDENTIFIER);
      setState(41);
      match(LuminusParser::T__1);
      setState(50);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuminusParser::TYPE

          || _la == LuminusParser::IDENTIFIER) {
          setState(42);
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext = argument();
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->args.push_back(
                  antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext);
          setState(47);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                  setState(43);
                  match(LuminusParser::T__2);
                  setState(44);
                  antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext = argument();
                  antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->args.push_back(
                          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext);
              }
              setState(49);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
          }
      }
      setState(53);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuminusParser::T__2) {
          setState(52);
          match(LuminusParser::T__2);
      }
      setState(55);
      match(LuminusParser::T__3);
      setState(56);
      match(LuminusParser::T__4);
      setState(57);
      antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->returnType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == LuminusParser::VOID

            || _la == LuminusParser::TYPE)) {
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->returnType = _errHandler->recoverInline(this);
      } else {
          _errHandler->reportMatch(this);
          consume();
      }
      setState(58);
      match(LuminusParser::T__5);
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
          setState(59);
          statement();
          setState(62);
          _errHandler->sync(this);
          _la = _input->LA(1);
      } while ((((_la & ~0x3fULL) == 0) &&
                ((1ULL << _la) & ((1ULL << LuminusParser::T__1)
                                  | (1ULL << LuminusParser::T__5)
                                  | (1ULL << LuminusParser::T__11)
                                  | (1ULL << LuminusParser::T__12)
                                  | (1ULL << LuminusParser::T__15)
                                  | (1ULL << LuminusParser::T__16)
                                  | (1ULL << LuminusParser::T__19)
                                  | (1ULL << LuminusParser::MUL)
                                  | (1ULL << LuminusParser::SUB)
                                  | (1ULL << LuminusParser::LOG_NOT)
                                  | (1ULL << LuminusParser::TRUE_CONST)
                                  | (1ULL << LuminusParser::FALSE_CONST)
                                  | (1ULL << LuminusParser::TYPE)
                                  | (1ULL << LuminusParser::IDENTIFIER)
                                  | (1ULL << LuminusParser::STRING_CONST)
                                  | (1ULL << LuminusParser::INTEGER_CONST)
                                  | (1ULL << LuminusParser::FLOATING_CONST))) != 0));
      setState(64);
      match(LuminusParser::T__6);

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


size_t LuminusParser::Func_callContext::getRuleIndex() const {
  return LuminusParser::RuleFunc_call;
}

void LuminusParser::Func_callContext::copyFrom(Func_callContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::FunctionCallContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

std::vector<LuminusParser::ExpressionContext *> LuminusParser::FunctionCallContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

LuminusParser::FunctionCallContext::FunctionCallContext(Func_callContext *ctx) { copyFrom(ctx); }

void LuminusParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void LuminusParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

antlrcpp::Any LuminusParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
LuminusParser::Func_callContext* LuminusParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 6, LuminusParser::RuleFunc_call);
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
      _localctx = _tracker.createInstance<LuminusParser::FunctionCallContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(66);
      antlrcpp::downCast<FunctionCallContext *>(_localctx)->funcid = match(LuminusParser::IDENTIFIER);
      setState(67);
      match(LuminusParser::T__1);
      setState(76);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~0x3fULL) == 0) &&
           ((1ULL << _la) & ((1ULL << LuminusParser::T__1)
                             | (1ULL << LuminusParser::T__11)
                             | (1ULL << LuminusParser::T__12)
                             | (1ULL << LuminusParser::MUL)
                             | (1ULL << LuminusParser::SUB)
                             | (1ULL << LuminusParser::LOG_NOT)
                             | (1ULL << LuminusParser::TRUE_CONST)
                             | (1ULL << LuminusParser::FALSE_CONST)
                             | (1ULL << LuminusParser::IDENTIFIER)
                             | (1ULL << LuminusParser::STRING_CONST)
                             | (1ULL << LuminusParser::INTEGER_CONST)
                             | (1ULL << LuminusParser::FLOATING_CONST))) != 0)) {
          setState(68);
          antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext = expression(0);
          antlrcpp::downCast<FunctionCallContext *>(_localctx)->args.push_back(
                  antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext);
          setState(73);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                  setState(69);
                  match(LuminusParser::T__2);
                  setState(70);
                  antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext = expression(0);
                  antlrcpp::downCast<FunctionCallContext *>(_localctx)->args.push_back(
                          antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext);
              }
              setState(75);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
          }
      }
      setState(79);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuminusParser::T__2) {
          setState(78);
          match(LuminusParser::T__2);
      }
      setState(81);
      match(LuminusParser::T__3);

  }
  catch (RecognitionException &e) {
      _errHandler->reportError(this, e);
      _localctx->exception = std::current_exception();
      _errHandler->recover(this, _localctx->exception);
  }

    return _localctx;
}

//----------------- Struct_declarationContext ------------------------------------------------------------------

LuminusParser::Struct_declarationContext::Struct_declarationContext(ParserRuleContext *parent, size_t invokingState)
        : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *LuminusParser::Struct_declarationContext::IDENTIFIER() {
    return getToken(LuminusParser::IDENTIFIER, 0);
}

std::vector<LuminusParser::ArgumentContext *> LuminusParser::Struct_declarationContext::argument() {
    return getRuleContexts<LuminusParser::ArgumentContext>();
}

LuminusParser::ArgumentContext *LuminusParser::Struct_declarationContext::argument(size_t i) {
    return getRuleContext<LuminusParser::ArgumentContext>(i);
}


size_t LuminusParser::Struct_declarationContext::getRuleIndex() const {
    return LuminusParser::RuleStruct_declaration;
}

void LuminusParser::Struct_declarationContext::enterRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterStruct_declaration(this);
}

void LuminusParser::Struct_declarationContext::exitRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitStruct_declaration(this);
}


antlrcpp::Any LuminusParser::Struct_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitStruct_declaration(this);
    else
        return visitor->visitChildren(this);
}

LuminusParser::Struct_declarationContext *LuminusParser::struct_declaration() {
    Struct_declarationContext *_localctx = _tracker.createInstance<Struct_declarationContext>(_ctx, getState());
    enterRule(_localctx, 8, LuminusParser::RuleStruct_declaration);
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
        setState(83);
        match(LuminusParser::T__7);
        setState(84);
        antlrcpp::downCast<Struct_declarationContext *>(_localctx)->struct_name = match(LuminusParser::IDENTIFIER);
        setState(85);
        match(LuminusParser::T__5);
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
            setState(86);
            antlrcpp::downCast<Struct_declarationContext *>(_localctx)->argumentContext = argument();
            antlrcpp::downCast<Struct_declarationContext *>(_localctx)->struct_vals.push_back(
                    antlrcpp::downCast<Struct_declarationContext *>(_localctx)->argumentContext);
            setState(87);
            match(LuminusParser::T__8);
            setState(91);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while (_la == LuminusParser::TYPE

                 || _la == LuminusParser::IDENTIFIER);
        setState(93);
        match(LuminusParser::T__6);

    }
    catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

LuminusParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
        : ParserRuleContext(parent, invokingState) {
}


size_t LuminusParser::AssignmentContext::getRuleIndex() const {
    return LuminusParser::RuleAssignment;
}

void LuminusParser::AssignmentContext::copyFrom(AssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ReinitializationContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::ReinitializationContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::ReinitializationContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

LuminusParser::ReinitializationContext::ReinitializationContext(AssignmentContext *ctx) { copyFrom(ctx); }

void LuminusParser::ReinitializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReinitialization(this);
}
void LuminusParser::ReinitializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReinitialization(this);
}

antlrcpp::Any LuminusParser::ReinitializationContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitReinitialization(this);
    else
        return visitor->visitChildren(this);
}
//----------------- InitializationContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> LuminusParser::InitializationContext::IDENTIFIER() {
    return getTokens(LuminusParser::IDENTIFIER);
}

tree::TerminalNode *LuminusParser::InitializationContext::IDENTIFIER(size_t i) {
    return getToken(LuminusParser::IDENTIFIER, i);
}

LuminusParser::ExpressionContext *LuminusParser::InitializationContext::expression() {
    return getRuleContext<LuminusParser::ExpressionContext>(0);
}

tree::TerminalNode *LuminusParser::InitializationContext::TYPE() {
    return getToken(LuminusParser::TYPE, 0);
}

LuminusParser::InitializationContext::InitializationContext(AssignmentContext *ctx) { copyFrom(ctx); }

void LuminusParser::InitializationContext::enterRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInitialization(this);
}
void LuminusParser::InitializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitialization(this);
}

antlrcpp::Any LuminusParser::InitializationContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitInitialization(this);
    else
        return visitor->visitChildren(this);
}
//----------------- DeclarationContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> LuminusParser::DeclarationContext::IDENTIFIER() {
    return getTokens(LuminusParser::IDENTIFIER);
}

tree::TerminalNode *LuminusParser::DeclarationContext::IDENTIFIER(size_t i) {
    return getToken(LuminusParser::IDENTIFIER, i);
}

tree::TerminalNode *LuminusParser::DeclarationContext::TYPE() {
    return getToken(LuminusParser::TYPE, 0);
}

LuminusParser::DeclarationContext::DeclarationContext(AssignmentContext *ctx) { copyFrom(ctx); }

void LuminusParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterDeclaration(this);
}
void LuminusParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

antlrcpp::Any LuminusParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}
LuminusParser::AssignmentContext* LuminusParser::assignment() {
    AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
    enterRule(_localctx, 10, LuminusParser::RuleAssignment);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(109);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
            case 1: {
                _localctx = _tracker.createInstance<LuminusParser::DeclarationContext>(_localctx);
                enterOuterAlt(_localctx, 1);
                setState(95);
                antlrcpp::downCast<DeclarationContext *>(_localctx)->dec_type = _input->LT(1);
                _la = _input->LA(1);
                if (!(_la == LuminusParser::TYPE

                      || _la == LuminusParser::IDENTIFIER)) {
                    antlrcpp::downCast<DeclarationContext *>(_localctx)->dec_type = _errHandler->recoverInline(this);
                } else {
                    _errHandler->reportMatch(this);
                    consume();
                }
                setState(96);
                antlrcpp::downCast<DeclarationContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
                setState(97);
                match(LuminusParser::T__8);
                break;
            }

    case 2: {
        _localctx = _tracker.createInstance<LuminusParser::ReinitializationContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(98);
        antlrcpp::downCast<ReinitializationContext *>(_localctx)->id = expression(0);
        setState(99);
        match(LuminusParser::T__9);
        setState(100);
        antlrcpp::downCast<ReinitializationContext *>(_localctx)->value = expression(0);
        setState(101);
        match(LuminusParser::T__8);
        break;
    }

    case 3: {
        _localctx = _tracker.createInstance<LuminusParser::InitializationContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(103);
        antlrcpp::downCast<InitializationContext *>(_localctx)->dec_type = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == LuminusParser::TYPE

              || _la == LuminusParser::IDENTIFIER)) {
            antlrcpp::downCast<InitializationContext *>(_localctx)->dec_type = _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }
        setState(104);
        antlrcpp::downCast<InitializationContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
        setState(105);
        match(LuminusParser::T__9);
        setState(106);
        antlrcpp::downCast<InitializationContext *>(_localctx)->value = expression(0);
        setState(107);
        match(LuminusParser::T__8);
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

//----------------- ParanthesesContext ------------------------------------------------------------------

LuminusParser::ExpressionContext* LuminusParser::ParanthesesContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::ParanthesesContext::ParanthesesContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::ParanthesesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParantheses(this);
}
void LuminusParser::ParanthesesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParantheses(this);
}

antlrcpp::Any LuminusParser::ParanthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitParantheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplyOrDivideContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::MultiplyOrDivideContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::MultiplyOrDivideContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::MultiplyOrDivideContext::MUL() {
  return getToken(LuminusParser::MUL, 0);
}

tree::TerminalNode* LuminusParser::MultiplyOrDivideContext::DIV() {
  return getToken(LuminusParser::DIV, 0);
}

LuminusParser::MultiplyOrDivideContext::MultiplyOrDivideContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::MultiplyOrDivideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplyOrDivide(this);
}
void LuminusParser::MultiplyOrDivideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplyOrDivide(this);
}

antlrcpp::Any LuminusParser::MultiplyOrDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitMultiplyOrDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DereferenceExpressionContext ------------------------------------------------------------------

LuminusParser::ExpressionContext *LuminusParser::DereferenceExpressionContext::expression() {
    return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::DereferenceExpressionContext::DereferenceExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::DereferenceExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDereferenceExpression(this);
}
void LuminusParser::DereferenceExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDereferenceExpression(this);
}

antlrcpp::Any LuminusParser::DereferenceExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitDereferenceExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringConstContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::StringConstContext::STRING_CONST() {
  return getToken(LuminusParser::STRING_CONST, 0);
}

LuminusParser::StringConstContext::StringConstContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::StringConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringConst(this);
}
void LuminusParser::StringConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringConst(this);
}

antlrcpp::Any LuminusParser::StringConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitStringConst(this);
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
//----------------- ValueOfPointerExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::ValueOfPointerExpressionContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

std::vector<tree::TerminalNode *> LuminusParser::ValueOfPointerExpressionContext::MUL() {
  return getTokens(LuminusParser::MUL);
}

tree::TerminalNode* LuminusParser::ValueOfPointerExpressionContext::MUL(size_t i) {
  return getToken(LuminusParser::MUL, i);
}

LuminusParser::ValueOfPointerExpressionContext::ValueOfPointerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::ValueOfPointerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueOfPointerExpression(this);
}
void LuminusParser::ValueOfPointerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueOfPointerExpression(this);
}

antlrcpp::Any LuminusParser::ValueOfPointerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitValueOfPointerExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::FloatExpressionContext::FLOATING_CONST() {
  return getToken(LuminusParser::FLOATING_CONST, 0);
}

LuminusParser::FloatExpressionContext::FloatExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::FloatExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatExpression(this);
}
void LuminusParser::FloatExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatExpression(this);
}

antlrcpp::Any LuminusParser::FloatExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitFloatExpression(this);
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
//----------------- IntegerExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::IntegerExpressionContext::INTEGER_CONST() {
  return getToken(LuminusParser::INTEGER_CONST, 0);
}

LuminusParser::IntegerExpressionContext::IntegerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::IntegerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerExpression(this);
}
void LuminusParser::IntegerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerExpression(this);
}

antlrcpp::Any LuminusParser::IntegerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitIntegerExpression(this);
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
//----------------- CastToTypeContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::CastToTypeContext::LT() {
  return getToken(LuminusParser::LT, 0);
}

tree::TerminalNode* LuminusParser::CastToTypeContext::GT() {
  return getToken(LuminusParser::GT, 0);
}

tree::TerminalNode* LuminusParser::CastToTypeContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}

LuminusParser::ExpressionContext* LuminusParser::CastToTypeContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::CastToTypeContext::CastToTypeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::CastToTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastToType(this);
}
void LuminusParser::CastToTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastToType(this);
}

antlrcpp::Any LuminusParser::CastToTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitCastToType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Bool_ConstContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::Bool_ConstContext::TRUE_CONST() {
  return getToken(LuminusParser::TRUE_CONST, 0);
}

tree::TerminalNode* LuminusParser::Bool_ConstContext::FALSE_CONST() {
  return getToken(LuminusParser::FALSE_CONST, 0);
}

LuminusParser::Bool_ConstContext::Bool_ConstContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::Bool_ConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_Const(this);
}
void LuminusParser::Bool_ConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_Const(this);
}

antlrcpp::Any LuminusParser::Bool_ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitBool_Const(this);
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
//----------------- ModulusContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::ModulusContext::MOD() {
  return getToken(LuminusParser::MOD, 0);
}

std::vector<LuminusParser::ExpressionContext *> LuminusParser::ModulusContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::ModulusContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

LuminusParser::ModulusContext::ModulusContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::ModulusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModulus(this);
}
void LuminusParser::ModulusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModulus(this);
}

antlrcpp::Any LuminusParser::ModulusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitModulus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_NegateContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::Unary_NegateContext::SUB() {
  return getToken(LuminusParser::SUB, 0);
}

LuminusParser::ExpressionContext* LuminusParser::Unary_NegateContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::Unary_NegateContext::Unary_NegateContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::Unary_NegateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_Negate(this);
}
void LuminusParser::Unary_NegateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_Negate(this);
}

antlrcpp::Any LuminusParser::Unary_NegateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitUnary_Negate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddOrSubtractContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::AddOrSubtractContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::AddOrSubtractContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::AddOrSubtractContext::ADD() {
  return getToken(LuminusParser::ADD, 0);
}

tree::TerminalNode* LuminusParser::AddOrSubtractContext::SUB() {
  return getToken(LuminusParser::SUB, 0);
}

LuminusParser::AddOrSubtractContext::AddOrSubtractContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::AddOrSubtractContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOrSubtract(this);
}
void LuminusParser::AddOrSubtractContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOrSubtract(this);
}

antlrcpp::Any LuminusParser::AddOrSubtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitAddOrSubtract(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::CompExpressionContext::expression() {
  return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext* LuminusParser::CompExpressionContext::expression(size_t i) {
  return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::CompExpressionContext::LT() {
  return getToken(LuminusParser::LT, 0);
}

tree::TerminalNode* LuminusParser::CompExpressionContext::GT() {
  return getToken(LuminusParser::GT, 0);
}

tree::TerminalNode* LuminusParser::CompExpressionContext::LTE() {
  return getToken(LuminusParser::LTE, 0);
}

tree::TerminalNode* LuminusParser::CompExpressionContext::GTE() {
  return getToken(LuminusParser::GTE, 0);
}

tree::TerminalNode* LuminusParser::CompExpressionContext::EQ() {
  return getToken(LuminusParser::EQ, 0);
}

tree::TerminalNode* LuminusParser::CompExpressionContext::NOT_EQ() {
  return getToken(LuminusParser::NOT_EQ, 0);
}

LuminusParser::CompExpressionContext::CompExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::CompExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompExpression(this);
}
void LuminusParser::CompExpressionContext::exitRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitCompExpression(this);
}

antlrcpp::Any LuminusParser::CompExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitCompExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- AccessInternalContext ------------------------------------------------------------------

LuminusParser::ExpressionContext *LuminusParser::AccessInternalContext::expression() {
    return getRuleContext<LuminusParser::ExpressionContext>(0);
}

tree::TerminalNode *LuminusParser::AccessInternalContext::IDENTIFIER() {
    return getToken(LuminusParser::IDENTIFIER, 0);
}

LuminusParser::AccessInternalContext::AccessInternalContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::AccessInternalContext::enterRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAccessInternal(this);
}
void LuminusParser::AccessInternalContext::exitRule(tree::ParseTreeListener *listener) {
    auto parserListener = dynamic_cast<LuminusListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAccessInternal(this);
}

antlrcpp::Any LuminusParser::AccessInternalContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitAccessInternal(this);
    else
        return visitor->visitChildren(this);
}
//----------------- IndexingContext ------------------------------------------------------------------

tree::TerminalNode *LuminusParser::IndexingContext::IDENTIFIER() {
    return getToken(LuminusParser::IDENTIFIER, 0);
}

LuminusParser::ExpressionContext *LuminusParser::IndexingContext::expression() {
    return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::IndexingContext::IndexingContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::IndexingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexing(this);
}
void LuminusParser::IndexingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexing(this);
}

antlrcpp::Any LuminusParser::IndexingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitIndexing(this);
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
    size_t startState = 12;
    enterRecursionRule(_localctx, 12, LuminusParser::RuleExpression, precedence);

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
      setState(148);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
          case 1: {
              _localctx = _tracker.createInstance<Bool_ConstContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;

              setState(112);
              antlrcpp::downCast<Bool_ConstContext *>(_localctx)->BOOL_CONST = _input->LT(1);
              _la = _input->LA(1);
              if (!(_la == LuminusParser::TRUE_CONST

                    || _la == LuminusParser::FALSE_CONST)) {
                  antlrcpp::downCast<Bool_ConstContext *>(_localctx)->BOOL_CONST = _errHandler->recoverInline(this);
              } else {
                  _errHandler->reportMatch(this);
                  consume();
              }
              break;
          }

    case 2: {
        _localctx = _tracker.createInstance<StringConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(113);
        match(LuminusParser::STRING_CONST);
        break;
    }

    case 3: {
        _localctx = _tracker.createInstance<IntegerExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(114);
        match(LuminusParser::INTEGER_CONST);
        break;
    }

    case 4: {
        _localctx = _tracker.createInstance<FloatExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(115);
        match(LuminusParser::FLOATING_CONST);
        break;
    }

    case 5: {
        _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(116);
        antlrcpp::downCast<IdentifierExpressionContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
        break;
    }

    case 6: {
        _localctx = _tracker.createInstance<DereferenceExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(117);
        match(LuminusParser::T__11);
        setState(118);
        antlrcpp::downCast<DereferenceExpressionContext *>(_localctx)->id = expression(13);
        break;
    }

    case 7: {
        _localctx = _tracker.createInstance<ValueOfPointerExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(122);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LuminusParser::MUL) {
            setState(119);
            match(LuminusParser::MUL);
            setState(124);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(125);
        antlrcpp::downCast<ValueOfPointerExpressionContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
        break;
    }

    case 8: {
        _localctx = _tracker.createInstance<Func_Call_ExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(126);
        antlrcpp::downCast<Func_Call_ExpressionContext *>(_localctx)->call = func_call();
        break;
    }

    case 9: {
        _localctx = _tracker.createInstance<CastToTypeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(127);
        match(LuminusParser::T__12);
        setState(128);
        match(LuminusParser::LT);
        setState(129);
        antlrcpp::downCast<CastToTypeContext *>(_localctx)->cast_type = match(LuminusParser::TYPE);
        setState(130);
        match(LuminusParser::GT);
        setState(131);
        match(LuminusParser::T__1);
        setState(132);
        antlrcpp::downCast<CastToTypeContext *>(_localctx)->inner = expression(0);
        setState(133);
        match(LuminusParser::T__3);
        break;
    }

    case 10: {
        _localctx = _tracker.createInstance<ParanthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(135);
        match(LuminusParser::T__1);
        setState(136);
        antlrcpp::downCast<ParanthesesContext *>(_localctx)->inner = expression(0);
        setState(137);
        match(LuminusParser::T__3);
        break;
    }

    case 11: {
        _localctx = _tracker.createInstance<Unary_NegateContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(139);
        match(LuminusParser::SUB);
        setState(140);
        antlrcpp::downCast<Unary_NegateContext *>(_localctx)->inner = expression(5);
        break;
    }

    case 12: {
        _localctx = _tracker.createInstance<IndexingContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(141);
        antlrcpp::downCast<IndexingContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
        setState(142);
        match(LuminusParser::T__13);
        setState(143);
        antlrcpp::downCast<IndexingContext *>(_localctx)->index = expression(0);
        setState(144);
        match(LuminusParser::T__14);
        break;
    }

    case 13: {
        _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(146);
        match(LuminusParser::LOG_NOT);
        setState(147);
        antlrcpp::downCast<NotExpressionContext *>(_localctx)->exp = expression(1);
        break;
    }

          default:
              break;
      }
      _ctx->stop = _input->LT(-1);
      setState(170);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
              if (!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext = _localctx;
              setState(168);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
                  case 1: {
                      auto newContext = _tracker.createInstance<MultiplyOrDivideContext>(
                              _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                      _localctx = newContext;
                      newContext->left = previousContext;
                      pushNewRecursionContext(newContext, startState, RuleExpression);
                      setState(150);

                      if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
                      setState(151);
                      antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->op = _input->LT(1);
                      _la = _input->LA(1);
                      if (!(_la == LuminusParser::MUL

                            || _la == LuminusParser::DIV)) {
                          antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->op = _errHandler->recoverInline(
                                  this);
                      } else {
                          _errHandler->reportMatch(this);
                          consume();
                      }
                      setState(152);
                      antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->right = expression(9);
                      break;
                  }

        case 2: {
            auto newContext = _tracker.createInstance<ModulusContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(153);

            if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
            setState(154);
            match(LuminusParser::MOD);
            setState(155);
            antlrcpp::downCast<ModulusContext *>(_localctx)->right = expression(8);
            break;
        }

        case 3: {
            auto newContext = _tracker.createInstance<AddOrSubtractContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(156);

            if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
            setState(157);
            antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->op = _input->LT(1);
            _la = _input->LA(1);
            if (!(_la == LuminusParser::ADD

                  || _la == LuminusParser::SUB)) {
                antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->op = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(158);
            antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->right = expression(7);
            break;
        }

        case 4: {
            auto newContext = _tracker.createInstance<CompExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(159);

            if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
            setState(160);
            antlrcpp::downCast<CompExpressionContext *>(_localctx)->op = _input->LT(1);
            _la = _input->LA(1);
            if (!((((_la & ~0x3fULL) == 0) &&
                   ((1ULL << _la) & ((1ULL << LuminusParser::LT)
                                     | (1ULL << LuminusParser::GT)
                                     | (1ULL << LuminusParser::LTE)
                                     | (1ULL << LuminusParser::GTE)
                                     | (1ULL << LuminusParser::EQ)
                                     | (1ULL << LuminusParser::NOT_EQ))) != 0))) {
                antlrcpp::downCast<CompExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(161);
            antlrcpp::downCast<CompExpressionContext *>(_localctx)->right = expression(4);
            break;
        }

        case 5: {
            auto newContext = _tracker.createInstance<LogicalExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(162);

            if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
            setState(163);
            antlrcpp::downCast<LogicalExpressionContext *>(_localctx)->log_op = _input->LT(1);
            _la = _input->LA(1);
            if (!(_la == LuminusParser::LOG_AND

                  || _la == LuminusParser::LOG_OR)) {
                antlrcpp::downCast<LogicalExpressionContext *>(_localctx)->log_op = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(164);
            antlrcpp::downCast<LogicalExpressionContext *>(_localctx)->right = expression(3);
            break;
        }

                  case 6: {
                      auto newContext = _tracker.createInstance<AccessInternalContext>(
                              _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                      _localctx = newContext;
                      newContext->exp = previousContext;
                      pushNewRecursionContext(newContext, startState, RuleExpression);
                      setState(165);

                      if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
                      setState(166);
                      match(LuminusParser::T__10);
                      setState(167);
                      antlrcpp::downCast<AccessInternalContext *>(_localctx)->accessed_element = match(
                              LuminusParser::IDENTIFIER);
                      break;
                  }

                  default:
                      break;
              }
          }
          setState(172);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

LuminusParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuminusParser::ExpressionContext* LuminusParser::While_statementContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::BlockContext* LuminusParser::While_statementContext::block() {
  return getRuleContext<LuminusParser::BlockContext>(0);
}


size_t LuminusParser::While_statementContext::getRuleIndex() const {
  return LuminusParser::RuleWhile_statement;
}

void LuminusParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void LuminusParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


antlrcpp::Any LuminusParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::While_statementContext* LuminusParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
    enterRule(_localctx, 14, LuminusParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      enterOuterAlt(_localctx, 1);
      setState(173);
      match(LuminusParser::T__15);
      setState(174);
      antlrcpp::downCast<While_statementContext *>(_localctx)->condition = expression(0);
      setState(175);
      antlrcpp::downCast<While_statementContext *>(_localctx)->ops = block();

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

LuminusParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuminusParser::ExpressionContext* LuminusParser::If_statementContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::BlockContext* LuminusParser::If_statementContext::block() {
  return getRuleContext<LuminusParser::BlockContext>(0);
}


size_t LuminusParser::If_statementContext::getRuleIndex() const {
  return LuminusParser::RuleIf_statement;
}

void LuminusParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void LuminusParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


antlrcpp::Any LuminusParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::If_statementContext* LuminusParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
    enterRule(_localctx, 16, LuminusParser::RuleIf_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      enterOuterAlt(_localctx, 1);
      setState(177);
      match(LuminusParser::T__16);
      setState(178);
      antlrcpp::downCast<If_statementContext *>(_localctx)->value = expression(0);
      setState(179);
      antlrcpp::downCast<If_statementContext *>(_localctx)->execute_vals = block();

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_statementContext ------------------------------------------------------------------

LuminusParser::Else_statementContext::Else_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuminusParser::BlockContext* LuminusParser::Else_statementContext::block() {
  return getRuleContext<LuminusParser::BlockContext>(0);
}


size_t LuminusParser::Else_statementContext::getRuleIndex() const {
  return LuminusParser::RuleElse_statement;
}

void LuminusParser::Else_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_statement(this);
}

void LuminusParser::Else_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_statement(this);
}


antlrcpp::Any LuminusParser::Else_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitElse_statement(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Else_statementContext* LuminusParser::else_statement() {
  Else_statementContext *_localctx = _tracker.createInstance<Else_statementContext>(_ctx, getState());
    enterRule(_localctx, 18, LuminusParser::RuleElse_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      enterOuterAlt(_localctx, 1);
      setState(181);
      match(LuminusParser::T__17);
      setState(182);
      antlrcpp::downCast<Else_statementContext *>(_localctx)->ops = block();

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Elif_statementContext ------------------------------------------------------------------

LuminusParser::Elif_statementContext::Elif_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuminusParser::ExpressionContext* LuminusParser::Elif_statementContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::BlockContext* LuminusParser::Elif_statementContext::block() {
  return getRuleContext<LuminusParser::BlockContext>(0);
}


size_t LuminusParser::Elif_statementContext::getRuleIndex() const {
  return LuminusParser::RuleElif_statement;
}

void LuminusParser::Elif_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElif_statement(this);
}

void LuminusParser::Elif_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElif_statement(this);
}


antlrcpp::Any LuminusParser::Elif_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitElif_statement(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Elif_statementContext* LuminusParser::elif_statement() {
  Elif_statementContext *_localctx = _tracker.createInstance<Elif_statementContext>(_ctx, getState());
    enterRule(_localctx, 20, LuminusParser::RuleElif_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      enterOuterAlt(_localctx, 1);
      setState(184);
      match(LuminusParser::T__18);
      setState(185);
      antlrcpp::downCast<Elif_statementContext *>(_localctx)->value = expression(0);
      setState(186);
      antlrcpp::downCast<Elif_statementContext *>(_localctx)->ops = block();

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_statementContext ------------------------------------------------------------------

LuminusParser::Conditional_statementContext::Conditional_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuminusParser::If_statementContext* LuminusParser::Conditional_statementContext::if_statement() {
  return getRuleContext<LuminusParser::If_statementContext>(0);
}

std::vector<LuminusParser::Elif_statementContext *> LuminusParser::Conditional_statementContext::elif_statement() {
  return getRuleContexts<LuminusParser::Elif_statementContext>();
}

LuminusParser::Elif_statementContext* LuminusParser::Conditional_statementContext::elif_statement(size_t i) {
  return getRuleContext<LuminusParser::Elif_statementContext>(i);
}

LuminusParser::Else_statementContext* LuminusParser::Conditional_statementContext::else_statement() {
  return getRuleContext<LuminusParser::Else_statementContext>(0);
}


size_t LuminusParser::Conditional_statementContext::getRuleIndex() const {
  return LuminusParser::RuleConditional_statement;
}

void LuminusParser::Conditional_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_statement(this);
}

void LuminusParser::Conditional_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_statement(this);
}


antlrcpp::Any LuminusParser::Conditional_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitConditional_statement(this);
  else
    return visitor->visitChildren(this);
}

LuminusParser::Conditional_statementContext* LuminusParser::conditional_statement() {
  Conditional_statementContext *_localctx = _tracker.createInstance<Conditional_statementContext>(_ctx, getState());
    enterRule(_localctx, 22, LuminusParser::RuleConditional_statement);
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
      setState(188);
      antlrcpp::downCast<Conditional_statementContext *>(_localctx)->if_teil = if_statement();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LuminusParser::T__18) {
          setState(189);
          antlrcpp::downCast<Conditional_statementContext *>(_localctx)->elif_statementContext = elif_statement();
          antlrcpp::downCast<Conditional_statementContext *>(_localctx)->else_if_container.push_back(
                  antlrcpp::downCast<Conditional_statementContext *>(_localctx)->elif_statementContext);
          setState(194);
          _errHandler->sync(this);
          _la = _input->LA(1);
      }
      setState(196);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuminusParser::T__17) {
          setState(195);
          antlrcpp::downCast<Conditional_statementContext *>(_localctx)->else_teil = else_statement();
      }

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

LuminusParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuminusParser::Return_statementContext::getRuleIndex() const {
  return LuminusParser::RuleReturn_statement;
}

void LuminusParser::Return_statementContext::copyFrom(Return_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

LuminusParser::ExpressionContext* LuminusParser::ReturnStatementContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
}

LuminusParser::ReturnStatementContext::ReturnStatementContext(Return_statementContext *ctx) { copyFrom(ctx); }

void LuminusParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}
void LuminusParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

antlrcpp::Any LuminusParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}
LuminusParser::Return_statementContext* LuminusParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
    enterRule(_localctx, 24, LuminusParser::RuleReturn_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      _localctx = _tracker.createInstance<LuminusParser::ReturnStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(198);
      match(LuminusParser::T__19);
      setState(200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~0x3fULL) == 0) &&
           ((1ULL << _la) & ((1ULL << LuminusParser::T__1)
                             | (1ULL << LuminusParser::T__11)
                             | (1ULL << LuminusParser::T__12)
                             | (1ULL << LuminusParser::MUL)
                             | (1ULL << LuminusParser::SUB)
                             | (1ULL << LuminusParser::LOG_NOT)
                             | (1ULL << LuminusParser::TRUE_CONST)
                             | (1ULL << LuminusParser::FALSE_CONST)
                             | (1ULL << LuminusParser::IDENTIFIER)
                             | (1ULL << LuminusParser::STRING_CONST)
                             | (1ULL << LuminusParser::INTEGER_CONST)
                             | (1ULL << LuminusParser::FLOATING_CONST))) != 0)) {
          setState(199);
          antlrcpp::downCast<ReturnStatementContext *>(_localctx)->value = expression(0);
      }
      setState(202);
      match(LuminusParser::T__8);

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
    enterRule(_localctx, 26, LuminusParser::RuleBlock);
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
      setState(204);
      match(LuminusParser::T__5);
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
          setState(205);
          statement();
          setState(208);
          _errHandler->sync(this);
          _la = _input->LA(1);
      } while ((((_la & ~0x3fULL) == 0) &&
                ((1ULL << _la) & ((1ULL << LuminusParser::T__1)
                                  | (1ULL << LuminusParser::T__5)
                                  | (1ULL << LuminusParser::T__11)
                                  | (1ULL << LuminusParser::T__12)
                                  | (1ULL << LuminusParser::T__15)
                                  | (1ULL << LuminusParser::T__16)
                                  | (1ULL << LuminusParser::T__19)
                                  | (1ULL << LuminusParser::MUL)
                                  | (1ULL << LuminusParser::SUB)
                                  | (1ULL << LuminusParser::LOG_NOT)
                                  | (1ULL << LuminusParser::TRUE_CONST)
                                  | (1ULL << LuminusParser::FALSE_CONST)
                                  | (1ULL << LuminusParser::TYPE)
                                  | (1ULL << LuminusParser::IDENTIFIER)
                                  | (1ULL << LuminusParser::STRING_CONST)
                                  | (1ULL << LuminusParser::INTEGER_CONST)
                                  | (1ULL << LuminusParser::FLOATING_CONST))) != 0));
      setState(210);
      match(LuminusParser::T__6);

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

LuminusParser::AssignmentContext* LuminusParser::StatementContext::assignment() {
  return getRuleContext<LuminusParser::AssignmentContext>(0);
}

LuminusParser::Return_statementContext* LuminusParser::StatementContext::return_statement() {
  return getRuleContext<LuminusParser::Return_statementContext>(0);
}

LuminusParser::Func_callContext* LuminusParser::StatementContext::func_call() {
  return getRuleContext<LuminusParser::Func_callContext>(0);
}

LuminusParser::BlockContext* LuminusParser::StatementContext::block() {
  return getRuleContext<LuminusParser::BlockContext>(0);
}

LuminusParser::Conditional_statementContext* LuminusParser::StatementContext::conditional_statement() {
  return getRuleContext<LuminusParser::Conditional_statementContext>(0);
}

LuminusParser::While_statementContext* LuminusParser::StatementContext::while_statement() {
  return getRuleContext<LuminusParser::While_statementContext>(0);
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
    enterRule(_localctx, 28, LuminusParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(222);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
          case 1: {
              enterOuterAlt(_localctx, 1);
              setState(212);
              assignment();
              break;
          }

          case 2: {
              enterOuterAlt(_localctx, 2);
              setState(213);
              return_statement();
              break;
          }

          case 3: {
              enterOuterAlt(_localctx, 3);
              setState(214);
              func_call();
              setState(215);
              match(LuminusParser::T__8);
              break;
          }

          case 4: {
              enterOuterAlt(_localctx, 4);
              setState(217);
              block();
              setState(218);
              match(LuminusParser::T__8);
              break;
          }

    case 5: {
        enterOuterAlt(_localctx, 5);
        setState(220);
        conditional_statement();
        break;
    }

    case 6: {
        enterOuterAlt(_localctx, 6);
        setState(221);
        while_statement();
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

bool LuminusParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
      case 6:
          return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LuminusParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
      case 0:
          return precpred(_ctx, 8);
      case 1:
          return precpred(_ctx, 7);
      case 2:
          return precpred(_ctx, 6);
      case 3:
          return precpred(_ctx, 3);
      case 4:
          return precpred(_ctx, 2);
      case 5:
          return precpred(_ctx, 14);

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
        "start", "argument", "function", "func_call", "struct_declaration", "assignment",
        "expression", "while_statement", "if_statement", "else_statement", "elif_statement",
        "conditional_statement", "return_statement", "block", "statement"
};

std::vector<std::string> LuminusParser::_literalNames = {
        "", "'func'", "'('", "','", "')'", "'->'", "'{'", "'}'", "'struct'", "';'",
        "'='", "'.'", "'&'", "'cast'", "'['", "']'", "'while'", "'if'", "'else'",
        "'elif'", "'return'", "'*'", "'/'", "'%'", "'+'", "'-'", "'<'", "'>'",
        "'<='", "'>='", "'=='", "'!='", "'and'", "'or'", "'not'", "'true'", "'false'",
        "'void'", "", "'int'", "'byte'", "'long'", "'double'", "'string'", "'bool'"
};

std::vector<std::string> LuminusParser::_symbolicNames = {
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "MUL", "DIV", "MOD", "ADD", "SUB", "LT", "GT", "LTE", "GTE",
        "EQ", "NOT_EQ", "LOG_AND", "LOG_OR", "LOG_NOT", "TRUE_CONST", "FALSE_CONST",
        "VOID", "TYPE", "INT", "BYTE", "LONG", "DOUBLE", "STRING", "BOOL", "IDENTIFIER",
        "STRING_CONST", "INTEGER_CONST", "FLOATING_CONST", "DIGIT", "WHITESPACE"
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
          0x3, 0x34, 0xe3, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4,
          0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9,
          0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa,
          0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4,
          0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2,
          0x3, 0x2, 0x6, 0x2, 0x23, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x24, 0x3,
          0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4,
          0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x30, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4,
          0x33, 0xb, 0x4, 0x5, 0x4, 0x35, 0xa, 0x4, 0x3, 0x4, 0x5, 0x4, 0x38,
          0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6,
          0x4, 0x3f, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x40, 0x3, 0x4, 0x3, 0x4,
          0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x4a,
          0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x4d, 0xb, 0x5, 0x5, 0x5, 0x4f, 0xa,
          0x5, 0x3, 0x5, 0x5, 0x5, 0x52, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3,
          0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6,
          0x5c, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x5d, 0x3, 0x6, 0x3, 0x6, 0x3,
          0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7,
          0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3,
          0x7, 0x5, 0x7, 0x70, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3,
          0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8,
          0x7b, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x7e, 0xb, 0x8, 0x3, 0x8, 0x3,
          0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8,
          0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3,
          0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8,
          0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x97, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8,
          0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3,
          0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8,
          0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xab, 0xa, 0x8, 0xc, 0x8,
          0xe, 0x8, 0xae, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9,
          0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3,
          0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd,
          0x7, 0xd, 0xc1, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xc4, 0xb, 0xd, 0x3,
          0xd, 0x5, 0xd, 0xc7, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xcb,
          0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0xd1,
          0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0xd2, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10,
          0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10,
          0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xe1, 0xa, 0x10, 0x3,
          0x10, 0x2, 0x3, 0xe, 0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10,
          0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x2, 0x9, 0x4, 0x2, 0x28,
          0x28, 0x2f, 0x2f, 0x3, 0x2, 0x27, 0x28, 0x3, 0x2, 0x25, 0x26, 0x3,
          0x2, 0x17, 0x18, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x1c, 0x21, 0x3,
          0x2, 0x22, 0x23, 0x2, 0xfb, 0x2, 0x22, 0x3, 0x2, 0x2, 0x2, 0x4, 0x26,
          0x3, 0x2, 0x2, 0x2, 0x6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8, 0x44, 0x3,
          0x2, 0x2, 0x2, 0xa, 0x55, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6f, 0x3, 0x2,
          0x2, 0x2, 0xe, 0x96, 0x3, 0x2, 0x2, 0x2, 0x10, 0xaf, 0x3, 0x2, 0x2,
          0x2, 0x12, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb7, 0x3, 0x2, 0x2, 0x2,
          0x16, 0xba, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x1a,
          0xc8, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xce, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xe0,
          0x3, 0x2, 0x2, 0x2, 0x20, 0x23, 0x5, 0x6, 0x4, 0x2, 0x21, 0x23, 0x5,
          0xa, 0x6, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x21, 0x3, 0x2,
          0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x22, 0x3, 0x2, 0x2,
          0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x3, 0x3, 0x2, 0x2, 0x2,
          0x26, 0x27, 0x9, 0x2, 0x2, 0x2, 0x27, 0x28, 0x7, 0x2f, 0x2, 0x2,
          0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2a,
          0x2b, 0x7, 0x2f, 0x2, 0x2, 0x2b, 0x34, 0x7, 0x4, 0x2, 0x2, 0x2c,
          0x31, 0x5, 0x4, 0x3, 0x2, 0x2d, 0x2e, 0x7, 0x5, 0x2, 0x2, 0x2e, 0x30,
          0x5, 0x4, 0x3, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x3,
          0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2,
          0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2,
          0x2, 0x34, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2,
          0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x7, 0x5, 0x2, 0x2, 0x37,
          0x36, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39,
          0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x6, 0x2, 0x2, 0x3a, 0x3b, 0x7,
          0x7, 0x2, 0x2, 0x3b, 0x3c, 0x9, 0x3, 0x2, 0x2, 0x3c, 0x3e, 0x7, 0x8,
          0x2, 0x2, 0x3d, 0x3f, 0x5, 0x1e, 0x10, 0x2, 0x3e, 0x3d, 0x3, 0x2,
          0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2,
          0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2,
          0x42, 0x43, 0x7, 0x9, 0x2, 0x2, 0x43, 0x7, 0x3, 0x2, 0x2, 0x2, 0x44,
          0x45, 0x7, 0x2f, 0x2, 0x2, 0x45, 0x4e, 0x7, 0x4, 0x2, 0x2, 0x46,
          0x4b, 0x5, 0xe, 0x8, 0x2, 0x47, 0x48, 0x7, 0x5, 0x2, 0x2, 0x48, 0x4a,
          0x5, 0xe, 0x8, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3,
          0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2,
          0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2,
          0x2, 0x4e, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2,
          0x4f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x7, 0x5, 0x2, 0x2, 0x51,
          0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53,
          0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x6, 0x2, 0x2, 0x54, 0x9, 0x3,
          0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0xa, 0x2, 0x2, 0x56, 0x57, 0x7, 0x2f,
          0x2, 0x2, 0x57, 0x5b, 0x7, 0x8, 0x2, 0x2, 0x58, 0x59, 0x5, 0x4, 0x3,
          0x2, 0x59, 0x5a, 0x7, 0xb, 0x2, 0x2, 0x5a, 0x5c, 0x3, 0x2, 0x2, 0x2,
          0x5b, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d,
          0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f,
          0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x9, 0x2, 0x2, 0x60, 0xb, 0x3,
          0x2, 0x2, 0x2, 0x61, 0x62, 0x9, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x2f,
          0x2, 0x2, 0x63, 0x70, 0x7, 0xb, 0x2, 0x2, 0x64, 0x65, 0x5, 0xe, 0x8,
          0x2, 0x65, 0x66, 0x7, 0xc, 0x2, 0x2, 0x66, 0x67, 0x5, 0xe, 0x8, 0x2,
          0x67, 0x68, 0x7, 0xb, 0x2, 0x2, 0x68, 0x70, 0x3, 0x2, 0x2, 0x2, 0x69,
          0x6a, 0x9, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x2f, 0x2, 0x2, 0x6b,
          0x6c, 0x7, 0xc, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0xe, 0x8, 0x2, 0x6d, 0x6e,
          0x7, 0xb, 0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x61, 0x3,
          0x2, 0x2, 0x2, 0x6f, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x69, 0x3, 0x2,
          0x2, 0x2, 0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x8, 0x8, 0x1,
          0x2, 0x72, 0x97, 0x9, 0x4, 0x2, 0x2, 0x73, 0x97, 0x7, 0x30, 0x2,
          0x2, 0x74, 0x97, 0x7, 0x31, 0x2, 0x2, 0x75, 0x97, 0x7, 0x32, 0x2,
          0x2, 0x76, 0x97, 0x7, 0x2f, 0x2, 0x2, 0x77, 0x78, 0x7, 0xe, 0x2,
          0x2, 0x78, 0x97, 0x5, 0xe, 0x8, 0xf, 0x79, 0x7b, 0x7, 0x17, 0x2,
          0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2,
          0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d,
          0x7f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x97,
          0x7, 0x2f, 0x2, 0x2, 0x80, 0x97, 0x5, 0x8, 0x5, 0x2, 0x81, 0x82,
          0x7, 0xf, 0x2, 0x2, 0x82, 0x83, 0x7, 0x1c, 0x2, 0x2, 0x83, 0x84,
          0x7, 0x28, 0x2, 0x2, 0x84, 0x85, 0x7, 0x1d, 0x2, 0x2, 0x85, 0x86,
          0x7, 0x4, 0x2, 0x2, 0x86, 0x87, 0x5, 0xe, 0x8, 0x2, 0x87, 0x88, 0x7,
          0x6, 0x2, 0x2, 0x88, 0x97, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x4,
          0x2, 0x2, 0x8a, 0x8b, 0x5, 0xe, 0x8, 0x2, 0x8b, 0x8c, 0x7, 0x6, 0x2,
          0x2, 0x8c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x1b, 0x2,
          0x2, 0x8e, 0x97, 0x5, 0xe, 0x8, 0x7, 0x8f, 0x90, 0x7, 0x2f, 0x2,
          0x2, 0x90, 0x91, 0x7, 0x10, 0x2, 0x2, 0x91, 0x92, 0x5, 0xe, 0x8,
          0x2, 0x92, 0x93, 0x7, 0x11, 0x2, 0x2, 0x93, 0x97, 0x3, 0x2, 0x2,
          0x2, 0x94, 0x95, 0x7, 0x24, 0x2, 0x2, 0x95, 0x97, 0x5, 0xe, 0x8,
          0x3, 0x96, 0x71, 0x3, 0x2, 0x2, 0x2, 0x96, 0x73, 0x3, 0x2, 0x2, 0x2,
          0x96, 0x74, 0x3, 0x2, 0x2, 0x2, 0x96, 0x75, 0x3, 0x2, 0x2, 0x2, 0x96,
          0x76, 0x3, 0x2, 0x2, 0x2, 0x96, 0x77, 0x3, 0x2, 0x2, 0x2, 0x96, 0x7c,
          0x3, 0x2, 0x2, 0x2, 0x96, 0x80, 0x3, 0x2, 0x2, 0x2, 0x96, 0x81, 0x3,
          0x2, 0x2, 0x2, 0x96, 0x89, 0x3, 0x2, 0x2, 0x2, 0x96, 0x8d, 0x3, 0x2,
          0x2, 0x2, 0x96, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2,
          0x2, 0x97, 0xac, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0xc, 0xa, 0x2, 0x2,
          0x99, 0x9a, 0x9, 0x5, 0x2, 0x2, 0x9a, 0xab, 0x5, 0xe, 0x8, 0xb, 0x9b,
          0x9c, 0xc, 0x9, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x19, 0x2, 0x2, 0x9d,
          0xab, 0x5, 0xe, 0x8, 0xa, 0x9e, 0x9f, 0xc, 0x8, 0x2, 0x2, 0x9f, 0xa0,
          0x9, 0x6, 0x2, 0x2, 0xa0, 0xab, 0x5, 0xe, 0x8, 0x9, 0xa1, 0xa2, 0xc,
          0x5, 0x2, 0x2, 0xa2, 0xa3, 0x9, 0x7, 0x2, 0x2, 0xa3, 0xab, 0x5, 0xe,
          0x8, 0x6, 0xa4, 0xa5, 0xc, 0x4, 0x2, 0x2, 0xa5, 0xa6, 0x9, 0x8, 0x2,
          0x2, 0xa6, 0xab, 0x5, 0xe, 0x8, 0x5, 0xa7, 0xa8, 0xc, 0x10, 0x2,
          0x2, 0xa8, 0xa9, 0x7, 0xd, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x2f, 0x2,
          0x2, 0xaa, 0x98, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x9b, 0x3, 0x2, 0x2, 0x2,
          0xaa, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xaa,
          0xa4, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xab, 0xae,
          0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3,
          0x2, 0x2, 0x2, 0xad, 0xf, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2,
          0x2, 0x2, 0xaf, 0xb0, 0x7, 0x12, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0xe,
          0x8, 0x2, 0xb1, 0xb2, 0x5, 0x1c, 0xf, 0x2, 0xb2, 0x11, 0x3, 0x2,
          0x2, 0x2, 0xb3, 0xb4, 0x7, 0x13, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0xe,
          0x8, 0x2, 0xb5, 0xb6, 0x5, 0x1c, 0xf, 0x2, 0xb6, 0x13, 0x3, 0x2,
          0x2, 0x2, 0xb7, 0xb8, 0x7, 0x14, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x1c,
          0xf, 0x2, 0xb9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x15,
          0x2, 0x2, 0xbb, 0xbc, 0x5, 0xe, 0x8, 0x2, 0xbc, 0xbd, 0x5, 0x1c,
          0xf, 0x2, 0xbd, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc2, 0x5, 0x12,
          0xa, 0x2, 0xbf, 0xc1, 0x5, 0x16, 0xc, 0x2, 0xc0, 0xbf, 0x3, 0x2,
          0x2, 0x2, 0xc1, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2,
          0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2,
          0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x14, 0xb, 0x2,
          0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7,
          0x19, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0x7, 0x16, 0x2, 0x2, 0xc9,
          0xcb, 0x5, 0xe, 0x8, 0x2, 0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb,
          0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7,
          0xb, 0x2, 0x2, 0xcd, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd0, 0x7, 0x8,
          0x2, 0x2, 0xcf, 0xd1, 0x5, 0x1e, 0x10, 0x2, 0xd0, 0xcf, 0x3, 0x2,
          0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2,
          0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2,
          0xd4, 0xd5, 0x7, 0x9, 0x2, 0x2, 0xd5, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd6,
          0xe1, 0x5, 0xc, 0x7, 0x2, 0xd7, 0xe1, 0x5, 0x1a, 0xe, 0x2, 0xd8,
          0xd9, 0x5, 0x8, 0x5, 0x2, 0xd9, 0xda, 0x7, 0xb, 0x2, 0x2, 0xda, 0xe1,
          0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x1c, 0xf, 0x2, 0xdc, 0xdd,
          0x7, 0xb, 0x2, 0x2, 0xdd, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe1, 0x5,
          0x18, 0xd, 0x2, 0xdf, 0xe1, 0x5, 0x10, 0x9, 0x2, 0xe0, 0xd6, 0x3,
          0x2, 0x2, 0x2, 0xe0, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xd8, 0x3, 0x2,
          0x2, 0x2, 0xe0, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2,
          0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0x1f, 0x3, 0x2, 0x2, 0x2,
          0x16, 0x22, 0x24, 0x31, 0x34, 0x37, 0x40, 0x4b, 0x4e, 0x51, 0x5d,
          0x6f, 0x7c, 0x96, 0xaa, 0xac, 0xc2, 0xc6, 0xca, 0xd2, 0xe0,
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
