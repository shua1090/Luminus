
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

LuminusParser::FunctionContext* LuminusParser::StartContext::function(size_t i) {
  return getRuleContext<LuminusParser::FunctionContext>(i);
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
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
          setState(18);
          function();
          setState(21);
          _errHandler->sync(this);
          _la = _input->LA(1);
      } while (_la == LuminusParser::T__4);

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
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitMultiplyOrDivide(this);
    else
        return visitor->visitChildren(this);
}
//----------------- StringConstContext ------------------------------------------------------------------

tree::TerminalNode *LuminusParser::StringConstContext::STRING_CONST() {
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
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitStringConst(this);
    else
        return visitor->visitChildren(this);
}
//----------------- Func_Call_ExpressionContext ------------------------------------------------------------------

LuminusParser::Func_callContext *LuminusParser::Func_Call_ExpressionContext::func_call() {
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
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitFunc_Call_Expression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- Unary_NegateContext ------------------------------------------------------------------

tree::TerminalNode *LuminusParser::Unary_NegateContext::SUB() {
    return getToken(LuminusParser::SUB, 0);
}

LuminusParser::ExpressionContext *LuminusParser::Unary_NegateContext::expression() {
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
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitIdentifierExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- CastToTypeContext ------------------------------------------------------------------

tree::TerminalNode *LuminusParser::CastToTypeContext::LESS_THAN() {
    return getToken(LuminusParser::LESS_THAN, 0);
}

tree::TerminalNode *LuminusParser::CastToTypeContext::GREATER_THAN() {
    return getToken(LuminusParser::GREATER_THAN, 0);
}

tree::TerminalNode *LuminusParser::CastToTypeContext::TYPE() {
    return getToken(LuminusParser::TYPE, 0);
}

LuminusParser::ExpressionContext *LuminusParser::CastToTypeContext::expression() {
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
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitCastToType(this);
    else
        return visitor->visitChildren(this);
}
//----------------- BoolExpressionContext ------------------------------------------------------------------

std::vector<LuminusParser::ExpressionContext *> LuminusParser::BoolExpressionContext::expression() {
    return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext *LuminusParser::BoolExpressionContext::expression(size_t i) {
    return getRuleContext<LuminusParser::ExpressionContext>(i);
}

tree::TerminalNode* LuminusParser::BoolExpressionContext::LESS_THAN() {
  return getToken(LuminusParser::LESS_THAN, 0);
}

tree::TerminalNode* LuminusParser::BoolExpressionContext::GREATER_THAN() {
  return getToken(LuminusParser::GREATER_THAN, 0);
}

tree::TerminalNode* LuminusParser::BoolExpressionContext::LESS_THAN_EQUAL() {
  return getToken(LuminusParser::LESS_THAN_EQUAL, 0);
}

tree::TerminalNode* LuminusParser::BoolExpressionContext::GREATER_THAN_EQUAL() {
  return getToken(LuminusParser::GREATER_THAN_EQUAL, 0);
}

tree::TerminalNode* LuminusParser::BoolExpressionContext::EQUAL_TO() {
  return getToken(LuminusParser::EQUAL_TO, 0);
}

LuminusParser::BoolExpressionContext::BoolExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuminusParser::BoolExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpression(this);
}
void LuminusParser::BoolExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuminusListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpression(this);
}

antlrcpp::Any LuminusParser::BoolExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitBoolExpression(this);
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
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, LuminusParser::RuleExpression, precedence);

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
      setState(44);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
          case 1: {
              _localctx = _tracker.createInstance<Bool_ConstContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;

              setState(24);
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
              setState(25);
              match(LuminusParser::STRING_CONST);
              break;
          }

          case 3: {
              _localctx = _tracker.createInstance<IntegerExpressionContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;
              setState(26);
              match(LuminusParser::INTEGER_CONST);
              break;
          }

          case 4: {
              _localctx = _tracker.createInstance<FloatExpressionContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;
              setState(27);
              match(LuminusParser::FLOATING_CONST);
              break;
          }

          case 5: {
              _localctx = _tracker.createInstance<Func_Call_ExpressionContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;
              setState(28);
              antlrcpp::downCast<Func_Call_ExpressionContext *>(_localctx)->call = func_call();
              break;
          }

          case 6: {
              _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;
              setState(29);
              antlrcpp::downCast<IdentifierExpressionContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
              break;
          }

          case 7: {
              _localctx = _tracker.createInstance<CastToTypeContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;
              setState(30);
              match(LuminusParser::T__0);
              setState(31);
              match(LuminusParser::LESS_THAN);
              setState(32);
              antlrcpp::downCast<CastToTypeContext *>(_localctx)->cast_type = match(LuminusParser::TYPE);
              setState(33);
              match(LuminusParser::GREATER_THAN);
              setState(34);
              match(LuminusParser::T__1);
              setState(35);
              antlrcpp::downCast<CastToTypeContext *>(_localctx)->inner = expression(0);
              setState(36);
              match(LuminusParser::T__2);
              break;
          }

          case 8: {
              _localctx = _tracker.createInstance<ParanthesesContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;
              setState(38);
              match(LuminusParser::T__1);
              setState(39);
              antlrcpp::downCast<ParanthesesContext *>(_localctx)->inner = expression(0);
              setState(40);
              match(LuminusParser::T__2);
              break;
          }

          case 9: {
              _localctx = _tracker.createInstance<Unary_NegateContext>(_localctx);
              _ctx = _localctx;
              previousContext = _localctx;
              setState(42);
              match(LuminusParser::SUB);
              setState(43);
              antlrcpp::downCast<Unary_NegateContext *>(_localctx)->inner = expression(2);
              break;
          }

          default:
              break;
      }
      _ctx->stop = _input->LT(-1);
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
              if (!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext = _localctx;
              setState(55);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
                  case 1: {
                      auto newContext = _tracker.createInstance<MultiplyOrDivideContext>(
                              _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                      _localctx = newContext;
                      newContext->left = previousContext;
                      pushNewRecursionContext(newContext, startState, RuleExpression);
                      setState(46);

                      if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
                      setState(47);
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
                      setState(48);
                      antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->right = expression(5);
                      break;
                  }

        case 2: {
            auto newContext = _tracker.createInstance<AddOrSubtractContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(49);

            if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
            setState(50);
            antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->op = _input->LT(1);
            _la = _input->LA(1);
            if (!(_la == LuminusParser::ADD

                  || _la == LuminusParser::SUB)) {
                antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->op = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(51);
            antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->right = expression(4);
            break;
        }

        case 3: {
            auto newContext = _tracker.createInstance<BoolExpressionContext>(
                    _tracker.createInstance<ExpressionContext>(parentContext, parentState));
            _localctx = newContext;
            newContext->left = previousContext;
            pushNewRecursionContext(newContext, startState, RuleExpression);
            setState(52);

            if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
            setState(53);
            antlrcpp::downCast<BoolExpressionContext *>(_localctx)->op = _input->LT(1);
            _la = _input->LA(1);
            if (!((((_la & ~0x3fULL) == 0) &&
                   ((1ULL << _la) & ((1ULL << LuminusParser::LESS_THAN)
                                     | (1ULL << LuminusParser::GREATER_THAN)
                                     | (1ULL << LuminusParser::LESS_THAN_EQUAL)
                                     | (1ULL << LuminusParser::GREATER_THAN_EQUAL)
                                     | (1ULL << LuminusParser::EQUAL_TO))) != 0))) {
                antlrcpp::downCast<BoolExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(54);
            antlrcpp::downCast<BoolExpressionContext *>(_localctx)->right = expression(2);
            break;
        }

                  default:
                      break;
              }
          }
          setState(59);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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

tree::TerminalNode* LuminusParser::ArgumentContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}

tree::TerminalNode* LuminusParser::ArgumentContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 4, LuminusParser::RuleArgument);
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
      setState(61);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuminusParser::T__3) {
          setState(60);
          antlrcpp::downCast<ArgumentContext *>(_localctx)->ref = match(LuminusParser::T__3);
      }
      setState(63);
      antlrcpp::downCast<ArgumentContext *>(_localctx)->dec_type = match(LuminusParser::TYPE);
      setState(64);
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

tree::TerminalNode *LuminusParser::FunctionDeclarationContext::IDENTIFIER() {
    return getToken(LuminusParser::IDENTIFIER, 0);
}

tree::TerminalNode *LuminusParser::FunctionDeclarationContext::TYPE() {
    return getToken(LuminusParser::TYPE, 0);
}

tree::TerminalNode *LuminusParser::FunctionDeclarationContext::VOID() {
    return getToken(LuminusParser::VOID, 0);
}

std::vector<LuminusParser::StatementContext *> LuminusParser::FunctionDeclarationContext::statement() {
    return getRuleContexts<LuminusParser::StatementContext>();
}

LuminusParser::StatementContext *LuminusParser::FunctionDeclarationContext::statement(size_t i) {
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
  enterRule(_localctx, 6, LuminusParser::RuleFunction);
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
      setState(66);
      match(LuminusParser::T__4);
      setState(67);
      antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->funcName = match(LuminusParser::IDENTIFIER);
      setState(68);
      match(LuminusParser::T__1);
      setState(77);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuminusParser::T__3

          || _la == LuminusParser::TYPE) {
          setState(69);
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext = argument();
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->args.push_back(
                  antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext);
          setState(74);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                  setState(70);
                  match(LuminusParser::T__5);
                  setState(71);
                  antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext = argument();
                  antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->args.push_back(
                          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext);
              }
              setState(76);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
          }
      }
      setState(80);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuminusParser::T__5) {
          setState(79);
          match(LuminusParser::T__5);
      }
      setState(82);
      match(LuminusParser::T__2);
      setState(83);
      match(LuminusParser::T__6);
      setState(84);
      antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->returnType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == LuminusParser::VOID

            || _la == LuminusParser::TYPE)) {
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->returnType = _errHandler->recoverInline(this);
      } else {
          _errHandler->reportMatch(this);
          consume();
      }
      setState(85);
      match(LuminusParser::T__7);
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
          setState(86);
          statement();
          setState(89);
          _errHandler->sync(this);
          _la = _input->LA(1);
      } while ((((_la & ~0x3fULL) == 0) &&
                ((1ULL << _la) & ((1ULL << LuminusParser::T__7)
                                  | (1ULL << LuminusParser::T__11)
                                  | (1ULL << LuminusParser::TYPE)
                                  | (1ULL << LuminusParser::IDENTIFIER))) != 0));
      setState(91);
      match(LuminusParser::T__8);

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

tree::TerminalNode *LuminusParser::FunctionCallContext::IDENTIFIER() {
    return getToken(LuminusParser::IDENTIFIER, 0);
}

std::vector<LuminusParser::ExpressionContext *> LuminusParser::FunctionCallContext::expression() {
    return getRuleContexts<LuminusParser::ExpressionContext>();
}

LuminusParser::ExpressionContext *LuminusParser::FunctionCallContext::expression(size_t i) {
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
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitFunctionCall(this);
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
        _localctx = _tracker.createInstance<LuminusParser::FunctionCallContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(93);
        antlrcpp::downCast<FunctionCallContext *>(_localctx)->funcid = match(LuminusParser::IDENTIFIER);
        setState(94);
        match(LuminusParser::T__1);
        setState(103);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & ((1ULL << LuminusParser::T__0)
                               | (1ULL << LuminusParser::T__1)
                               | (1ULL << LuminusParser::SUB)
                               | (1ULL << LuminusParser::TRUE_CONST)
                               | (1ULL << LuminusParser::FALSE_CONST)
                               | (1ULL << LuminusParser::STRING_CONST)
                               | (1ULL << LuminusParser::IDENTIFIER)
                               | (1ULL << LuminusParser::INTEGER_CONST)
                               | (1ULL << LuminusParser::FLOATING_CONST))) != 0)) {
            setState(95);
            antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext = expression(0);
            antlrcpp::downCast<FunctionCallContext *>(_localctx)->args.push_back(
                    antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext);
            setState(100);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(96);
                    match(LuminusParser::T__5);
                    setState(97);
                    antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext = expression(0);
                    antlrcpp::downCast<FunctionCallContext *>(_localctx)->args.push_back(
                            antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext);
                }
                setState(102);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
            }
        }
        setState(106);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuminusParser::T__5) {
            setState(105);
            match(LuminusParser::T__5);
        }
        setState(108);
        match(LuminusParser::T__2);

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

tree::TerminalNode* LuminusParser::ReinitializationContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

LuminusParser::ExpressionContext* LuminusParser::ReinitializationContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
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
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitReinitialization(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitializationContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::InitializationContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}

tree::TerminalNode* LuminusParser::InitializationContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
}

LuminusParser::ExpressionContext* LuminusParser::InitializationContext::expression() {
  return getRuleContext<LuminusParser::ExpressionContext>(0);
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
  if (auto parserVisitor = dynamic_cast<LuminusVisitor*>(visitor))
    return parserVisitor->visitInitialization(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationContext ------------------------------------------------------------------

tree::TerminalNode* LuminusParser::DeclarationContext::TYPE() {
  return getToken(LuminusParser::TYPE, 0);
}

tree::TerminalNode* LuminusParser::DeclarationContext::IDENTIFIER() {
  return getToken(LuminusParser::IDENTIFIER, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(124);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
          case 1: {
              _localctx = _tracker.createInstance<LuminusParser::DeclarationContext>(_localctx);
              enterOuterAlt(_localctx, 1);
              setState(110);
              antlrcpp::downCast<DeclarationContext *>(_localctx)->dec_type = match(LuminusParser::TYPE);
              setState(111);
              antlrcpp::downCast<DeclarationContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
              setState(112);
              match(LuminusParser::T__9);
              break;
          }

          case 2: {
              _localctx = _tracker.createInstance<LuminusParser::ReinitializationContext>(_localctx);
              enterOuterAlt(_localctx, 2);
              setState(113);
              antlrcpp::downCast<ReinitializationContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
              setState(114);
              match(LuminusParser::T__10);
              setState(115);
              antlrcpp::downCast<ReinitializationContext *>(_localctx)->value = expression(0);
              setState(116);
              match(LuminusParser::T__9);
              break;
          }

          case 3: {
              _localctx = _tracker.createInstance<LuminusParser::InitializationContext>(_localctx);
              enterOuterAlt(_localctx, 3);
              setState(118);
              antlrcpp::downCast<InitializationContext *>(_localctx)->dec_type = match(LuminusParser::TYPE);
              setState(119);
              antlrcpp::downCast<InitializationContext *>(_localctx)->id = match(LuminusParser::IDENTIFIER);
              setState(120);
              match(LuminusParser::T__10);
              setState(121);
              antlrcpp::downCast<InitializationContext *>(_localctx)->value = expression(0);
              setState(122);
              match(LuminusParser::T__9);
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
    enterRule(_localctx, 12, LuminusParser::RuleReturn_statement);
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
        setState(126);
        match(LuminusParser::T__11);
        setState(128);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & ((1ULL << LuminusParser::T__0)
                               | (1ULL << LuminusParser::T__1)
                               | (1ULL << LuminusParser::SUB)
                               | (1ULL << LuminusParser::TRUE_CONST)
                               | (1ULL << LuminusParser::FALSE_CONST)
                               | (1ULL << LuminusParser::STRING_CONST)
                               | (1ULL << LuminusParser::IDENTIFIER)
                               | (1ULL << LuminusParser::INTEGER_CONST)
                               | (1ULL << LuminusParser::FLOATING_CONST))) != 0)) {
            setState(127);
            antlrcpp::downCast<ReturnStatementContext *>(_localctx)->value = expression(0);
        }
        setState(130);
        match(LuminusParser::T__9);

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

LuminusParser::StatementContext *LuminusParser::BlockExpressionContext::statement(size_t i) {
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
    if (auto parserVisitor = dynamic_cast<LuminusVisitor *>(visitor))
        return parserVisitor->visitBlockExpression(this);
    else
        return visitor->visitChildren(this);
}

LuminusParser::BlockContext *LuminusParser::block() {
    BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
    enterRule(_localctx, 14, LuminusParser::RuleBlock);
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
        setState(132);
        match(LuminusParser::T__7);
        setState(134);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
            setState(133);
            statement();
            setState(136);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while ((((_la & ~0x3fULL) == 0) &&
                  ((1ULL << _la) & ((1ULL << LuminusParser::T__7)
                                    | (1ULL << LuminusParser::T__11)
                                    | (1ULL << LuminusParser::TYPE)
                                    | (1ULL << LuminusParser::IDENTIFIER))) != 0));
        setState(138);
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

LuminusParser::AssignmentContext *LuminusParser::StatementContext::assignment() {
    return getRuleContext<LuminusParser::AssignmentContext>(0);
}

LuminusParser::Return_statementContext *LuminusParser::StatementContext::return_statement() {
    return getRuleContext<LuminusParser::Return_statementContext>(0);
}

LuminusParser::Func_callContext *LuminusParser::StatementContext::func_call() {
    return getRuleContext<LuminusParser::Func_callContext>(0);
}

LuminusParser::BlockContext *LuminusParser::StatementContext::block() {
    return getRuleContext<LuminusParser::BlockContext>(0);
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
    enterRule(_localctx, 16, LuminusParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(148);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
          case 1: {
              enterOuterAlt(_localctx, 1);
              setState(140);
              assignment();
              break;
          }

          case 2: {
              enterOuterAlt(_localctx, 2);
              setState(141);
              return_statement();
              break;
          }

          case 3: {
              enterOuterAlt(_localctx, 3);
              setState(142);
              func_call();
              setState(143);
              match(LuminusParser::T__9);
              break;
          }

          case 4: {
              enterOuterAlt(_localctx, 4);
              setState(145);
              block();
              setState(146);
              match(LuminusParser::T__9);
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
    case 1: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LuminusParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
      case 0:
          return precpred(_ctx, 4);
      case 1:
          return precpred(_ctx, 3);
      case 2:
          return precpred(_ctx, 1);

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
        "start", "expression", "argument", "function", "func_call", "assignment",
        "return_statement", "block", "statement"
};

std::vector<std::string> LuminusParser::_literalNames = {
        "", "'cast'", "'('", "')'", "'ref'", "'function'", "','", "'returns'",
        "'{'", "'}'", "';'", "'='", "'return'", "'*'", "'/'", "'+'", "'-'", "'<'",
        "'>'", "'<='", "'>='", "'=='", "'true'", "'false'", "'void'"
};

std::vector<std::string> LuminusParser::_symbolicNames = {
        "", "", "", "", "", "", "", "", "", "", "", "", "", "MUL", "DIV", "ADD",
        "SUB", "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL",
        "EQUAL_TO", "TRUE_CONST", "FALSE_CONST", "VOID", "TYPE", "STRING_CONST",
        "IDENTIFIER", "INTEGER_CONST", "FLOATING_CONST", "DIGIT", "OCTAL_DIG",
        "HEX_DIG", "WHITESPACE"
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
          0x3, 0x23, 0x99, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4,
          0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9,
          0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa,
          0x3, 0x2, 0x6, 0x2, 0x16, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x17, 0x3,
          0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
          0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
          0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
          0x3, 0x3, 0x5, 0x3, 0x2f, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
          0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7,
          0x3, 0x3a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3d, 0xb, 0x3, 0x3, 0x4,
          0x5, 0x4, 0x40, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5,
          0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x4b,
          0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x4e, 0xb, 0x5, 0x5, 0x5, 0x50, 0xa,
          0x5, 0x3, 0x5, 0x5, 0x5, 0x53, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3,
          0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x5a, 0xa, 0x5, 0xd, 0x5, 0xe,
          0x5, 0x5b, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3,
          0x6, 0x3, 0x6, 0x7, 0x6, 0x65, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x68,
          0xb, 0x6, 0x5, 0x6, 0x6a, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x6d, 0xa,
          0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7,
          0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3,
          0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x7f, 0xa, 0x7, 0x3,
          0x8, 0x3, 0x8, 0x5, 0x8, 0x83, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3,
          0x9, 0x3, 0x9, 0x6, 0x9, 0x89, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x8a,
          0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3,
          0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x97, 0xa, 0xa, 0x3,
          0xa, 0x2, 0x3, 0x4, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10,
          0x12, 0x2, 0x7, 0x3, 0x2, 0x18, 0x19, 0x3, 0x2, 0xf, 0x10, 0x3, 0x2,
          0x11, 0x12, 0x3, 0x2, 0x13, 0x17, 0x3, 0x2, 0x1a, 0x1b, 0x2, 0xaa,
          0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x6,
          0x3f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x44, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5f,
          0x3, 0x2, 0x2, 0x2, 0xc, 0x7e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x80, 0x3,
          0x2, 0x2, 0x2, 0x10, 0x86, 0x3, 0x2, 0x2, 0x2, 0x12, 0x96, 0x3, 0x2,
          0x2, 0x2, 0x14, 0x16, 0x5, 0x8, 0x5, 0x2, 0x15, 0x14, 0x3, 0x2, 0x2,
          0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2,
          0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x3, 0x3, 0x2, 0x2, 0x2, 0x19,
          0x1a, 0x8, 0x3, 0x1, 0x2, 0x1a, 0x2f, 0x9, 0x2, 0x2, 0x2, 0x1b, 0x2f,
          0x7, 0x1c, 0x2, 0x2, 0x1c, 0x2f, 0x7, 0x1e, 0x2, 0x2, 0x1d, 0x2f,
          0x7, 0x1f, 0x2, 0x2, 0x1e, 0x2f, 0x5, 0xa, 0x6, 0x2, 0x1f, 0x2f,
          0x7, 0x1d, 0x2, 0x2, 0x20, 0x21, 0x7, 0x3, 0x2, 0x2, 0x21, 0x22,
          0x7, 0x13, 0x2, 0x2, 0x22, 0x23, 0x7, 0x1b, 0x2, 0x2, 0x23, 0x24,
          0x7, 0x14, 0x2, 0x2, 0x24, 0x25, 0x7, 0x4, 0x2, 0x2, 0x25, 0x26,
          0x5, 0x4, 0x3, 0x2, 0x26, 0x27, 0x7, 0x5, 0x2, 0x2, 0x27, 0x2f, 0x3,
          0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x4, 0x2, 0x2, 0x29, 0x2a, 0x5, 0x4,
          0x3, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 0x2, 0x2b, 0x2f, 0x3, 0x2, 0x2,
          0x2, 0x2c, 0x2d, 0x7, 0x12, 0x2, 0x2, 0x2d, 0x2f, 0x5, 0x4, 0x3,
          0x4, 0x2e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1b, 0x3, 0x2, 0x2, 0x2,
          0x2e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2e,
          0x1e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x20,
          0x3, 0x2, 0x2, 0x2, 0x2e, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3,
          0x2, 0x2, 0x2, 0x2f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0xc, 0x6,
          0x2, 0x2, 0x31, 0x32, 0x9, 0x3, 0x2, 0x2, 0x32, 0x3a, 0x5, 0x4, 0x3,
          0x7, 0x33, 0x34, 0xc, 0x5, 0x2, 0x2, 0x34, 0x35, 0x9, 0x4, 0x2, 0x2,
          0x35, 0x3a, 0x5, 0x4, 0x3, 0x6, 0x36, 0x37, 0xc, 0x3, 0x2, 0x2, 0x37,
          0x38, 0x9, 0x5, 0x2, 0x2, 0x38, 0x3a, 0x5, 0x4, 0x3, 0x4, 0x39, 0x30,
          0x3, 0x2, 0x2, 0x2, 0x39, 0x33, 0x3, 0x2, 0x2, 0x2, 0x39, 0x36, 0x3,
          0x2, 0x2, 0x2, 0x3a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2,
          0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x5, 0x3, 0x2, 0x2,
          0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x7, 0x6, 0x2, 0x2,
          0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40,
          0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 0x1b, 0x2, 0x2, 0x42,
          0x43, 0x7, 0x1d, 0x2, 0x2, 0x43, 0x7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45,
          0x7, 0x7, 0x2, 0x2, 0x45, 0x46, 0x7, 0x1d, 0x2, 0x2, 0x46, 0x4f,
          0x7, 0x4, 0x2, 0x2, 0x47, 0x4c, 0x5, 0x6, 0x4, 0x2, 0x48, 0x49, 0x7,
          0x8, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x6, 0x4, 0x2, 0x4a, 0x48, 0x3, 0x2,
          0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2,
          0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 0x3, 0x2, 0x2, 0x2,
          0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4f,
          0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53,
          0x7, 0x8, 0x2, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3,
          0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x5,
          0x2, 0x2, 0x55, 0x56, 0x7, 0x9, 0x2, 0x2, 0x56, 0x57, 0x9, 0x6, 0x2,
          0x2, 0x57, 0x59, 0x7, 0xa, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x12, 0xa,
          0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2,
          0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c,
          0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0xb, 0x2, 0x2, 0x5e, 0x9,
          0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x1d, 0x2, 0x2, 0x60, 0x69,
          0x7, 0x4, 0x2, 0x2, 0x61, 0x66, 0x5, 0x4, 0x3, 0x2, 0x62, 0x63, 0x7,
          0x8, 0x2, 0x2, 0x63, 0x65, 0x5, 0x4, 0x3, 0x2, 0x64, 0x62, 0x3, 0x2,
          0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2,
          0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2,
          0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 0x61, 0x3, 0x2, 0x2, 0x2, 0x69,
          0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6d,
          0x7, 0x8, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3,
          0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x5,
          0x2, 0x2, 0x6f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x1b, 0x2,
          0x2, 0x71, 0x72, 0x7, 0x1d, 0x2, 0x2, 0x72, 0x7f, 0x7, 0xc, 0x2,
          0x2, 0x73, 0x74, 0x7, 0x1d, 0x2, 0x2, 0x74, 0x75, 0x7, 0xd, 0x2,
          0x2, 0x75, 0x76, 0x5, 0x4, 0x3, 0x2, 0x76, 0x77, 0x7, 0xc, 0x2, 0x2,
          0x77, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x1b, 0x2, 0x2,
          0x79, 0x7a, 0x7, 0x1d, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xd, 0x2, 0x2,
          0x7b, 0x7c, 0x5, 0x4, 0x3, 0x2, 0x7c, 0x7d, 0x7, 0xc, 0x2, 0x2, 0x7d,
          0x7f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x73,
          0x3, 0x2, 0x2, 0x2, 0x7e, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7f, 0xd, 0x3,
          0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0xe, 0x2, 0x2, 0x81, 0x83, 0x5, 0x4,
          0x3, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2,
          0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0xc, 0x2, 0x2,
          0x85, 0xf, 0x3, 0x2, 0x2, 0x2, 0x86, 0x88, 0x7, 0xa, 0x2, 0x2, 0x87,
          0x89, 0x5, 0x12, 0xa, 0x2, 0x88, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89,
          0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b,
          0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7,
          0xb, 0x2, 0x2, 0x8d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x97, 0x5, 0xc,
          0x7, 0x2, 0x8f, 0x97, 0x5, 0xe, 0x8, 0x2, 0x90, 0x91, 0x5, 0xa, 0x6,
          0x2, 0x91, 0x92, 0x7, 0xc, 0x2, 0x2, 0x92, 0x97, 0x3, 0x2, 0x2, 0x2,
          0x93, 0x94, 0x5, 0x10, 0x9, 0x2, 0x94, 0x95, 0x7, 0xc, 0x2, 0x2,
          0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x96,
          0x8f, 0x3, 0x2, 0x2, 0x2, 0x96, 0x90, 0x3, 0x2, 0x2, 0x2, 0x96, 0x93,
          0x3, 0x2, 0x2, 0x2, 0x97, 0x13, 0x3, 0x2, 0x2, 0x2, 0x12, 0x17, 0x2e,
          0x39, 0x3b, 0x3f, 0x4c, 0x4f, 0x52, 0x5b, 0x66, 0x69, 0x6c, 0x7e,
          0x82, 0x8a, 0x96,
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
