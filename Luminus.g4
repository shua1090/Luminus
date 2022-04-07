grammar Luminus;

MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';

LT: '<';
GT: '>';
LTE: '<=';
GTE: '>=';
EQ: '==';
NOT_EQ: '!=';

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


STRING_CONST: '"' [A-Za-z %]+ '"';
IDENTIFIER: [A-Za-z]+;
INTEGER_CONST: DIGIT | OCTAL_DIG | HEX_DIG;
FLOATING_CONST: DIGIT '.' DIGIT | '.' DIGIT;

DIGIT: [0-9]+;
OCTAL_DIG: '0o'[0-9]+;
HEX_DIG: '0x'[0-9]+;

start: function+;

expression:
    BOOL_CONST=(TRUE_CONST | FALSE_CONST) #Bool_Const
    | STRING_CONST #StringConst
    | INTEGER_CONST #IntegerExpression
    | FLOATING_CONST #FloatExpression
    | call=func_call #Func_Call_Expression
    | id=IDENTIFIER #IdentifierExpression
    | 'cast' '<' cast_type=TYPE '>' '(' inner=expression ')' #CastToType
    | '(' inner=expression ')' #Parantheses
    | left=expression op=(MUL|DIV) right=expression #MultiplyOrDivide
    | left=expression op=(ADD|SUB) right=expression #AddOrSubtract
    | '-' inner=expression #Unary_Negate
    | left=expression op=(LT | GT | LTE | GTE | EQ | NOT_EQ ) right=expression #CompExpression
    ;

argument: (ref='ref')? dec_type=TYPE id=IDENTIFIER;
function: 'function' funcName=IDENTIFIER'(' (args+=argument (',' args+=argument)*)? ','? ')' 'returns' returnType=(TYPE|VOID) '{' statement+ '}' #FunctionDeclaration;

func_call: funcid=IDENTIFIER '(' (args+=expression (',' args+=expression)*)? ','? ')'  #FunctionCall
    ;

assignment: dec_type=TYPE id=IDENTIFIER ';' #Declaration
    | id=IDENTIFIER '=' value=expression ';' #Reinitialization
    | dec_type=TYPE id=IDENTIFIER '=' value=expression ';' #Initialization
    ;


if_statement: 'if' '(' value=expression ')' execute_vals=block;
else_statement: 'else' ops=block;
elif_statement: 'elif' '(' value=expression ')' ops=block;
conditional_statement: if_teil=if_statement (else_if_container+=elif_statement)* (else_teil=else_statement)?;

return_statement: 'return' (value=expression)? ';' #ReturnStatement ;

block: '{' statement+ '}' #BlockExpression;
statement: assignment | return_statement | func_call ';' | block ';' | conditional_statement;

WHITESPACE: [ \r\n\t]+ -> skip;
