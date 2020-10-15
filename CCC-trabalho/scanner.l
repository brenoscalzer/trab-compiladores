
/* Flex output */
%option outfile="scanner.c"
/* Unused functions */
%option noyywrap
%option nounput
%option noinput
/* Auto increment variable yylineno every time a '\n' is read. */
%option yylineno
%x C_COMMENT

%{

void process_token(const char* tk) {
    printf("%d: %s -> %s\n", yylineno, yytext, tk);
}

%}

int_val     [0-9]+
float_val   [0-9]+"."[0-9]+f
double_val  [0-9]+"."[0-9]+
str_val     \"[^"]*\"
include_val  <.*>

id          [a-zA-Z]+

ignore      [ \t\n]+
comments    "//".*

%%

{ignore}    { }
{comments}  { }

"/*"            { BEGIN(C_COMMENT); }
<C_COMMENT>"*/" { BEGIN(INITIAL); }
<C_COMMENT>\n   { }
<C_COMMENT>.    { }

"#define"       { process_token("#DEFINE"); }
"#elif"         { process_token("#ELIF"); }
"#else"         { process_token("#ELSE"); }
"#endif"        { process_token("#ENDIF"); }
"#if"           { process_token("#IF"); }
"#ifdef"        { process_token("#IFDEF"); }
"#ifndef"       { process_token("#IFNDEF"); }
"#include"      { process_token("#INCLUDE"); }
"#undef"        { process_token("#UNDEF"); }

"auto"          { process_token("AUTO"); }
"break"         { process_token("BREAK"); }
"case"          { process_token("CASE"); }
"char"          { process_token("CHAR"); }
"const"         { process_token("CONST"); }
"continue"      { process_token("CONTINUE"); }
"default"       { process_token("DEFAULT"); }
"do"            { process_token("DO"); }
"double"        { process_token("DOUBLE"); }
"else"          { process_token("ELSE"); }
"entry"         { process_token("ENTRY"); }
"enum"          { process_token("ENUM"); }
"extern"        { process_token("EXTERN"); }
"float"         { process_token("FLOAT"); }
"for"           { process_token("FOR"); }
"goto"          { process_token("GOTO"); }
"if"            { process_token("IF"); }
"int"           { process_token("INT"); }
"long"          { process_token("LONG"); }
"register"      { process_token("REGISTER"); }
"return"        { process_token("RETURN"); }
"short"         { process_token("SHORT"); }
"signed"        { process_token("SIGNED"); }
"sizeof"        { process_token("SIZEOF"); }
"static"        { process_token("STATIC"); }
"struct"        { process_token("STRUCT"); }
"switch"        { process_token("SWITCH"); }
"typedef"       { process_token("TYPEDEF"); }
"union"         { process_token("UNION"); }
"unsigned"      { process_token("UNSIGNED"); }
"void"          { process_token("VOID"); }
"volatile"      { process_token("VOLATILE"); }
"while"         { process_token("WHILE"); }


"="             { process_token("ASSIGN"); }
"&"             { process_token("AMPERSAND"); }
","             { process_token("COMMA"); }
"."             { process_token("DOT"); }
"!"             { process_token("EXCL"); }
"~"             { process_token("TILDE"); }
"-"             { process_token("HYPHEN"); }
";"             { process_token("SEMI"); }
":"             { process_token("COLON"); }
"%"             { process_token("MODULO"); }
"^"             { process_token("CIRCUMFLEX"); }
"|"             { process_token("BAR"); }
"?"             { process_token("QUEST"); }

"{"             { process_token("LBRA"); }
"}"             { process_token("RBRA"); }
"("             { process_token("LPAR"); }
")"             { process_token("RPAR"); }
"["             { process_token("LBRACK"); }
"]"             { process_token("RBRACK"); }

"+"             { process_token("PLUS"); }
"-"             { process_token("MINUS"); }
"*"             { process_token("TIMES"); }
"/"             { process_token("OVER"); }

"=="            { process_token("EQ"); }
"!="            { process_token("NEQ"); }
"<"             { process_token("LT"); }
">"             { process_token("GT"); }
"<="            { process_token("LE"); }
">="            { process_token("GE"); }

"..."           { process_token("ELLIPSIS"); }
">>="           { process_token("RIGHT_ASSIGN"); }
"<<="           { process_token("LEFT_ASSIGN"); }
"+="            { process_token("ADD_ASSIGN"); }
"-="            { process_token("SUB_ASSIGN"); }
"*="            { process_token("MUL_ASSIGN"); }
"/="            { process_token("DIV_ASSIGN"); }
"%="            { process_token("MOD_ASSIGN"); }
"&="            { process_token("AND_ASSIGN"); }
"^="            { process_token("XOR_ASSIGN"); }
"|="            { process_token("OR_ASSIGN"); }
">>"            { process_token("RIGHT_OP"); }
"<<"            { process_token("LEFT_OP"); }
"++"            { process_token("INC"); }
"--"            { process_token("DEC"); }
"->"            { process_token("PTR"); }
"&&"            { process_token("AND"); }
"||"            { process_token("OR"); }


{include_val}    { process_token("INCLUDE_VAL"); }
{int_val}       { process_token("INT_VAL"); }
{float_val}      { process_token("FLOAT_VAL"); }
{double_val}      { process_token("DOUBLE_VAL"); }
{str_val}       { process_token("STR_VAL"); }


{id}            { process_token("ID"); }

.               { printf("LEXICAL ERROR (%d): Unknown symbol %s\n", yylineno, yytext);
                exit(EXIT_FAILURE); }

%%
