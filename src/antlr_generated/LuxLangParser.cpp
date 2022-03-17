
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
    setState(9); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      statement();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LuxLangParser::TYPE);
   
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
    setState(23);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuxLangParser::INTEGER_CONST: {
        _localctx = _tracker.createInstance<IntegerExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(14);
        match(LuxLangParser::INTEGER_CONST);
        break;
      }

      case LuxLangParser::FLOATING_CONST: {
        _localctx = _tracker.createInstance<FloatExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(15);
        match(LuxLangParser::FLOATING_CONST);
        break;
      }

      case LuxLangParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(16);
        match(LuxLangParser::IDENTIFIER);
        break;
      }

      case LuxLangParser::SUB: {
        _localctx = _tracker.createInstance<Unary_NegateContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(17);
        match(LuxLangParser::SUB);
        setState(18);
        antlrcpp::downCast<Unary_NegateContext *>(_localctx)->inner = expression(4);
        break;
      }

      case LuxLangParser::T__0: {
        _localctx = _tracker.createInstance<ParanthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(19);
        match(LuxLangParser::T__0);
        setState(20);
        antlrcpp::downCast<ParanthesesContext *>(_localctx)->inner = expression(0);
        setState(21);
        match(LuxLangParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(33);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(31);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplyOrDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(25);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(26);
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
          setState(27);
          antlrcpp::downCast<MultiplyOrDivideContext *>(_localctx)->right = expression(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddOrSubtractContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(28);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(29);
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
          setState(30);
          antlrcpp::downCast<AddOrSubtractContext *>(_localctx)->right = expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(35);
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
  enterRule(_localctx, 4, LuxLangParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LuxLangParser::InitializationContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(36);
      antlrcpp::downCast<InitializationContext *>(_localctx)->dec_type = match(LuxLangParser::TYPE);
      setState(37);
      antlrcpp::downCast<InitializationContext *>(_localctx)->id = match(LuxLangParser::IDENTIFIER);
      setState(38);
      match(LuxLangParser::T__2);
      setState(39);
      antlrcpp::downCast<InitializationContext *>(_localctx)->value = expression(0);
      setState(40);
      match(LuxLangParser::T__3);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LuxLangParser::DeclarationContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(42);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->dec_type = match(LuxLangParser::TYPE);
      setState(43);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->id = match(LuxLangParser::IDENTIFIER);
      setState(44);
      match(LuxLangParser::T__3);
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
  enterRule(_localctx, 6, LuxLangParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    assignment();
   
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
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

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
  "start", "expression", "assignment", "statement"
};

std::vector<std::string> LuxLangParser::_literalNames = {
  "", "'('", "')'", "'='", "';'", "'*'", "'/'", "'+'", "'-'", "'int'", "'byte'", 
  "'long'", "'double'", "'string'"
};

std::vector<std::string> LuxLangParser::_symbolicNames = {
  "", "", "", "", "", "MUL", "DIV", "ADD", "SUB", "INT", "BYTE", "LONG", 
  "DOUBLE", "STRING", "IDENTIFIER", "TYPE", "INTEGER_CONST", "FLOATING_CONST", 
  "WHITESPACE"
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
       0x3, 0x14, 0x34, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 
       0xd, 0x2, 0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
       0x3, 0x1a, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x7, 0x3, 0x22, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x25, 
       0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x30, 0xa, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x2, 0x3, 0x4, 0x6, 0x2, 0x4, 0x6, 0x8, 
       0x2, 0x4, 0x3, 0x2, 0x7, 0x8, 0x3, 0x2, 0x9, 0xa, 0x2, 0x37, 0x2, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x31, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 
       0x8, 0x5, 0x2, 0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x8, 0x3, 0x1, 0x2, 
       0x10, 0x1a, 0x7, 0x12, 0x2, 0x2, 0x11, 0x1a, 0x7, 0x13, 0x2, 0x2, 
       0x12, 0x1a, 0x7, 0x10, 0x2, 0x2, 0x13, 0x14, 0x7, 0xa, 0x2, 0x2, 
       0x14, 0x1a, 0x5, 0x4, 0x3, 0x6, 0x15, 0x16, 0x7, 0x3, 0x2, 0x2, 0x16, 
       0x17, 0x5, 0x4, 0x3, 0x2, 0x17, 0x18, 0x7, 0x4, 0x2, 0x2, 0x18, 0x1a, 
       0x3, 0x2, 0x2, 0x2, 0x19, 0xf, 0x3, 0x2, 0x2, 0x2, 0x19, 0x11, 0x3, 
       0x2, 0x2, 0x2, 0x19, 0x12, 0x3, 0x2, 0x2, 0x2, 0x19, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x19, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x23, 0x3, 0x2, 0x2, 
       0x2, 0x1b, 0x1c, 0xc, 0x4, 0x2, 0x2, 0x1c, 0x1d, 0x9, 0x2, 0x2, 0x2, 
       0x1d, 0x22, 0x5, 0x4, 0x3, 0x5, 0x1e, 0x1f, 0xc, 0x3, 0x2, 0x2, 0x1f, 
       0x20, 0x9, 0x3, 0x2, 0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x4, 0x21, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x21, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x25, 0x3, 
       0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 
       0x2, 0x2, 0x24, 0x5, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0x27, 0x7, 0x11, 0x2, 0x2, 0x27, 0x28, 0x7, 0x10, 0x2, 
       0x2, 0x28, 0x29, 0x7, 0x5, 0x2, 0x2, 0x29, 0x2a, 0x5, 0x4, 0x3, 0x2, 
       0x2a, 0x2b, 0x7, 0x6, 0x2, 0x2, 0x2b, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x2d, 0x7, 0x11, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x10, 0x2, 0x2, 0x2e, 
       0x30, 0x7, 0x6, 0x2, 0x2, 0x2f, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2c, 
       0x3, 0x2, 0x2, 0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x5, 
       0x6, 0x4, 0x2, 0x32, 0x9, 0x3, 0x2, 0x2, 0x2, 0x7, 0xd, 0x19, 0x21, 
       0x23, 0x2f, 
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
