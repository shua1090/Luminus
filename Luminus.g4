grammar Luminus;

MUL: '*';
DIV: '/';
MOD: '%';
ADD: '+';
SUB: '-';

LT: '<';
GT: '>';
LTE: '<=';
GTE: '>=';
EQ: '==';
NOT_EQ: '!=';

LOG_AND: 'and';
LOG_OR: 'or';
LOG_NOT: 'not';

TRUE_CONST: 'true';
FALSE_CONST: 'false';

VOID: 'void';

STRING_CONST : '"' CHAR_NO_NL+ '"' ;
fragment CHAR_NO_NL : 'a'..'z'|[0-9]|'A'..'Z'|'%'|' '|'\\'|'"';

INTEGER_LITERAL: DIGIT;
FLOAT_LITERAL: DIGIT '.' DIGIT | '.' DIGIT;

DIGIT: [0-9]+;

FUNCTION: 'func';
ARROW: '->';
WHILE: 'while';
FOR: 'for';
RETURN: 'return';
IF: 'if';
ELIF: 'elif';
ELSE: 'else';

NEW: 'new';
DELETE: 'delete';

TYPE: (INT | BYTE | LONG | DOUBLE | STRING | BOOL);
INT: 'int';
BYTE: 'byte';
LONG: 'long';
DOUBLE: 'double';
STRING: 'string';
BOOL: 'bool';
IDENTIFIER: [A-Za-z]+;

init_stmt: type=(TYPE|IDENTIFIER) id=IDENTIFIER '=' rhs=expression ';' ;
reinit_stmt: id=expression '=' rhs=expression ';';
decl_stmt: type=(TYPE|IDENTIFIER) id=IDENTIFIER ';';

var_set_stmts: (init_stmt|reinit_stmt|decl_stmt);

func_call: funcid=IDENTIFIER '(' (args+=expression (',' args+=expression)*)? ','? ')'
    ;

expression:

     BOOL_LITERAL=(TRUE_CONST|FALSE_CONST) #BooleanConstant
    | INTEGER_LITERAL #IntegerConstant
    | FLOAT_LITERAL #FloatConstant
    | STRING_CONST #StringConstant

/* Arithmetic Operators */

    | '(' inner=expression ')' #ParanthesesExpression

    | front=expression '.' id=IDENTIFIER #MemberAccessExpression
    | front=expression '.' method=func_call #MethodAccessExpression
    | call=func_call #Func_Call_Expression

    | exp=expression ADD ADD #IncrementOperator
    | exp=expression SUB SUB #DecrementOperator

    | SUB exp=expression #UnaryNegateExpression

    | left=expression op=MUL right=expression #MultiplyExpression
    | left=expression op=DIV right=expression #DivideExpression
    | left=expression op=MOD right=expression #ModulusExpression
    | left=expression op=ADD right=expression #AdditionExpression
    | left=expression op=SUB right=expression #SubtractionExpression

    | id=IDENTIFIER #IdentifierExpression

    | '(' cast_type=TYPE ')' exp=expression #ExplicitCastExpression

    | left=expression op=(LT | GT | LTE | GTE | EQ | NOT_EQ ) right=expression #ComparisonExpression
    | left=expression log_op=(LOG_AND|LOG_OR) right=expression #LogicalExpression
    | LOG_NOT exp=expression #NotExpression
;


argument: dec_type=(TYPE|IDENTIFIER) id=IDENTIFIER ;

FUNC_OOP_MODIFIERS: ('static' | 'class');
FUNC_VISIBILITY_MODIFIERS: ('public' | 'private');

function_definition: 'func' func_name=IDENTIFIER '(' (args+=argument (',' args+=argument)*)? ')' '->' return_type=(TYPE|'void') vals=block;

class_definition: 'class' class_name=IDENTIFIER '{' (function_definition|decl_stmt)+ '}' ;


statement: (expression ';'|var_set_stmts) ;
block: '{' statement* '}' #BlockExpression ;

start: (function_definition|class_definition)+;


WHITESPACE: [ \r\t\n]+ -> skip;