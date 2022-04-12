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

TYPE: (INT | BYTE | LONG | DOUBLE | STRING | BOOL) (' '* ('*')+)?;
INT: 'int';
BYTE: 'byte';
LONG: 'long';
DOUBLE: 'double';
STRING: 'string';
BOOL: 'bool';
IDENTIFIER: [A-Za-z]+ (' '* ('*')+)?;


STRING_CONST : '"' CHAR_NO_NL+ '"' ;
fragment CHAR_NO_NL : 'a'..'z'|[0-9]|'A'..'Z'|'%'|' '|'\\'|'"';

INTEGER_CONST: DIGIT;
FLOATING_CONST: DIGIT '.' DIGIT | '.' DIGIT;

DIGIT: [0-9]+;

start: (function|struct_declaration)+;

argument: dec_type=(TYPE|IDENTIFIER) id=IDENTIFIER;
function: 'func' funcName=IDENTIFIER'(' (args+=argument (',' args+=argument)*)? ','? ')' '->' returnType=(TYPE|VOID) '{' statement+ '}' #FunctionDeclaration;

func_call: funcid=IDENTIFIER '(' (args+=expression (',' args+=expression)*)? ','? ')'  #FunctionCall
    ;

struct_declaration: 'struct' struct_name=IDENTIFIER '{' (struct_vals+=argument ';')+ '}';

assignment: dec_type=(TYPE|IDENTIFIER) id=IDENTIFIER ';' #Declaration
    | id=expression '=' value=expression ';' #Reinitialization
    | dec_type=(TYPE|IDENTIFIER) id=IDENTIFIER '=' value=expression ';' #Initialization
    ;

expression:
    BOOL_CONST=(TRUE_CONST | FALSE_CONST) #Bool_Const
    | STRING_CONST #StringConst
    | INTEGER_CONST #IntegerExpression
    | FLOATING_CONST #FloatExpression
    | id=IDENTIFIER #IdentifierExpression
    | '&'id=IDENTIFIER #DereferenceExpression
    | '*'*id=IDENTIFIER #ValueOfPointerExpression
    | call=func_call #Func_Call_Expression
    | 'cast' '<' cast_type=TYPE '>' '(' inner=expression ')' #CastToType
    | '(' inner=expression ')' #Parantheses
    | exp=expression '.' accessed_element=IDENTIFIER #AccessInternal
    | left=expression op=(MUL|DIV) right=expression #MultiplyOrDivide
    | left=expression MOD right=expression #Modulus
    | left=expression op=(ADD|SUB) right=expression #AddOrSubtract
    | '-' inner=expression #Unary_Negate
    | id=IDENTIFIER'['index=expression']' #Indexing
    | left=expression op=(LT | GT | LTE | GTE | EQ | NOT_EQ ) right=expression #CompExpression
    | left=expression log_op=(LOG_AND|LOG_OR) right=expression #LogicalExpression
    | LOG_NOT exp=expression #NotExpression
    ;

while_statement: 'while' condition=expression ops=block;

if_statement: 'if' value=expression execute_vals=block;
else_statement: 'else' ops=block;
elif_statement: 'elif' value=expression ops=block;
conditional_statement: if_teil=if_statement (else_if_container+=elif_statement)* (else_teil=else_statement)?;

return_statement: 'return' (value=expression)? ';' #ReturnStatement ;

block: '{' statement+ '}' #BlockExpression;
statement: assignment | return_statement | func_call ';' | block ';' | conditional_statement | while_statement;


WHITESPACE: [ \r\n\t]+ -> skip;