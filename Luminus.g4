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

VOID: 'void';

TYPE: INT | BYTE | LONG | DOUBLE | STRING | BOOL;
fragment INT: 'int';
fragment BYTE: 'byte';
fragment LONG: 'long';
fragment DOUBLE: 'double';
fragment STRING: 'string';
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
    | call=func_call #Func_Call_Expression
    | id=IDENTIFIER #IdentifierExpression
    | 'cast' '<' cast_type=TYPE '>' '(' inner=expression ')' #CastToType
    | '(' inner=expression ')' #Parantheses
    | left=expression op=(MUL|DIV) right=expression #MultiplyOrDivide
    | left=expression op=(ADD|SUB) right=expression #AddOrSubtract
    | '-' inner=expression #Unary_Negate
    | left=expression op=(LESS_THAN|GREATER_THAN|LESS_THAN_EQUAL|GREATER_THAN_EQUAL|EQUAL_TO) right=expression #BoolExpression
    ;

argument: dec_type=TYPE id=IDENTIFIER;
function: 'function' funcName=IDENTIFIER'(' (args+=argument (',' args+=argument)*)? ','? ')' 'returns' returnType=(TYPE|VOID) '{' statement+ '}' #FunctionDeclaration;

func_call: funcid=IDENTIFIER '(' (args+=expression (',' args+=expression)*)? ','? ')'  #FunctionCall
    ;

assignment: dec_type=TYPE id=IDENTIFIER ';' #Declaration
    | id=IDENTIFIER '=' value=expression ';' #Reinitialization
    | dec_type=TYPE id=IDENTIFIER '=' value=expression ';' #Initialization
    ;

return_statement: 'return' (value=expression)? ';' #ReturnStatement ;

statement: assignment | return_statement | func_call ';';

WHITESPACE: [ \r\n\t]+ -> skip;
