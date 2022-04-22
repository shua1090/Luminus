grammar TestGrammar;

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

INT: 'int';
BYTE: 'byte';
LONG: 'long';
DOUBLE: 'double';
STRING: 'string';
BOOL: 'bool';
TYPE: (INT | BYTE | LONG | DOUBLE | STRING | BOOL);
IDENTIFIER: [A-Za-z]+;

expression:
 BOOL_LITERAL=(TRUE_CONST|FALSE_CONST) #BooleanConstant
| INTEGER_LITERAL #IntegerConstant
| FLOAT_LITERAL #FloatConstant
| STRING_CONST #StringConstant

/* Assignment */


/* Arithmetic Operators */

| '(' inner=expression ')' #ParanthesesExpression


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



statement: expression ';'  | ;
block: '{' statement+ '}' #BlockExpression ;
