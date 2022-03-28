grammar Luminus;

MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';

LESS_THAN: '<';
GREATER_THAN: '>';
LESS_THAN_EQUAL: '<=';
GREATER_THAN_EQUAL: '>=';
EQUAL_TO: '==';

TRUE_CONST: 'true';
FALSE_CONST: 'false';

TYPE: INT | BYTE | LONG | DOUBLE | STRING | VOID | BOOL;
fragment INT: 'int';
fragment BYTE: 'byte';
fragment LONG: 'long';
fragment DOUBLE: 'double';
fragment STRING: 'string';
fragment VOID: 'void';
fragment BOOL: 'bool';

IDENTIFIER: [A-Za-z]+;

INTEGER_CONST: DIGIT | OCTAL_DIG | HEX_DIG;
FLOATING_CONST: DIGIT '.' DIGIT | '.' DIGIT;

DIGIT: [0-9]+;
OCTAL_DIG: '0o'[0-9]+;
HEX_DIG: '0x'[0-9]+;

start: function+;

expression:
    BOOL_CONST=(TRUE_CONST | FALSE_CONST) #Bool_Const
    | INTEGER_CONST #IntegerExpression
    | FLOATING_CONST #FloatExpression
    | IDENTIFIER #IdentifierExpression
    | '-' inner=expression #Unary_Negate
    | '(' inner=expression ')' #Parantheses
    | IDENTIFIER '(' (expression (',' expression)*)? ')' #FunctionCall
    | left=expression op=(MUL|DIV) right=expression #MultiplyOrDivide
    | left=expression op=(ADD|SUB) right=expression #AddOrSubtract
    | left=expression op=(LESS_THAN|GREATER_THAN|LESS_THAN_EQUAL|GREATER_THAN_EQUAL|EQUAL_TO) right=expression #BoolExpression
    ;

argument: TYPE IDENTIFIER;
function: 'function' funcName=IDENTIFIER'(' (args+=argument (',' args+=argument)*)? ','? ')' 'returns' returnType=TYPE '{' statement+ '}' #FunctionDeclaration;

conditional_if: 'if' '(' expression ')' '{' statement+ '}';
conditional_else: 'else' '{' statement+ '}';


assignment: dec_type=TYPE id=IDENTIFIER '=' value=expression ';' #Initialization
    | dec_type=TYPE id=IDENTIFIER ';' #Declaration
    ;

return_statement: 'return' value=expression ';' #ReturnStatement ;

statement: assignment | conditional_if | conditional_else | function | return_statement;

WHITESPACE: [ \r\n\t]+ -> skip;
