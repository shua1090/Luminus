
// Generated from LuxLang.g4 by ANTLR 4.9.3


#include "LuxLangListener.h"
#include "LuxLangVisitor.h"

#include "LuxLangParser.h"


using namespace antlrcpp;
using namespace antlr4;

LuxLangParser::LuxLangParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LuxLangParser::~LuxLangParser() {
  delete _interpreter;
}

std::string LuxLangParser::getGrammarFileName() const {
  return "LuxLang.g4";
}

const std::vector<std::string>& LuxLangParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LuxLangParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

LuxLangParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuxLangParser::StatementContext *> LuxLangParser::StartContext::statement() {
  return getRuleContexts<LuxLangParser::StatementContext>();
}

LuxLangParser::StatementContext* LuxLangParser::StartContext::statement(size_t i) {
  return getRuleContext<LuxLangParser::StatementContext>(i);
}


size_t LuxLangParser::StartContext::getRuleIndex() const {
  return LuxLangParser::RuleStart;
}

void LuxLangParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void LuxLangParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


antlrcpp::Any LuxLangParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

LuxLangParser::StartContext* LuxLangParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, LuxLangParser::RuleStart);
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
    setState(17); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(16);
      statement();
      setState(19); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuxLangParser::T__3)
      | (1ULL << LuxLangParser::T__7)
      | (1ULL << LuxLangParser::T__8)
      | (1ULL << LuxLangParser::TYPE))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

LuxLangParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuxLangParser::ExpressionContext::getRuleIndex() const {
  return LuxLangParser::RuleExpression;
}

void LuxLangParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Bool_ConstContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::Bool_ConstContext::TRUE_CONST() {
  return getToken(LuxLangParser::TRUE_CONST, 0);
}

tree::TerminalNode* LuxLangParser::Bool_ConstContext::FALSE_CONST() {
  return getToken(LuxLangParser::FALSE_CONST, 0);
}

LuxLangParser::Bool_ConstContext::Bool_ConstContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::Bool_ConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_Const(this);
}
void LuxLangParser::Bool_ConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_Const(this);
}

antlrcpp::Any LuxLangParser::Bool_ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitBool_Const(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParanthesesContext ------------------------------------------------------------------

LuxLangParser::ExpressionContext* LuxLangParser::ParanthesesContext::expression() {
  return getRuleContext<LuxLangParser::ExpressionContext>(0);
}

LuxLangParser::ParanthesesContext::ParanthesesContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::ParanthesesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParantheses(this);
}
void LuxLangParser::ParanthesesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParantheses(this);
}

antlrcpp::Any LuxLangParser::ParanthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitParantheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplyOrDivideContext ------------------------------------------------------------------

std::vector<LuxLangParser::ExpressionContext *> LuxLangParser::MultiplyOrDivideContext::expression() {
  return getRuleContexts<LuxLangParser::ExpressionContext>();
}

LuxLangParser::ExpressionContext* LuxLangParser::MultiplyOrDivideContext::expression(size_t i) {
  return getRuleContext<LuxLangParser::ExpressionContext>(i);
}

tree::TerminalNode* LuxLangParser::MultiplyOrDivideContext::MUL() {
  return getToken(LuxLangParser::MUL, 0);
}

tree::TerminalNode* LuxLangParser::MultiplyOrDivideContext::DIV() {
  return getToken(LuxLangParser::DIV, 0);
}

LuxLangParser::MultiplyOrDivideContext::MultiplyOrDivideContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::MultiplyOrDivideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplyOrDivide(this);
}
void LuxLangParser::MultiplyOrDivideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplyOrDivide(this);
}

antlrcpp::Any LuxLangParser::MultiplyOrDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitMultiplyOrDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_NegateContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::Unary_NegateContext::SUB() {
  return getToken(LuxLangParser::SUB, 0);
}

LuxLangParser::ExpressionContext* LuxLangParser::Unary_NegateContext::expression() {
  return getRuleContext<LuxLangParser::ExpressionContext>(0);
}

LuxLangParser::Unary_NegateContext::Unary_NegateContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::Unary_NegateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_Negate(this);
}
void LuxLangParser::Unary_NegateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_Negate(this);
}

antlrcpp::Any LuxLangParser::Unary_NegateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitUnary_Negate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddOrSubtractContext ------------------------------------------------------------------

std::vector<LuxLangParser::ExpressionContext *> LuxLangParser::AddOrSubtractContext::expression() {
  return getRuleContexts<LuxLangParser::ExpressionContext>();
}

LuxLangParser::ExpressionContext* LuxLangParser::AddOrSubtractContext::expression(size_t i) {
  return getRuleContext<LuxLangParser::ExpressionContext>(i);
}

tree::TerminalNode* LuxLangParser::AddOrSubtractContext::ADD() {
  return getToken(LuxLangParser::ADD, 0);
}

tree::TerminalNode* LuxLangParser::AddOrSubtractContext::SUB() {
  return getToken(LuxLangParser::SUB, 0);
}

LuxLangParser::AddOrSubtractContext::AddOrSubtractContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::AddOrSubtractContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOrSubtract(this);
}
void LuxLangParser::AddOrSubtractContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOrSubtract(this);
}

antlrcpp::Any LuxLangParser::AddOrSubtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitAddOrSubtract(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::FloatExpressionContext::FLOATING_CONST() {
  return getToken(LuxLangParser::FLOATING_CONST, 0);
}

LuxLangParser::FloatExpressionContext::FloatExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::FloatExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatExpression(this);
}
void LuxLangParser::FloatExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatExpression(this);
}

antlrcpp::Any LuxLangParser::FloatExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitFloatExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::IntegerExpressionContext::INTEGER_CONST() {
  return getToken(LuxLangParser::INTEGER_CONST, 0);
}

LuxLangParser::IntegerExpressionContext::IntegerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::IntegerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerExpression(this);
}
void LuxLangParser::IntegerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerExpression(this);
}

antlrcpp::Any LuxLangParser::IntegerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitIntegerExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::FunctionCallContext::IDENTIFIER() {
  return getToken(LuxLangParser::IDENTIFIER, 0);
}

std::vector<LuxLangParser::ExpressionContext *> LuxLangParser::FunctionCallContext::expression() {
  return getRuleContexts<LuxLangParser::ExpressionContext>();
}

LuxLangParser::ExpressionContext* LuxLangParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<LuxLangParser::ExpressionContext>(i);
}

LuxLangParser::FunctionCallContext::FunctionCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void LuxLangParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

antlrcpp::Any LuxLangParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::IdentifierExpressionContext::IDENTIFIER() {
  return getToken(LuxLangParser::IDENTIFIER, 0);
}

LuxLangParser::IdentifierExpressionContext::IdentifierExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void LuxLangParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}

antlrcpp::Any LuxLangParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolExpressionContext ------------------------------------------------------------------

std::vector<LuxLangParser::ExpressionContext *> LuxLangParser::BoolExpressionContext::expression() {
  return getRuleContexts<LuxLangParser::ExpressionContext>();
}

LuxLangParser::ExpressionContext* LuxLangParser::BoolExpressionContext::expression(size_t i) {
  return getRuleContext<LuxLangParser::ExpressionContext>(i);
}

tree::TerminalNode* LuxLangParser::BoolExpressionContext::LESS_THAN() {
  return getToken(LuxLangParser::LESS_THAN, 0);
}

tree::TerminalNode* LuxLangParser::BoolExpressionContext::GREATER_THAN() {
  return getToken(LuxLangParser::GREATER_THAN, 0);
}

tree::TerminalNode* LuxLangParser::BoolExpressionContext::LESS_THAN_EQUAL() {
  return getToken(LuxLangParser::LESS_THAN_EQUAL, 0);
}

tree::TerminalNode* LuxLangParser::BoolExpressionContext::GREATER_THAN_EQUAL() {
  return getToken(LuxLangParser::GREATER_THAN_EQUAL, 0);
}

tree::TerminalNode* LuxLangParser::BoolExpressionContext::EQUAL_TO() {
  return getToken(LuxLangParser::EQUAL_TO, 0);
}

LuxLangParser::BoolExpressionContext::BoolExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::BoolExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpression(this);
}
void LuxLangParser::BoolExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpression(this);
}

antlrcpp::Any LuxLangParser::BoolExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitBoolExpression(this);
  else
    return visitor->visitChildren(this);
}

LuxLangParser::ExpressionContext* LuxLangParser::expression() {
   return expression(0);
}

LuxLangParser::ExpressionContext* LuxLangParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LuxLangParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  LuxLangParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, LuxLangParser::RuleExpression, precedence);

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
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Bool_ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(22);
      antlrcpp::downCast<Bool_ConstContext *>(_localctx)->BOOL_CONST = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == LuxLangParser::TRUE_CONST

      || _la == LuxLangParser::FALSE_CONST)) {
        antlrcpp::downCast<Bool_ConstContext *>(_localctx)->BOOL_CONST = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IntegerExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(23);
      match(LuxLangParser::INTEGER_CONST);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FloatExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(24);
      match(LuxLangParser::FLOATING_CONST);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(25);
      match(LuxLangParser::IDENTIFIER);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Unary_NegateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(26);
      match(LuxLangParser::SUB);
      setState(27);
      antlrcpp::downCast<Unary_NegateContext *>(_localctx)->inner = expression(6);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ParanthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(28);
      match(LuxLangParser::T__0);
      setState(29);
      antlrcpp::downCast<ParanthesesContext *>(_localctx)->inner = expression(0);
      setState(30);
      match(LuxLangParser::T__1);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(32);
      match(LuxLangParser::IDENTIFIER);
      setState(33);
      match(LuxLangParser::T__0);
      setState(42);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << LuxLangParser::T__0)
        | (1ULL << LuxLangParser::SUB)
        | (1ULL << LuxLangParser::TRUE_CONST)
        | (1ULL << LuxLangParser::FALSE_CONST)
        | (1ULL << LuxLangParser::IDENTIFIER)
        | (1ULL << LuxLangParser::INTEGER_CONST)
        | (1ULL << LuxLangParser::FLOATING_CONST))) != 0)) {
        setState(34);
        expression(0);
        setState(39);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LuxLangParser::T__2) {
          setState(35);
          match(LuxLangParser::T__2);
          setState(36);
          expression(0);
          setState(41);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(44);
      match(LuxLangParser::T__1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(58);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(56);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplyOrDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(47);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(48);
          antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == LuxLangParser::MUL

          || _la == LuxLangParser::DIV)) {
            antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(49);
          antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->right = expression(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddOrSubtractContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(50);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(51);
          antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == LuxLangParser::ADD

          || _la == LuxLangParser::SUB)) {
            antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(52);
          antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->right = expression(3);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BoolExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(53);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(54);
          antlrcpp::downCast<BoolExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << LuxLangParser::LESS_THAN)
            | (1ULL << LuxLangParser::GREATER_THAN)
            | (1ULL << LuxLangParser::LESS_THAN_EQUAL)
            | (1ULL << LuxLangParser::GREATER_THAN_EQUAL)
            | (1ULL << LuxLangParser::EQUAL_TO))) != 0))) {
            antlrcpp::downCast<BoolExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(55);
          antlrcpp::downCast<BoolExpressionContext *>(_localctx)->right = expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(60);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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

LuxLangParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuxLangParser::ArgumentContext::TYPE() {
  return getToken(LuxLangParser::TYPE, 0);
}

tree::TerminalNode* LuxLangParser::ArgumentContext::IDENTIFIER() {
  return getToken(LuxLangParser::IDENTIFIER, 0);
}


size_t LuxLangParser::ArgumentContext::getRuleIndex() const {
  return LuxLangParser::RuleArgument;
}

void LuxLangParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void LuxLangParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any LuxLangParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

LuxLangParser::ArgumentContext* LuxLangParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 4, LuxLangParser::RuleArgument);

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
    match(LuxLangParser::TYPE);
    setState(62);
    match(LuxLangParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

LuxLangParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuxLangParser::FunctionContext::getRuleIndex() const {
  return LuxLangParser::RuleFunction;
}

void LuxLangParser::FunctionContext::copyFrom(FunctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(LuxLangParser::IDENTIFIER, 0);
}

tree::TerminalNode* LuxLangParser::FunctionDeclarationContext::TYPE() {
  return getToken(LuxLangParser::TYPE, 0);
}

std::vector<LuxLangParser::StatementContext *> LuxLangParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<LuxLangParser::StatementContext>();
}

LuxLangParser::StatementContext* LuxLangParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<LuxLangParser::StatementContext>(i);
}

std::vector<LuxLangParser::ArgumentContext *> LuxLangParser::FunctionDeclarationContext::argument() {
  return getRuleContexts<LuxLangParser::ArgumentContext>();
}

LuxLangParser::ArgumentContext* LuxLangParser::FunctionDeclarationContext::argument(size_t i) {
  return getRuleContext<LuxLangParser::ArgumentContext>(i);
}

LuxLangParser::FunctionDeclarationContext::FunctionDeclarationContext(FunctionContext *ctx) { copyFrom(ctx); }

void LuxLangParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}
void LuxLangParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

antlrcpp::Any LuxLangParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}
LuxLangParser::FunctionContext* LuxLangParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 6, LuxLangParser::RuleFunction);
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
    _localctx = _tracker.createInstance<LuxLangParser::FunctionDeclarationContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(LuxLangParser::T__3);
    setState(65);
    antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->funcName = match(LuxLangParser::IDENTIFIER);
    setState(66);
    match(LuxLangParser::T__0);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuxLangParser::TYPE) {
      setState(67);
      antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext = argument();
      antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->args.push_back(antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext);
      setState(72);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(68);
          match(LuxLangParser::T__2);
          setState(69);
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext = argument();
          antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->args.push_back(antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->argumentContext); 
        }
        setState(74);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      }
    }
    setState(78);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuxLangParser::T__2) {
      setState(77);
      match(LuxLangParser::T__2);
    }
    setState(80);
    match(LuxLangParser::T__1);
    setState(81);
    match(LuxLangParser::T__4);
    setState(82);
    antlrcpp::downCast<FunctionDeclarationContext *>(_localctx)->returnType = match(LuxLangParser::TYPE);
    setState(83);
    match(LuxLangParser::T__5);
    setState(85); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(84);
      statement();
      setState(87); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuxLangParser::T__3)
      | (1ULL << LuxLangParser::T__7)
      | (1ULL << LuxLangParser::T__8)
      | (1ULL << LuxLangParser::TYPE))) != 0));
    setState(89);
    match(LuxLangParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_ifContext ------------------------------------------------------------------

LuxLangParser::Conditional_ifContext::Conditional_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuxLangParser::ExpressionContext* LuxLangParser::Conditional_ifContext::expression() {
  return getRuleContext<LuxLangParser::ExpressionContext>(0);
}

std::vector<LuxLangParser::StatementContext *> LuxLangParser::Conditional_ifContext::statement() {
  return getRuleContexts<LuxLangParser::StatementContext>();
}

LuxLangParser::StatementContext* LuxLangParser::Conditional_ifContext::statement(size_t i) {
  return getRuleContext<LuxLangParser::StatementContext>(i);
}


size_t LuxLangParser::Conditional_ifContext::getRuleIndex() const {
  return LuxLangParser::RuleConditional_if;
}

void LuxLangParser::Conditional_ifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_if(this);
}

void LuxLangParser::Conditional_ifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_if(this);
}


antlrcpp::Any LuxLangParser::Conditional_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitConditional_if(this);
  else
    return visitor->visitChildren(this);
}

LuxLangParser::Conditional_ifContext* LuxLangParser::conditional_if() {
  Conditional_ifContext *_localctx = _tracker.createInstance<Conditional_ifContext>(_ctx, getState());
  enterRule(_localctx, 8, LuxLangParser::RuleConditional_if);
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
    setState(91);
    match(LuxLangParser::T__7);
    setState(92);
    match(LuxLangParser::T__0);
    setState(93);
    expression(0);
    setState(94);
    match(LuxLangParser::T__1);
    setState(95);
    match(LuxLangParser::T__5);
    setState(97); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(96);
      statement();
      setState(99); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuxLangParser::T__3)
      | (1ULL << LuxLangParser::T__7)
      | (1ULL << LuxLangParser::T__8)
      | (1ULL << LuxLangParser::TYPE))) != 0));
    setState(101);
    match(LuxLangParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_elseContext ------------------------------------------------------------------

LuxLangParser::Conditional_elseContext::Conditional_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuxLangParser::StatementContext *> LuxLangParser::Conditional_elseContext::statement() {
  return getRuleContexts<LuxLangParser::StatementContext>();
}

LuxLangParser::StatementContext* LuxLangParser::Conditional_elseContext::statement(size_t i) {
  return getRuleContext<LuxLangParser::StatementContext>(i);
}


size_t LuxLangParser::Conditional_elseContext::getRuleIndex() const {
  return LuxLangParser::RuleConditional_else;
}

void LuxLangParser::Conditional_elseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_else(this);
}

void LuxLangParser::Conditional_elseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_else(this);
}


antlrcpp::Any LuxLangParser::Conditional_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitConditional_else(this);
  else
    return visitor->visitChildren(this);
}

LuxLangParser::Conditional_elseContext* LuxLangParser::conditional_else() {
  Conditional_elseContext *_localctx = _tracker.createInstance<Conditional_elseContext>(_ctx, getState());
  enterRule(_localctx, 10, LuxLangParser::RuleConditional_else);
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
    setState(103);
    match(LuxLangParser::T__8);
    setState(104);
    match(LuxLangParser::T__5);
    setState(106); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(105);
      statement();
      setState(108); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuxLangParser::T__3)
      | (1ULL << LuxLangParser::T__7)
      | (1ULL << LuxLangParser::T__8)
      | (1ULL << LuxLangParser::TYPE))) != 0));
    setState(110);
    match(LuxLangParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

LuxLangParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuxLangParser::AssignmentContext::getRuleIndex() const {
  return LuxLangParser::RuleAssignment;
}

void LuxLangParser::AssignmentContext::copyFrom(AssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InitializationContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::InitializationContext::TYPE() {
  return getToken(LuxLangParser::TYPE, 0);
}

tree::TerminalNode* LuxLangParser::InitializationContext::IDENTIFIER() {
  return getToken(LuxLangParser::IDENTIFIER, 0);
}

LuxLangParser::ExpressionContext* LuxLangParser::InitializationContext::expression() {
  return getRuleContext<LuxLangParser::ExpressionContext>(0);
}

LuxLangParser::InitializationContext::InitializationContext(AssignmentContext *ctx) { copyFrom(ctx); }

void LuxLangParser::InitializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitialization(this);
}
void LuxLangParser::InitializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitialization(this);
}

antlrcpp::Any LuxLangParser::InitializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitInitialization(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolInitializationContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::BoolInitializationContext::TYPE() {
  return getToken(LuxLangParser::TYPE, 0);
}

tree::TerminalNode* LuxLangParser::BoolInitializationContext::IDENTIFIER() {
  return getToken(LuxLangParser::IDENTIFIER, 0);
}

LuxLangParser::ExpressionContext* LuxLangParser::BoolInitializationContext::expression() {
  return getRuleContext<LuxLangParser::ExpressionContext>(0);
}

LuxLangParser::BoolInitializationContext::BoolInitializationContext(AssignmentContext *ctx) { copyFrom(ctx); }

void LuxLangParser::BoolInitializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolInitialization(this);
}
void LuxLangParser::BoolInitializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolInitialization(this);
}

antlrcpp::Any LuxLangParser::BoolInitializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitBoolInitialization(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationContext ------------------------------------------------------------------

tree::TerminalNode* LuxLangParser::DeclarationContext::TYPE() {
  return getToken(LuxLangParser::TYPE, 0);
}

tree::TerminalNode* LuxLangParser::DeclarationContext::IDENTIFIER() {
  return getToken(LuxLangParser::IDENTIFIER, 0);
}

LuxLangParser::DeclarationContext::DeclarationContext(AssignmentContext *ctx) { copyFrom(ctx); }

void LuxLangParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}
void LuxLangParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

antlrcpp::Any LuxLangParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}
LuxLangParser::AssignmentContext* LuxLangParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 12, LuxLangParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LuxLangParser::InitializationContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(112);
      antlrcpp::downCast<InitializationContext *>(_localctx)->dec_type = match(LuxLangParser::TYPE);
      setState(113);
      antlrcpp::downCast<InitializationContext *>(_localctx)->id = match(LuxLangParser::IDENTIFIER);
      setState(114);
      match(LuxLangParser::T__9);
      setState(115);
      antlrcpp::downCast<InitializationContext *>(_localctx)->value = expression(0);
      setState(116);
      match(LuxLangParser::T__10);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LuxLangParser::BoolInitializationContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(118);
      antlrcpp::downCast<BoolInitializationContext *>(_localctx)->dec_type = match(LuxLangParser::TYPE);
      setState(119);
      antlrcpp::downCast<BoolInitializationContext *>(_localctx)->id = match(LuxLangParser::IDENTIFIER);
      setState(120);
      match(LuxLangParser::T__9);
      setState(121);
      antlrcpp::downCast<BoolInitializationContext *>(_localctx)->value = expression(0);
      setState(122);
      match(LuxLangParser::T__10);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LuxLangParser::DeclarationContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(124);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->dec_type = match(LuxLangParser::TYPE);
      setState(125);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->id = match(LuxLangParser::IDENTIFIER);
      setState(126);
      match(LuxLangParser::T__10);
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

//----------------- StatementContext ------------------------------------------------------------------

LuxLangParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuxLangParser::AssignmentContext* LuxLangParser::StatementContext::assignment() {
  return getRuleContext<LuxLangParser::AssignmentContext>(0);
}

LuxLangParser::Conditional_ifContext* LuxLangParser::StatementContext::conditional_if() {
  return getRuleContext<LuxLangParser::Conditional_ifContext>(0);
}

LuxLangParser::Conditional_elseContext* LuxLangParser::StatementContext::conditional_else() {
  return getRuleContext<LuxLangParser::Conditional_elseContext>(0);
}

LuxLangParser::FunctionContext* LuxLangParser::StatementContext::function() {
  return getRuleContext<LuxLangParser::FunctionContext>(0);
}


size_t LuxLangParser::StatementContext::getRuleIndex() const {
  return LuxLangParser::RuleStatement;
}

void LuxLangParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void LuxLangParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuxLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any LuxLangParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuxLangVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

LuxLangParser::StatementContext* LuxLangParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, LuxLangParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuxLangParser::TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(129);
        assignment();
        break;
      }

      case LuxLangParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(130);
        conditional_if();
        break;
      }

      case LuxLangParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(131);
        conditional_else();
        break;
      }

      case LuxLangParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(132);
        function();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LuxLangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LuxLangParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> LuxLangParser::_decisionToDFA;
atn::PredictionContextCache LuxLangParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LuxLangParser::_atn;
std::vector<uint16_t> LuxLangParser::_serializedATN;

std::vector<std::string> LuxLangParser::_ruleNames = {
  "start", "expression", "argument", "function", "conditional_if", "conditional_else", 
  "assignment", "statement"
};

std::vector<std::string> LuxLangParser::_literalNames = {
  "", "'('", "')'", "','", "'function'", "'returns'", "'{'", "'}'", "'if'", 
  "'else'", "'='", "';'", "'*'", "'/'", "'+'", "'-'", "'<'", "'>'", "'<='", 
  "'>='", "'=='", "'true'", "'false'"
};

std::vector<std::string> LuxLangParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "MUL", "DIV", "ADD", "SUB", 
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", 
  "EQUAL_TO", "TRUE_CONST", "FALSE_CONST", "TYPE", "IDENTIFIER", "INTEGER_CONST", 
  "FLOATING_CONST", "DIGIT", "OCTAL_DIG", "HEX_DIG", "WHITESPACE"
};

dfa::Vocabulary LuxLangParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LuxLangParser::_tokenNames;

LuxLangParser::Initializer::Initializer() {
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
       0x3, 0x20, 0x8a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x6, 0x2, 
       0x14, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x15, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x7, 0x3, 0x28, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x2b, 0xb, 0x3, 
       0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x30, 0xa, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
       0x3e, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x49, 0xa, 0x5, 
       0xc, 0x5, 0xe, 0x5, 0x4c, 0xb, 0x5, 0x5, 0x5, 0x4e, 0xa, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x51, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x6, 0x5, 0x58, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x59, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x6, 0x6, 0x64, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x65, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x6d, 
       0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x6e, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x5, 0x8, 0x82, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x5, 0x9, 0x88, 0xa, 0x9, 0x3, 0x9, 0x2, 0x3, 0x4, 0xa, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x2, 0x6, 0x3, 0x2, 0x17, 
       0x18, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0x10, 0x11, 0x3, 0x2, 0x12, 0x16, 
       0x2, 0x98, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2f, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x42, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x69, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0x81, 0x3, 0x2, 0x2, 0x2, 0x10, 0x87, 0x3, 0x2, 0x2, 0x2, 0x12, 0x14, 
       0x5, 0x10, 0x9, 0x2, 0x13, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 
       0x2, 0x2, 0x2, 0x16, 0x3, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x8, 0x3, 
       0x1, 0x2, 0x18, 0x30, 0x9, 0x2, 0x2, 0x2, 0x19, 0x30, 0x7, 0x1b, 
       0x2, 0x2, 0x1a, 0x30, 0x7, 0x1c, 0x2, 0x2, 0x1b, 0x30, 0x7, 0x1a, 
       0x2, 0x2, 0x1c, 0x1d, 0x7, 0x11, 0x2, 0x2, 0x1d, 0x30, 0x5, 0x4, 
       0x3, 0x8, 0x1e, 0x1f, 0x7, 0x3, 0x2, 0x2, 0x1f, 0x20, 0x5, 0x4, 0x3, 
       0x2, 0x20, 0x21, 0x7, 0x4, 0x2, 0x2, 0x21, 0x30, 0x3, 0x2, 0x2, 0x2, 
       0x22, 0x23, 0x7, 0x1a, 0x2, 0x2, 0x23, 0x2c, 0x7, 0x3, 0x2, 0x2, 
       0x24, 0x29, 0x5, 0x4, 0x3, 0x2, 0x25, 0x26, 0x7, 0x5, 0x2, 0x2, 0x26, 
       0x28, 0x5, 0x4, 0x3, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 
       0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 
       0x2, 0x2, 0x2c, 0x24, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 
       0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x30, 0x7, 0x4, 0x2, 0x2, 
       0x2f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2f, 
       0x1a, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x1c, 
       0x3, 0x2, 0x2, 0x2, 0x2f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x22, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0xc, 0x5, 
       0x2, 0x2, 0x32, 0x33, 0x9, 0x3, 0x2, 0x2, 0x33, 0x3b, 0x5, 0x4, 0x3, 
       0x6, 0x34, 0x35, 0xc, 0x4, 0x2, 0x2, 0x35, 0x36, 0x9, 0x4, 0x2, 0x2, 
       0x36, 0x3b, 0x5, 0x4, 0x3, 0x5, 0x37, 0x38, 0xc, 0x3, 0x2, 0x2, 0x38, 
       0x39, 0x9, 0x5, 0x2, 0x2, 0x39, 0x3b, 0x5, 0x4, 0x3, 0x4, 0x3a, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x3a, 0x34, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x37, 0x3, 
       0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x5, 0x3, 0x2, 0x2, 
       0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x19, 0x2, 
       0x2, 0x40, 0x41, 0x7, 0x1a, 0x2, 0x2, 0x41, 0x7, 0x3, 0x2, 0x2, 0x2, 
       0x42, 0x43, 0x7, 0x6, 0x2, 0x2, 0x43, 0x44, 0x7, 0x1a, 0x2, 0x2, 
       0x44, 0x4d, 0x7, 0x3, 0x2, 0x2, 0x45, 0x4a, 0x5, 0x6, 0x4, 0x2, 0x46, 
       0x47, 0x7, 0x5, 0x2, 0x2, 0x47, 0x49, 0x5, 0x6, 0x4, 0x2, 0x48, 0x46, 
       0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 
       0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 
       0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x45, 0x3, 0x2, 0x2, 
       0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x3, 0x2, 0x2, 0x2, 
       0x4f, 0x51, 0x7, 0x5, 0x2, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 
       0x7, 0x4, 0x2, 0x2, 0x53, 0x54, 0x7, 0x7, 0x2, 0x2, 0x54, 0x55, 0x7, 
       0x19, 0x2, 0x2, 0x55, 0x57, 0x7, 0x8, 0x2, 0x2, 0x56, 0x58, 0x5, 
       0x10, 0x9, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 
       0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 
       0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x9, 0x2, 
       0x2, 0x5c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0xa, 0x2, 0x2, 
       0x5e, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x4, 0x3, 0x2, 0x60, 
       0x61, 0x7, 0x4, 0x2, 0x2, 0x61, 0x63, 0x7, 0x8, 0x2, 0x2, 0x62, 0x64, 
       0x5, 0x10, 0x9, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 
       0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x9, 
       0x2, 0x2, 0x68, 0xb, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0xb, 0x2, 
       0x2, 0x6a, 0x6c, 0x7, 0x8, 0x2, 0x2, 0x6b, 0x6d, 0x5, 0x10, 0x9, 
       0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 
       0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 
       0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x9, 0x2, 0x2, 0x71, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x19, 0x2, 0x2, 0x73, 0x74, 
       0x7, 0x1a, 0x2, 0x2, 0x74, 0x75, 0x7, 0xc, 0x2, 0x2, 0x75, 0x76, 
       0x5, 0x4, 0x3, 0x2, 0x76, 0x77, 0x7, 0xd, 0x2, 0x2, 0x77, 0x82, 0x3, 
       0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x19, 0x2, 0x2, 0x79, 0x7a, 0x7, 
       0x1a, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xc, 0x2, 0x2, 0x7b, 0x7c, 0x5, 
       0x4, 0x3, 0x2, 0x7c, 0x7d, 0x7, 0xd, 0x2, 0x2, 0x7d, 0x82, 0x3, 0x2, 
       0x2, 0x2, 0x7e, 0x7f, 0x7, 0x19, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x1a, 
       0x2, 0x2, 0x80, 0x82, 0x7, 0xd, 0x2, 0x2, 0x81, 0x72, 0x3, 0x2, 0x2, 
       0x2, 0x81, 0x78, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7e, 0x3, 0x2, 0x2, 0x2, 
       0x82, 0xf, 0x3, 0x2, 0x2, 0x2, 0x83, 0x88, 0x5, 0xe, 0x8, 0x2, 0x84, 
       0x88, 0x5, 0xa, 0x6, 0x2, 0x85, 0x88, 0x5, 0xc, 0x7, 0x2, 0x86, 0x88, 
       0x5, 0x8, 0x5, 0x2, 0x87, 0x83, 0x3, 0x2, 0x2, 0x2, 0x87, 0x84, 0x3, 
       0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x86, 0x3, 0x2, 
       0x2, 0x2, 0x88, 0x11, 0x3, 0x2, 0x2, 0x2, 0x10, 0x15, 0x29, 0x2c, 
       0x2f, 0x3a, 0x3c, 0x4a, 0x4d, 0x50, 0x59, 0x65, 0x6e, 0x81, 0x87, 
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

LuxLangParser::Initializer LuxLangParser::_init;
