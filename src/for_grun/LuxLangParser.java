// Generated from LuxLang.g4 by ANTLR 4.9.3
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class LuxLangParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.3", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, MUL=9, 
		DIV=10, ADD=11, SUB=12, LESS_THAN=13, GREATER_THAN=14, LESS_THAN_EQUAL=15, 
		GREATER_THAN_EQUAL=16, EQUAL_TO=17, TRUE_CONST=18, FALSE_CONST=19, TYPE=20, 
		IDENTIFIER=21, INTEGER_CONST=22, FLOATING_CONST=23, DIGIT=24, OCTAL_DIG=25, 
		HEX_DIG=26, WHITESPACE=27;
	public static final int
		RULE_start = 0, RULE_expression = 1, RULE_bool_expression = 2, RULE_conditional_if = 3, 
		RULE_conditional_else = 4, RULE_assignment = 5, RULE_statement = 6;
	private static String[] makeRuleNames() {
		return new String[] {
			"start", "expression", "bool_expression", "conditional_if", "conditional_else", 
			"assignment", "statement"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "'if'", "'{'", "'}'", "'else'", "'='", "';'", "'*'", 
			"'/'", "'+'", "'-'", "'<'", "'>'", "'<='", "'>='", "'=='", "'true'", 
			"'false'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "MUL", "DIV", "ADD", 
			"SUB", "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", 
			"EQUAL_TO", "TRUE_CONST", "FALSE_CONST", "TYPE", "IDENTIFIER", "INTEGER_CONST", 
			"FLOATING_CONST", "DIGIT", "OCTAL_DIG", "HEX_DIG", "WHITESPACE"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "LuxLang.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public LuxLangParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class StartContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_start; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterStart(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitStart(this);
		}
	}

	public final StartContext start() throws RecognitionException {
		StartContext _localctx = new StartContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_start);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(15); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(14);
				statement();
				}
				}
				setState(17); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << T__5) | (1L << TYPE))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	 
		public ExpressionContext() { }
		public void copyFrom(ExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Bool_ConstContext extends ExpressionContext {
		public Token BOOL_CONST;
		public TerminalNode TRUE_CONST() { return getToken(LuxLangParser.TRUE_CONST, 0); }
		public TerminalNode FALSE_CONST() { return getToken(LuxLangParser.FALSE_CONST, 0); }
		public Bool_ConstContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterBool_Const(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitBool_Const(this);
		}
	}
	public static class ParanthesesContext extends ExpressionContext {
		public ExpressionContext inner;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ParanthesesContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterParantheses(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitParantheses(this);
		}
	}
	public static class MultiplyOrDivideContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode MUL() { return getToken(LuxLangParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(LuxLangParser.DIV, 0); }
		public MultiplyOrDivideContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterMultiplyOrDivide(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitMultiplyOrDivide(this);
		}
	}
	public static class Unary_NegateContext extends ExpressionContext {
		public ExpressionContext inner;
		public TerminalNode SUB() { return getToken(LuxLangParser.SUB, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Unary_NegateContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterUnary_Negate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitUnary_Negate(this);
		}
	}
	public static class AddOrSubtractContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode ADD() { return getToken(LuxLangParser.ADD, 0); }
		public TerminalNode SUB() { return getToken(LuxLangParser.SUB, 0); }
		public AddOrSubtractContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterAddOrSubtract(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitAddOrSubtract(this);
		}
	}
	public static class FloatExpressionContext extends ExpressionContext {
		public TerminalNode FLOATING_CONST() { return getToken(LuxLangParser.FLOATING_CONST, 0); }
		public FloatExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterFloatExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitFloatExpression(this);
		}
	}
	public static class IntegerExpressionContext extends ExpressionContext {
		public TerminalNode INTEGER_CONST() { return getToken(LuxLangParser.INTEGER_CONST, 0); }
		public IntegerExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterIntegerExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitIntegerExpression(this);
		}
	}
	public static class IdentifierExpressionContext extends ExpressionContext {
		public TerminalNode IDENTIFIER() { return getToken(LuxLangParser.IDENTIFIER, 0); }
		public IdentifierExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterIdentifierExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitIdentifierExpression(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 2;
		enterRecursionRule(_localctx, 2, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(30);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TRUE_CONST:
			case FALSE_CONST:
				{
				_localctx = new Bool_ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(20);
				((Bool_ConstContext)_localctx).BOOL_CONST = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==TRUE_CONST || _la==FALSE_CONST) ) {
					((Bool_ConstContext)_localctx).BOOL_CONST = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case INTEGER_CONST:
				{
				_localctx = new IntegerExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(21);
				match(INTEGER_CONST);
				}
				break;
			case FLOATING_CONST:
				{
				_localctx = new FloatExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(22);
				match(FLOATING_CONST);
				}
				break;
			case IDENTIFIER:
				{
				_localctx = new IdentifierExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(23);
				match(IDENTIFIER);
				}
				break;
			case SUB:
				{
				_localctx = new Unary_NegateContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(24);
				match(SUB);
				setState(25);
				((Unary_NegateContext)_localctx).inner = expression(4);
				}
				break;
			case T__0:
				{
				_localctx = new ParanthesesContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(26);
				match(T__0);
				setState(27);
				((ParanthesesContext)_localctx).inner = expression(0);
				setState(28);
				match(T__1);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(40);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(38);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplyOrDivideContext(new ExpressionContext(_parentctx, _parentState));
						((MultiplyOrDivideContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(32);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(33);
						((MultiplyOrDivideContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==MUL || _la==DIV) ) {
							((MultiplyOrDivideContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(34);
						((MultiplyOrDivideContext)_localctx).right = expression(3);
						}
						break;
					case 2:
						{
						_localctx = new AddOrSubtractContext(new ExpressionContext(_parentctx, _parentState));
						((AddOrSubtractContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(35);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(36);
						((AddOrSubtractContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==ADD || _la==SUB) ) {
							((AddOrSubtractContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(37);
						((AddOrSubtractContext)_localctx).right = expression(2);
						}
						break;
					}
					} 
				}
				setState(42);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Bool_expressionContext extends ParserRuleContext {
		public Bool_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bool_expression; }
	 
		public Bool_expressionContext() { }
		public void copyFrom(Bool_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class BoolExpressionContext extends Bool_expressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode LESS_THAN() { return getToken(LuxLangParser.LESS_THAN, 0); }
		public TerminalNode GREATER_THAN() { return getToken(LuxLangParser.GREATER_THAN, 0); }
		public TerminalNode LESS_THAN_EQUAL() { return getToken(LuxLangParser.LESS_THAN_EQUAL, 0); }
		public TerminalNode GREATER_THAN_EQUAL() { return getToken(LuxLangParser.GREATER_THAN_EQUAL, 0); }
		public TerminalNode EQUAL_TO() { return getToken(LuxLangParser.EQUAL_TO, 0); }
		public BoolExpressionContext(Bool_expressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterBoolExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitBoolExpression(this);
		}
	}

	public final Bool_expressionContext bool_expression() throws RecognitionException {
		Bool_expressionContext _localctx = new Bool_expressionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_bool_expression);
		int _la;
		try {
			_localctx = new BoolExpressionContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(43);
			((BoolExpressionContext)_localctx).left = expression(0);
			setState(44);
			((BoolExpressionContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LESS_THAN) | (1L << GREATER_THAN) | (1L << LESS_THAN_EQUAL) | (1L << GREATER_THAN_EQUAL) | (1L << EQUAL_TO))) != 0)) ) {
				((BoolExpressionContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(45);
			((BoolExpressionContext)_localctx).right = expression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Conditional_ifContext extends ParserRuleContext {
		public Bool_expressionContext bool_expression() {
			return getRuleContext(Bool_expressionContext.class,0);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public Conditional_ifContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditional_if; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterConditional_if(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitConditional_if(this);
		}
	}

	public final Conditional_ifContext conditional_if() throws RecognitionException {
		Conditional_ifContext _localctx = new Conditional_ifContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_conditional_if);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(47);
			match(T__2);
			setState(48);
			match(T__0);
			setState(49);
			bool_expression();
			setState(50);
			match(T__1);
			setState(51);
			match(T__3);
			setState(53); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(52);
				statement();
				}
				}
				setState(55); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << T__5) | (1L << TYPE))) != 0) );
			setState(57);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Conditional_elseContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public Conditional_elseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditional_else; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterConditional_else(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitConditional_else(this);
		}
	}

	public final Conditional_elseContext conditional_else() throws RecognitionException {
		Conditional_elseContext _localctx = new Conditional_elseContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_conditional_else);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(59);
			match(T__5);
			setState(60);
			match(T__3);
			setState(62); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(61);
				statement();
				}
				}
				setState(64); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << T__5) | (1L << TYPE))) != 0) );
			setState(66);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentContext extends ParserRuleContext {
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
	 
		public AssignmentContext() { }
		public void copyFrom(AssignmentContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class InitializationContext extends AssignmentContext {
		public Token dec_type;
		public Token id;
		public ExpressionContext value;
		public TerminalNode TYPE() { return getToken(LuxLangParser.TYPE, 0); }
		public TerminalNode IDENTIFIER() { return getToken(LuxLangParser.IDENTIFIER, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public InitializationContext(AssignmentContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterInitialization(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitInitialization(this);
		}
	}
	public static class BoolInitializationContext extends AssignmentContext {
		public Token dec_type;
		public Token id;
		public ExpressionContext value;
		public TerminalNode TYPE() { return getToken(LuxLangParser.TYPE, 0); }
		public TerminalNode IDENTIFIER() { return getToken(LuxLangParser.IDENTIFIER, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BoolInitializationContext(AssignmentContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterBoolInitialization(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitBoolInitialization(this);
		}
	}
	public static class DeclarationContext extends AssignmentContext {
		public Token dec_type;
		public Token id;
		public TerminalNode TYPE() { return getToken(LuxLangParser.TYPE, 0); }
		public TerminalNode IDENTIFIER() { return getToken(LuxLangParser.IDENTIFIER, 0); }
		public DeclarationContext(AssignmentContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitDeclaration(this);
		}
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_assignment);
		try {
			setState(83);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				_localctx = new InitializationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(68);
				((InitializationContext)_localctx).dec_type = match(TYPE);
				setState(69);
				((InitializationContext)_localctx).id = match(IDENTIFIER);
				setState(70);
				match(T__6);
				setState(71);
				((InitializationContext)_localctx).value = expression(0);
				setState(72);
				match(T__7);
				}
				break;
			case 2:
				_localctx = new BoolInitializationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(74);
				((BoolInitializationContext)_localctx).dec_type = match(TYPE);
				setState(75);
				((BoolInitializationContext)_localctx).id = match(IDENTIFIER);
				setState(76);
				match(T__6);
				setState(77);
				((BoolInitializationContext)_localctx).value = expression(0);
				setState(78);
				match(T__7);
				}
				break;
			case 3:
				_localctx = new DeclarationContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(80);
				((DeclarationContext)_localctx).dec_type = match(TYPE);
				setState(81);
				((DeclarationContext)_localctx).id = match(IDENTIFIER);
				setState(82);
				match(T__7);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public AssignmentContext assignment() {
			return getRuleContext(AssignmentContext.class,0);
		}
		public Conditional_ifContext conditional_if() {
			return getRuleContext(Conditional_ifContext.class,0);
		}
		public Conditional_elseContext conditional_else() {
			return getRuleContext(Conditional_elseContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).enterStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof LuxLangListener ) ((LuxLangListener)listener).exitStatement(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_statement);
		try {
			setState(88);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TYPE:
				enterOuterAlt(_localctx, 1);
				{
				setState(85);
				assignment();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(86);
				conditional_if();
				}
				break;
			case T__5:
				enterOuterAlt(_localctx, 3);
				{
				setState(87);
				conditional_else();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 1:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\35]\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\3\2\6\2\22\n\2\r\2\16\2\23"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3!\n\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\7\3)\n\3\f\3\16\3,\13\3\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\6\58\n\5\r\5\16\59\3\5\3\5\3\6\3\6\3\6\6\6A\n\6\r\6\16\6B\3\6\3\6\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7V\n\7\3"+
		"\b\3\b\3\b\5\b[\n\b\3\b\2\3\4\t\2\4\6\b\n\f\16\2\6\3\2\24\25\3\2\13\f"+
		"\3\2\r\16\3\2\17\23\2c\2\21\3\2\2\2\4 \3\2\2\2\6-\3\2\2\2\b\61\3\2\2\2"+
		"\n=\3\2\2\2\fU\3\2\2\2\16Z\3\2\2\2\20\22\5\16\b\2\21\20\3\2\2\2\22\23"+
		"\3\2\2\2\23\21\3\2\2\2\23\24\3\2\2\2\24\3\3\2\2\2\25\26\b\3\1\2\26!\t"+
		"\2\2\2\27!\7\30\2\2\30!\7\31\2\2\31!\7\27\2\2\32\33\7\16\2\2\33!\5\4\3"+
		"\6\34\35\7\3\2\2\35\36\5\4\3\2\36\37\7\4\2\2\37!\3\2\2\2 \25\3\2\2\2 "+
		"\27\3\2\2\2 \30\3\2\2\2 \31\3\2\2\2 \32\3\2\2\2 \34\3\2\2\2!*\3\2\2\2"+
		"\"#\f\4\2\2#$\t\3\2\2$)\5\4\3\5%&\f\3\2\2&\'\t\4\2\2\')\5\4\3\4(\"\3\2"+
		"\2\2(%\3\2\2\2),\3\2\2\2*(\3\2\2\2*+\3\2\2\2+\5\3\2\2\2,*\3\2\2\2-.\5"+
		"\4\3\2./\t\5\2\2/\60\5\4\3\2\60\7\3\2\2\2\61\62\7\5\2\2\62\63\7\3\2\2"+
		"\63\64\5\6\4\2\64\65\7\4\2\2\65\67\7\6\2\2\668\5\16\b\2\67\66\3\2\2\2"+
		"89\3\2\2\29\67\3\2\2\29:\3\2\2\2:;\3\2\2\2;<\7\7\2\2<\t\3\2\2\2=>\7\b"+
		"\2\2>@\7\6\2\2?A\5\16\b\2@?\3\2\2\2AB\3\2\2\2B@\3\2\2\2BC\3\2\2\2CD\3"+
		"\2\2\2DE\7\7\2\2E\13\3\2\2\2FG\7\26\2\2GH\7\27\2\2HI\7\t\2\2IJ\5\4\3\2"+
		"JK\7\n\2\2KV\3\2\2\2LM\7\26\2\2MN\7\27\2\2NO\7\t\2\2OP\5\4\3\2PQ\7\n\2"+
		"\2QV\3\2\2\2RS\7\26\2\2ST\7\27\2\2TV\7\n\2\2UF\3\2\2\2UL\3\2\2\2UR\3\2"+
		"\2\2V\r\3\2\2\2W[\5\f\7\2X[\5\b\5\2Y[\5\n\6\2ZW\3\2\2\2ZX\3\2\2\2ZY\3"+
		"\2\2\2[\17\3\2\2\2\n\23 (*9BUZ";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}