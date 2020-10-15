
%output "parser.c"          // File name of generated parser.
%defines "parser.h"         // Produces a 'parser.h'
%define parse.error verbose // Give proper messages when a syntax error is found.
%define parse.lac full      // Enable LAC to improve syntax error handling.

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

extern int yylineno;
extern char *yytext;
extern char *auxtext;

int yylex(void);
void yyerror(char const *s);
%}

%token ID INT_VAL FLOAT_VAL DOUBLE_VAL STR_VAL SIZEOF //ok
%left PTR INC DEC LEFT_OP RIGHT_OP LE GE EQ NEQ LT GT ASSIGN
%left AND OR MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%left SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%left XOR_ASSIGN OR_ASSIGN

%left TYPEDEF EXTERN STATIC AUTO REGISTER
%left CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%left STRUCT UNION ENUM ELLIPSIS

%left CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%left PLUS MINUS
%left TIMES OVER
%left SEMI LPAR RPAR LBRACE RBRACE

%left DOT MODULO LBRA RBRA LBRACK RBRACK AMPERSAND BAR CIRCUMFLEX COLON COMMA QUEST TILDE TYPE_NAME EXCL

// Start symbol for the grammar.
%start translation_unit

%%
primary_expression
  : ID
  | INT_VAL
  | FLOAT_VAL
  | DOUBLE_VAL
  | STR_VAL
  | LPAR expression RPAR
  | LPAR error RPAR
  ;

postfix_expression
  : primary_expression
  | postfix_expression LBRACK expression RBRACK
  | postfix_expression LPAR RPAR
  | postfix_expression LPAR argument_expression_list RPAR
  | postfix_expression DOT ID
  | postfix_expression PTR ID
  | postfix_expression INC
  | postfix_expression DEC
  ;

argument_expression_list
  : assignment_expression
  | argument_expression_list COMMA assignment_expression
  | error COMMA assignment_expression
  ;

unary_expression
  : postfix_expression
  | INC unary_expression
  | DEC unary_expression
  | unary_operator cast_expression
  | SIZEOF unary_expression
  | SIZEOF LPAR type_name RPAR
  ;

unary_operator
  : AMPERSAND
  | TIMES
  | PLUS
  | MINUS
  | TILDE
  | EXCL
  ;

cast_expression
  : unary_expression
  | LPAR type_name RPAR cast_expression
  ;

multiplicative_expression
  : cast_expression
  | multiplicative_expression TIMES cast_expression
  | multiplicative_expression OVER cast_expression
  | multiplicative_expression MODULO cast_expression
  | error TIMES cast_expression
  | error OVER cast_expression
  | error MODULO cast_expression
  ;

additive_expression
  : multiplicative_expression
  | additive_expression PLUS multiplicative_expression
  | additive_expression MINUS multiplicative_expression
  | error PLUS multiplicative_expression
  | error MINUS multiplicative_expression
  ;

shift_expression
  : additive_expression
  | shift_expression LEFT_OP additive_expression
  | shift_expression RIGHT_OP additive_expression
  ;

relational_expression
  : shift_expression
  | relational_expression LT shift_expression
  | relational_expression GT shift_expression
  | relational_expression LE shift_expression
  | relational_expression GE shift_expression
  | error LT shift_expression
  | error GT shift_expression
  | error LE shift_expression
  | error GE shift_expression
  ;

equality_expression
  : relational_expression
  | equality_expression EQ relational_expression
  | equality_expression NEQ relational_expression
  | error EQ relational_expression
  | error NEQ relational_expression
  ;

and_expression
  : equality_expression
  | and_expression AMPERSAND equality_expression
  ;

exclusive_or_expression
  : and_expression
  | exclusive_or_expression CIRCUMFLEX and_expression
  ;

inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression BAR exclusive_or_expression
  ;

logical_and_expression
  : inclusive_or_expression
  | logical_and_expression AND inclusive_or_expression
  ;

logical_or_expression
  : logical_and_expression
  | logical_or_expression OR logical_and_expression
  ;

conditional_expression
  : logical_or_expression
  | logical_or_expression QUEST expression COLON conditional_expression
  | error QUEST error COLON conditional_expression
  | logical_or_expression QUEST error COLON conditional_expression
  | error QUEST expression QUEST conditional_expression
  ;

assignment_expression
  : conditional_expression
  | unary_expression assignment_operator assignment_expression
  ;

assignment_operator
  : ASSIGN
  | MUL_ASSIGN
  | DIV_ASSIGN
  | MOD_ASSIGN
  | ADD_ASSIGN
  | SUB_ASSIGN
  | LEFT_ASSIGN
  | RIGHT_ASSIGN
  | AND_ASSIGN
  | XOR_ASSIGN
  | OR_ASSIGN
  ;

expression
  : assignment_expression
  | expression COMMA assignment_expression
  ;

constant_expression
  : conditional_expression
  ;

declaration
  : declaration_specifiers SEMI
  | declaration_specifiers init_declarator_list SEMI
  | declaration_specifiers init_declarator_list ASSIGN assignment_expression SEMI
  | declaration_specifiers error SEMI
  ;

declaration_specifiers
  : storage_class_specifier
  | storage_class_specifier declaration_specifiers
  | type_specifier
  | type_specifier declaration_specifiers
  | type_qualifier
  | type_qualifier declaration_specifiers
  ;

init_declarator_list
  : init_declarator
  | init_declarator_list COMMA init_declarator
  | error COMMA init_declarator
  ;

init_declarator
  : declarator
  | declarator ASSIGN initializer
  | error ASSIGN initializer
  ;

storage_class_specifier
  : TYPEDEF
  | EXTERN
  | STATIC
  | AUTO
  | REGISTER
  ;

type_specifier
  : VOID
  | CHAR
  | SHORT
  | INT
  | LONG
  | FLOAT
  | DOUBLE
  | SIGNED
  | UNSIGNED
  | struct_or_union_specifier
  | enum_specifier
  | TYPE_NAME
  ;

struct_or_union_specifier
  : struct_or_union ID LBRA struct_declaration_list RBRA
  | struct_or_union LBRA struct_declaration_list RBRA
  | struct_or_union ID
  | struct_or_union ID LBRA error RBRA
  | struct_or_union LBRA error RBRA
  ;

struct_or_union
  : STRUCT
  | UNION
  ;

struct_declaration_list
  : struct_declaration
  | struct_declaration_list struct_declaration
  ;

struct_declaration
  : specifier_qualifier_list struct_declarator_list SEMI
  | error SEMI
  ;

specifier_qualifier_list
  : type_specifier specifier_qualifier_list
  | type_specifier
  | type_qualifier specifier_qualifier_list
  | type_qualifier
  ;

struct_declarator_list
  : struct_declarator
  | struct_declarator_list COMMA struct_declarator
  | error COMMA struct_declarator
  ;

struct_declarator
  : declarator
  | COLON constant_expression
  | declarator COLON constant_expression
  | error COLON constant_expression
  ;

enum_specifier
  : ENUM LBRA enumerator_list RBRA
  | ENUM ID LBRA enumerator_list RBRA
  | ENUM LBRA error RBRA
  | ENUM ID LBRA error RBRA
  | ENUM ID
  ;

enumerator_list
  : enumerator
  | enumerator_list COMMA enumerator
  | error COMMA enumerator
  ;

enumerator
  : ID
  | ID ASSIGN constant_expression
  | error ASSIGN constant_expression
  ;

type_qualifier
  : CONST
  | VOLATILE
  ;

declarator
  : pointer direct_declarator
  | direct_declarator
  ;

direct_declarator
  : ID
  | LPAR declarator RPAR
  | direct_declarator LBRACK constant_expression RBRACK
  | direct_declarator LBRACK RBRACK
  | direct_declarator LPAR parameter_type_list RPAR
  | direct_declarator LPAR identifier_list RPAR
  | direct_declarator LPAR error RPAR
  | error LPAR error RPAR
  | direct_declarator LPAR RPAR
  | LPAR error RPAR
  ;

pointer
  : TIMES
  | TIMES type_qualifier_list
  | TIMES pointer
  | TIMES type_qualifier_list pointer
  | TIMES error pointer
  ;

type_qualifier_list
  : type_qualifier
  | type_qualifier_list type_qualifier
  ;


parameter_type_list
  : parameter_list
  | parameter_list COMMA ELLIPSIS
  | error COMMA ELLIPSIS
  ;

parameter_list
  : parameter_declaration
  | parameter_list COMMA parameter_declaration
  | error COMMA parameter_declaration
  ;

parameter_declaration
  : declaration_specifiers declarator
  | declaration_specifiers abstract_declarator
  | declaration_specifiers
  ;

identifier_list
  : ID
  | identifier_list COMMA ID
  ;

type_name
  : specifier_qualifier_list
  | specifier_qualifier_list abstract_declarator
  ;

abstract_declarator
  : pointer
  | direct_abstract_declarator
  | pointer direct_abstract_declarator
  ;

direct_abstract_declarator
  : LPAR abstract_declarator RPAR
  | LBRACK RBRACK
  | LBRACK constant_expression RBRACK
  | LBRACK error RBRACK
  | direct_abstract_declarator LBRACK RBRACK
  | direct_abstract_declarator LBRACK constant_expression RBRACK
  | LPAR RPAR
  | LPAR parameter_type_list RPAR
  | direct_abstract_declarator LPAR RPAR
  | direct_abstract_declarator LPAR parameter_type_list RPAR
  | direct_abstract_declarator LPAR error RPAR
  | direct_abstract_declarator LPAR error RPAR
  ;

initializer
  : assignment_expression
  | LBRA initializer_list RBRA
  | LBRA initializer_list COMMA RBRA
  | LBRA error RBRA
  ;

initializer_list
  : initializer
  | initializer_list COMMA initializer
  | error COMMA initializer
  ;

statement
  : labeled_statement
  | compound_statement
  | expression_statement
  | selection_statement
  | iteration_statement
  | jump_statement
  ;

labeled_statement
  : ID COLON statement
  | CASE constant_expression COLON statement
  | DEFAULT COLON statement
  ;

compound_statement
  : LBRA RBRA
  | LBRA statement_list RBRA
  | LBRA declaration_list RBRA
  | LBRA declaration_list statement_list RBRA
  | LBRA error RBRA
  ;

declaration_list
  : declaration
  | declaration_list declaration
  ;

statement_list
  : statement
  | statement_list statement
  ;

expression_statement
  : error SEMI
  | expression SEMI
  ;

selection_statement
  : IF LPAR expression RPAR statement
  | IF LPAR expression RPAR statement ELSE statement
  | SWITCH LPAR  expression RPAR statement
  | IF LPAR error RPAR statement
  | IF LPAR error RPAR statement ELSE statement
  | SWITCH LPAR error RPAR statement
  ;

iteration_statement
  : WHILE LPAR expression RPAR statement
  | DO statement WHILE LPAR expression RPAR SEMI
  | FOR LPAR expression_statement expression_statement RPAR statement
  | FOR LPAR expression_statement expression_statement expression RPAR statement
  | DO error WHILE LPAR expression RPAR SEMI
  | FOR LPAR error RPAR statement
  ;

jump_statement
  : GOTO ID SEMI
  | CONTINUE SEMI
  | BREAK SEMI
  | RETURN SEMI
  | RETURN expression SEMI
  | RETURN error SEMI
  ;

translation_unit
  : external_declaration
  | translation_unit external_declaration
  ;

external_declaration
  : function_definition
  | declaration
  ;

function_definition
  : declaration_specifiers declarator declaration_list compound_statement
  | declaration_specifiers declarator compound_statement
  | declaration_specifiers error compound_statement
  | declarator declaration_list compound_statement
  | error declaration_list compound_statement
  | declarator compound_statement
  | declarator error compound_statement
  | error compound_statement
  ;
%%

void yyerror (char const *s) {
printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
exit(EXIT_FAILURE);
}

int main(void) {
    if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
    else                printf("PARSE FAILED!\n");
    return 0;
}
