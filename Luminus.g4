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

TRUE_CONST: 'true';
FALSE_CONST: 'false';

VOID: 'void';

TYPE: (INT | BYTE | LONG | DOUBLE | STRING | BOOL) (' '* ('*')+)?;
INT: 'int';
BYTE: 'byte';
LONG: 'long';
DOUBLE: 'double';
STRING: 'string';
BOOL: 'bool';

STRING_CONST : '"' CHAR_NO_NL+ '"' ;
fragment CHAR_NO_NL : 'a'..'z'|[0-9]|'A'..'Z'|'%'|' '|'\\'|'"';

IDENTIFIER: [A-Za-z]+;
INTEGER_CONST: DIGIT;
FLOATING_CONST: DIGIT '.' DIGIT | '.' DIGIT;

DIGIT: [0-9]+;

start: function+;

argument: dec_type=TYPE id=IDENTIFIER;
function: funcName=IDENTIFIER'(' (args+=argument (',' args+=argument)*)? ','? ')' '->' returnType=(TYPE|VOID) '{' statement+ '}' #FunctionDeclaration;

func_call: funcid=IDENTIFIER '(' (args+=expression (',' args+=expression)*)? ','? ')'  #FunctionCall
    ;

assignment: dec_type=TYPE id=IDENTIFIER ';' #Declaration
    | id=expression '=' value=expression ';' #Reinitialization
    | dec_type=TYPE id=IDENTIFIER '=' value=expression ';' #Initialization
    ;

expression:
    BOOL_CONST=(TRUE_CONST | FALSE_CONST) #Bool_Const
    | STRING_CONST #StringConst
    | INTEGER_CONST #IntegerExpression
    | FLOATING_CONST #FloatExpression
    | id=IDENTIFIER #IdentifierExpression
    | '&'id=IDENTIFIER #DereferenceExpression
    | '*'*id=IDENTIFIER #ValueOfPointerExpression
    | 'cast' '<' cast_type=TYPE '>' '(' inner=expression ')' #CastToType
    | '(' inner=expression ')' #Parantheses
    | left=expression op=(MUL|DIV) right=expression #MultiplyOrDivide
    | left=expression MOD right=expression #Modulus
    | left=expression op=(ADD|SUB) right=expression #AddOrSubtract
    | '-' inner=expression #Unary_Negate
    | id=IDENTIFIER'['index=expression']' #Indexing
    | call=func_call #Func_Call_Expression
    | left=expression op=(LT | GT | LTE | GTE | EQ | NOT_EQ ) right=expression #CompExpression
    ;

while_statement: 'while' condition=expression ops=block;

if_statement: 'if' '(' value=expression ')' execute_vals=block;
else_statement: 'else' ops=block;
elif_statement: 'elif' '(' value=expression ')' ops=block;
conditional_statement: if_teil=if_statement (else_if_container+=elif_statement)* (else_teil=else_statement)?;

return_statement: 'return' (value=expression)? ';' #ReturnStatement ;

block: '{' statement+ '}' #BlockExpression;
statement: assignment | return_statement | func_call ';' | block ';' | conditional_statement | while_statement;

WHITESPACE: [ \r\n\t]+ -> skip;
