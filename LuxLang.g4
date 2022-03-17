grammar LuxLang;

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

TYPE: INT | BYTE | LONG | DOUBLE | STRING;
fragment INT: 'int';
fragment BYTE: 'byte';
fragment LONG: 'long';
fragment DOUBLE: 'double';
fragment STRING: 'string';

IDENTIFIER: [A-Za-z]+;


INTEGER_CONST: DIGIT | OCTAL_DIG | HEX_DIG;
FLOATING_CONST: DIGIT '.' DIGIT | '.' DIGIT;

DIGIT: [0-9]+;
OCTAL_DIG: '0o'[0-9]+;
HEX_DIG: '0x'[0-9]+;

start: statement+;

expression:
    BOOL_CONST=(TRUE_CONST | FALSE_CONST) #Bool_Const
    | INTEGER_CONST #IntegerExpression
    | FLOATING_CONST #FloatExpression
    | IDENTIFIER #IdentifierExpression
    | '-' inner=expression #Unary_Negate
    | '(' inner=expression ')' #Parantheses
    | left=expression op=(MUL|DIV) right=expression #MultiplyOrDivide
    | left=expression op=(ADD|SUB) right=expression #AddOrSubtract
    ;
bool_expression:
    left=expression op=(LESS_THAN|GREATER_THAN|LESS_THAN_EQUAL|GREATER_THAN_EQUAL|EQUAL_TO) right=expression #BoolExpression
    ;


conditional_if: 'if' '(' bool_expression ')' '{' statement+ '}';
conditional_else: 'else' '{' statement+ '}';

assignment: dec_type=TYPE id=IDENTIFIER '=' value=expression ';' #Initialization
    | dec_type=TYPE id=IDENTIFIER '=' value=expression ';' #BoolInitialization
    | dec_type=TYPE id=IDENTIFIER ';' #Declaration
    ;

statement: assignment | conditional_if | conditional_else;

WHITESPACE: [ \r\n\t]+ -> skip;
