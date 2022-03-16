grammar LuxLang

MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';

INT: 'int';
BYTE: 'byte';
LONG: 'long';
DOUBLE: 'double';
STRING: 'string';

IDENTIFIER: [A-Za-z]+;

TYPE: INT | BYTE | LONG | DOUBLE | STRING;

INTEGER_CONST: DIGIT | OCTAL_DIG | HEX_DIG;
FLOATING_CONST: DIGIT '.' DIGIT;

fragment DIGIT: [0-9]+;
fragment OCTAL_DIG: '0o'[0-9]+;
fragment HEX_DIG: '0x'[0-9]+;

start: statement+;

expression: INTEGER_CONST #IntegerExpression
    | FLOATING_CONST #FloatExpression
    | IDENTIFIER #IdentifierExpression
    | '-' inner=expression #Unary_Negate
    | '(' inner=expression ')' #Parantheses
    | left=expression op=(MUL|DIV) right=expression #MultiplyOrDivide
    | left=expression op=(ADD|SUB) right=expression #AddOrSubtract
    ;

assignment: dec_type=TYPE id=IDENTIFIER '=' value=expression ';'#Initialization
    | dec_type=TYPE id=IDENTIFIER ';' #Declaration
    ;

statement: assignment;

WHITESPACE: [ \r\n\t]+ -> skip;
