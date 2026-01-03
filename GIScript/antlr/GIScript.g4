grammar GIScript;

program: (event | function)*;

event: 'event' ID '(' parameterList? ')' block;

functionSign: ('void' | type) ID '(' parameterList? ')';
function: 'global'? functionSign block;

parameterList: parameter (',' parameter)*;
parameter: type ID;

builtinType: 'int' | 'float' | 'bool' | 'string' | 'entity' | 'vec' | 'guid' '<' con=('entity'|'prefab'|'cfg'|'faction') '>';
genericType: 'list' '<' t=builtinType '>' | 'map' '<' k=builtinType ',' v=builtinType '>';
singleType: builtinType | genericType;
tuple: '(' singleType (',' singleType)+ ')';
type: singleType | tuple;

block: '{' statement* '}';

statement: 
	varDef ';'
	| expr ';'
	| return ';'
	| if
	| switch
	| for
	| forEach
	| while
	| block
	| 'break' ';'
	| ';';

varInit: ID ('=' initializer)?;
varDef: (type | 'var') varInit (',' varInit)*;

return: 'return' expr?;

if: 'if' '(' expr ')' then=statement ('else' else=statement)?;
while: 'while' '(' expr ')' statement;
forInit: varDef | expr;
for: 'for' '(' forInit? ';' cond=expr? ';' it=expr? ')' statement;
forEach: 'for' '(' (type | 'var') ID ':' assignment ')' statement;

switch: 'switch' '(' expr ')' '{' case* default? '}';
case: 'case' (INT_DEF | STRING_DEF) ':' statement*;
default: 'default' ':' statement*;

initializer: initializerList | assignment;
initializerList: '{' (initializer (',' initializer)*)? '}';

primary : 
	INT_DEF									# IntegerLiteral
	| FLOAT_DEF								# FloatLiteral
	| STRING_DEF							# StringLiteral
	| ('null'|'true'|'false'|'this')		# KeywordLiteral
	| ID									# IdentifierLiteral
	| '(' expr ')'							# ParenExpression
	| singleType initializerList			# TypeInitializer;

argumentList: assignment (',' assignment)*;

memberAccess: ('[' expr ']' | '.' ID) ('as' singleType)?;
functionCall: '(' argumentList? ')' ('as' type)?;

increment: '++' | '--';

postfix:
	primary (
		memberAccess			
		| functionCall
		| increment
	)*;

cast: '(' singleType ')' cast | unary;

unary:
	increment* (
		postfix
		| op=('-' | '!' | '~') cast
    	| primary 
	);

multiplicative: multiplicative op=('*' | '/' | '%') cast | cast;
additive: additive op=('+' | '-') multiplicative | multiplicative ;
shift: shift op=('<<' | '>>' | '>>>') additive | additive;
relational: relational op=('<' | '>' | '<=' | '>=') shift | shift;
equality: equality op=('==' | '!=') relational | relational;
and: and '&' equality | equality;
xor: xor '^' and | and;
or: or '|' xor | xor; 
logicalAnd: logicalAnd '&&' or | or;
logicalOr: logicalOr '||' logicalAnd | logicalAnd;
conditional: logicalOr ('?' expr ':' conditional)? ;

assignment: 
	conditional
	| unary op=('=' | '+=' | '-=' | '*=' | '/=') initializer;

expr: assignment (',' assignment)*;

fragment DIGIT: [0-9];

INT_DEF: DIGIT+;
FLOAT_DEF:
	(DIGIT+ '.' DIGIT* | DIGIT+ '.' | '.' DIGIT+) ([eE] [+-]? DIGIT+)?
	| DIGIT+ [eE] [+-]? DIGIT+
	| '.' DIGIT+ [eE] [+-]? DIGIT+
	| 'INFINITY'
	| 'NaN';
STRING_DEF: '"' ('\\\\' | '\\"' | .)*? '"';
ID: [\p{L}_] [\p{L}\p{Nd}_]*;

WS: [ \t\r\n\u000B\u000C\u0085\u00A0\u1680\u2000-\u200F\u2028\u2029\u205F\u2060\u3000\p{Zs}\p{Cf}\p{Cc}]+ -> skip;
BLOCK_COMMENT: '/*' .*? '*/' -> skip;
LINE_COMMENT: '//' ~[\r\n]* -> skip;
