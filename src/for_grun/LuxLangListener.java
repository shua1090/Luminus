// Generated from LuxLang.g4 by ANTLR 4.9.3
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link LuxLangParser}.
 */
public interface LuxLangListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link LuxLangParser#start}.
	 * @param ctx the parse tree
	 */
	void enterStart(LuxLangParser.StartContext ctx);
	/**
	 * Exit a parse tree produced by {@link LuxLangParser#start}.
	 * @param ctx the parse tree
	 */
	void exitStart(LuxLangParser.StartContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Bool_Const}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBool_Const(LuxLangParser.Bool_ConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Bool_Const}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBool_Const(LuxLangParser.Bool_ConstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Parantheses}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterParantheses(LuxLangParser.ParanthesesContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Parantheses}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitParantheses(LuxLangParser.ParanthesesContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MultiplyOrDivide}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMultiplyOrDivide(LuxLangParser.MultiplyOrDivideContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MultiplyOrDivide}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMultiplyOrDivide(LuxLangParser.MultiplyOrDivideContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Unary_Negate}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterUnary_Negate(LuxLangParser.Unary_NegateContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Unary_Negate}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitUnary_Negate(LuxLangParser.Unary_NegateContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AddOrSubtract}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAddOrSubtract(LuxLangParser.AddOrSubtractContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AddOrSubtract}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAddOrSubtract(LuxLangParser.AddOrSubtractContext ctx);
	/**
	 * Enter a parse tree produced by the {@code FloatExpression}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterFloatExpression(LuxLangParser.FloatExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code FloatExpression}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitFloatExpression(LuxLangParser.FloatExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IntegerExpression}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterIntegerExpression(LuxLangParser.IntegerExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IntegerExpression}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitIntegerExpression(LuxLangParser.IntegerExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IdentifierExpression}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierExpression(LuxLangParser.IdentifierExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IdentifierExpression}
	 * labeled alternative in {@link LuxLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierExpression(LuxLangParser.IdentifierExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code BoolExpression}
	 * labeled alternative in {@link LuxLangParser#bool_expression}.
	 * @param ctx the parse tree
	 */
	void enterBoolExpression(LuxLangParser.BoolExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code BoolExpression}
	 * labeled alternative in {@link LuxLangParser#bool_expression}.
	 * @param ctx the parse tree
	 */
	void exitBoolExpression(LuxLangParser.BoolExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link LuxLangParser#conditional_if}.
	 * @param ctx the parse tree
	 */
	void enterConditional_if(LuxLangParser.Conditional_ifContext ctx);
	/**
	 * Exit a parse tree produced by {@link LuxLangParser#conditional_if}.
	 * @param ctx the parse tree
	 */
	void exitConditional_if(LuxLangParser.Conditional_ifContext ctx);
	/**
	 * Enter a parse tree produced by {@link LuxLangParser#conditional_else}.
	 * @param ctx the parse tree
	 */
	void enterConditional_else(LuxLangParser.Conditional_elseContext ctx);
	/**
	 * Exit a parse tree produced by {@link LuxLangParser#conditional_else}.
	 * @param ctx the parse tree
	 */
	void exitConditional_else(LuxLangParser.Conditional_elseContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Initialization}
	 * labeled alternative in {@link LuxLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterInitialization(LuxLangParser.InitializationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Initialization}
	 * labeled alternative in {@link LuxLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitInitialization(LuxLangParser.InitializationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code BoolInitialization}
	 * labeled alternative in {@link LuxLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterBoolInitialization(LuxLangParser.BoolInitializationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code BoolInitialization}
	 * labeled alternative in {@link LuxLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitBoolInitialization(LuxLangParser.BoolInitializationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Declaration}
	 * labeled alternative in {@link LuxLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(LuxLangParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Declaration}
	 * labeled alternative in {@link LuxLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(LuxLangParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link LuxLangParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(LuxLangParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link LuxLangParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(LuxLangParser.StatementContext ctx);
}