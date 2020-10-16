/* A Bison parser, made by GNU Bison 3.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

extern int yylineno;
extern char *yytext;
extern char *auxtext;

int yylex(void);
void yyerror(char const *s);

#line 84 "parser.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    INT_VAL = 259,
    FLOAT_VAL = 260,
    DOUBLE_VAL = 261,
    STR_VAL = 262,
    SIZEOF = 263,
    PTR = 264,
    INC = 265,
    DEC = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE = 269,
    GE = 270,
    EQ = 271,
    NEQ = 272,
    LT = 273,
    GT = 274,
    ASSIGN = 275,
    AND = 276,
    OR = 277,
    MUL_ASSIGN = 278,
    DIV_ASSIGN = 279,
    MOD_ASSIGN = 280,
    ADD_ASSIGN = 281,
    SUB_ASSIGN = 282,
    LEFT_ASSIGN = 283,
    RIGHT_ASSIGN = 284,
    AND_ASSIGN = 285,
    XOR_ASSIGN = 286,
    OR_ASSIGN = 287,
    TYPEDEF = 288,
    EXTERN = 289,
    STATIC = 290,
    AUTO = 291,
    REGISTER = 292,
    CHAR = 293,
    SHORT = 294,
    INT = 295,
    LONG = 296,
    SIGNED = 297,
    UNSIGNED = 298,
    FLOAT = 299,
    DOUBLE = 300,
    CONST = 301,
    VOLATILE = 302,
    VOID = 303,
    STRUCT = 304,
    UNION = 305,
    ENUM = 306,
    ELLIPSIS = 307,
    CASE = 308,
    DEFAULT = 309,
    IF = 310,
    ELSE = 311,
    SWITCH = 312,
    WHILE = 313,
    DO = 314,
    FOR = 315,
    GOTO = 316,
    CONTINUE = 317,
    BREAK = 318,
    RETURN = 319,
    PLUS = 320,
    MINUS = 321,
    TIMES = 322,
    OVER = 323,
    SEMI = 324,
    LPAR = 325,
    RPAR = 326,
    LBRACE = 327,
    RBRACE = 328,
    DOT = 329,
    MODULO = 330,
    LBRA = 331,
    RBRA = 332,
    LBRACK = 333,
    RBRACK = 334,
    AMPERSAND = 335,
    BAR = 336,
    CIRCUMFLEX = 337,
    COLON = 338,
    COMMA = 339,
    QUEST = 340,
    TILDE = 341,
    TYPE_NAME = 342,
    EXCL = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  265
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  474

#define YYUNDEFTOK  2
#define YYMAXUTOK   343

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    45,    46,    47,    48,    49,    50,    54,
      55,    56,    57,    58,    59,    60,    61,    65,    66,    67,
      71,    72,    73,    74,    75,    76,    80,    81,    82,    83,
      84,    85,    89,    90,    94,    95,    96,    97,    98,    99,
     100,   104,   105,   106,   107,   108,   112,   113,   114,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   130,   131,
     132,   133,   134,   138,   139,   143,   144,   148,   149,   153,
     154,   158,   159,   163,   164,   165,   166,   167,   171,   172,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   190,   191,   195,   199,   200,   201,   202,   206,   207,
     208,   209,   210,   211,   215,   216,   217,   221,   222,   223,
     227,   228,   229,   230,   231,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   250,   251,   252,
     253,   254,   258,   259,   263,   264,   268,   269,   273,   274,
     275,   276,   280,   281,   282,   286,   287,   288,   289,   293,
     294,   295,   296,   297,   301,   302,   303,   307,   308,   309,
     313,   314,   318,   319,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   336,   337,   338,   339,   340,   344,
     345,   350,   351,   352,   356,   357,   358,   362,   363,   364,
     368,   369,   373,   374,   378,   379,   380,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   399,
     400,   401,   402,   406,   407,   408,   412,   413,   414,   415,
     416,   417,   421,   422,   423,   427,   428,   429,   430,   431,
     435,   436,   440,   441,   445,   446,   450,   451,   452,   453,
     454,   455,   459,   460,   461,   462,   463,   464,   468,   469,
     470,   471,   472,   473,   477,   478,   482,   483,   487,   488,
     489,   490,   491,   492,   493,   494
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT_VAL", "FLOAT_VAL",
  "DOUBLE_VAL", "STR_VAL", "SIZEOF", "PTR", "INC", "DEC", "LEFT_OP",
  "RIGHT_OP", "LE", "GE", "EQ", "NEQ", "LT", "GT", "ASSIGN", "AND", "OR",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "PLUS", "MINUS", "TIMES", "OVER", "SEMI",
  "LPAR", "RPAR", "LBRACE", "RBRACE", "DOT", "MODULO", "LBRA", "RBRA",
  "LBRACK", "RBRACK", "AMPERSAND", "BAR", "CIRCUMFLEX", "COLON", "COMMA",
  "QUEST", "TILDE", "TYPE_NAME", "EXCL", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -270

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-270)))

#define YYTABLE_NINF -195

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1621,  2210,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,     8,   175,   153,  -270,  -270,    56,   469,   469,  -270,
      18,  -270,   469,  1676,   286,    48,   732,  -270,  -270,    35,
     400,  -270,   229,  -270,  2265,   -54,   301,   -13,  -270,  -270,
     -23,    74,    -1,   219,  -270,    96,  -270,  2144,  -270,  -270,
     -49,  1746,  -270,    27,  -270,  2265,   558,   889,    94,   286,
    -270,  -270,    53,  1841,   101,  -270,  -270,  -270,  -270,  1764,
    1809,  1809,  1146,   118,   154,   187,   194,   750,   210,   287,
     251,   277,   913,  -270,  -270,  -270,   576,  -270,  -270,  -270,
    -270,  -270,   178,  1166,  1835,  -270,   150,   221,   312,   454,
     314,   217,   232,   274,   365,   -10,  -270,  -270,   -38,  -270,
    -270,  -270,   488,   627,  -270,  -270,  -270,  -270,   243,   377,
    -270,  -270,   381,    44,   393,    71,  -270,  -270,  -270,  -270,
    -270,  -270,   924,  -270,   240,  -270,  1146,  -270,   240,   924,
    -270,  2265,  1760,   322,  1023,   228,  -270,   129,  1023,  -270,
    -270,   -21,  -270,  -270,   281,   354,   344,  -270,    21,  2157,
    -270,  -270,  -270,  -270,   347,  -270,  1163,  1163,  1174,  1174,
    1163,  1163,  1260,  1260,  1835,  1835,  -270,  1835,  -270,  1271,
     786,   576,  -270,  1288,  -270,  -270,   346,   786,  1299,  1385,
    1146,  1866,   374,  1396,   383,  -270,  -270,  1952,  -270,    78,
    1963,   176,   342,   385,   471,  -270,  -270,  1010,   472,  1146,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  1146,  -270,  1835,  1835,  1835,  1260,  1260,  1163,  1163,
    1163,  1163,  1163,  1163,  1174,  1174,  1413,  1413,  1413,  1413,
    1413,  1424,  -270,  1146,  2025,  -270,   664,  -270,  -270,    90,
     126,  1146,  -270,   413,  1146,  -270,   413,  1021,  -270,  -270,
      -5,  -270,   409,  -270,  -270,  -270,   350,  1508,  -270,  -270,
    -270,   416,  -270,  -270,   -12,  1146,   131,  -270,   407,  -270,
    -270,  2284,  1494,  1038,  -270,    15,  -270,   401,  -270,  2339,
    -270,   494,  -270,   671,   312,   312,   840,   454,   454,   312,
     312,   356,   150,   150,  -270,  -270,  -270,  2036,   -24,  -270,
     429,   786,  -270,  2047,   245,  2058,   248,   250,   431,   470,
    1928,  1510,  -270,  -270,  -270,  -270,  -270,  1566,   492,  -270,
    1835,  -270,  2069,  -270,   255,  -270,  -270,   156,  -270,  -270,
    -270,  -270,   150,   150,   221,   221,   312,   312,   312,   312,
     454,   454,   633,   314,   217,   232,   274,   365,  2131,   252,
    -270,  -270,  -270,  -270,  -270,   524,  -270,  -270,  -270,  1939,
    -270,   177,  -270,  -270,  -270,  1146,   167,  -270,  -270,   167,
    1146,  -270,  -270,   238,  -270,   486,   489,  2142,  -270,   487,
     401,  1695,  1049,  -270,  -270,  -270,  1146,  1146,  -270,  -270,
     786,   786,   786,   786,   786,  1146,  1146,   786,  1135,   483,
    -270,  1146,  -270,  1146,  -270,  1146,  1146,  -270,   924,  -270,
     872,  -270,   179,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
     282,  -270,   498,  -270,   493,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   283,   308,  -270,   786,   309,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,   504,   509,  -270,
     786,  -270,  -270,  -270
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   164,   110,   111,   112,   113,   114,   116,   117,
     118,   119,   122,   123,   120,   121,   160,   161,   115,   132,
     133,     0,     0,     0,   126,   257,     0,    98,   100,   124,
       0,   125,   102,     0,   163,     0,     0,   254,   256,     0,
       0,   230,     0,   265,     0,   153,     0,     0,   179,   176,
     175,     0,     0,     0,    94,     0,   104,   107,    99,   101,
     129,     0,   103,     0,   263,     0,     0,     0,     0,   162,
       1,   255,     0,     0,     2,     3,     4,     5,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    27,     0,   225,    26,    30,
      31,     9,    20,    32,     0,    34,    41,    46,    49,    58,
      63,    65,    67,    69,    71,    73,    78,    91,     0,   232,
     216,   217,     0,     0,   218,   219,   220,   221,     0,   107,
     231,   262,     0,     0,   157,     0,   154,   178,   180,   177,
     173,   165,     0,    97,     0,   260,     0,    95,     0,     0,
     259,     0,     0,     0,   139,     0,   134,     0,   141,   264,
     261,     0,   190,   172,     0,     0,   181,   184,     0,     0,
       2,   167,    32,    93,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,     0,   229,     0,
       0,     0,    24,     0,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,   250,     0,   251,     0,
       0,     0,   192,     0,     0,    15,    16,     0,     0,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   227,     0,   226,   233,     0,
       0,     0,   151,     0,     0,   149,     0,     0,   209,   109,
       0,   106,     0,   105,   108,   258,     0,     0,   137,   131,
     138,     0,   128,   135,     0,     0,     0,   142,   145,   140,
     170,     0,     0,     0,   187,     0,   188,   195,   168,     0,
     169,     0,   166,     0,    56,    57,     0,    61,    62,    54,
      55,     0,    44,    45,    38,    39,    40,     0,     0,   222,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   248,   253,   252,     8,     7,     0,   194,   193,
       0,    14,     0,    11,     0,    17,    13,     0,    79,    35,
      36,    37,    42,    43,    47,    48,    52,    53,    50,    51,
      59,    60,     0,    64,    66,    68,    70,    72,     0,     0,
      92,   228,   152,   150,   159,     0,   156,   158,   155,     0,
     213,     0,    96,   130,   127,     0,     0,   146,   136,     0,
       0,   183,   186,     0,   203,     0,     0,     0,   198,     0,
     196,     0,     0,   182,   185,   191,     0,     0,    25,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,    12,     0,    10,     0,     0,   212,     0,   210,
       0,   148,     0,   144,   143,   147,   204,   197,   200,   199,
       0,   205,     0,   201,     0,    75,    77,   239,   236,   241,
     238,   242,     0,     0,   247,     0,     0,    19,    18,    76,
      74,   215,   211,   214,   207,   206,   202,     0,     0,   244,
       0,   246,   243,   245
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,  -270,   -40,  -270,   -96,  -140,   123,   241,
    -165,   339,   341,   362,   340,   361,  -270,   -57,   -34,  -270,
     -58,   -79,    30,     1,  -270,   -44,  -270,    17,  -270,  -270,
     438,  -148,   -77,  -270,  -243,  -270,   480,    -8,    40,     9,
     -30,    26,  -270,   -64,  -270,   272,  -270,   422,  -144,  -269,
    -145,  -270,   -70,  -270,    54,   169,   514,  -197,  -270,  -270,
    -270,  -270,   603,  -270
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   101,   102,   344,   172,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   231,
     118,   174,    41,    42,    55,    56,    27,    28,    29,    30,
     155,   156,   157,   286,   287,    31,   135,   136,    32,   129,
      34,    35,    50,   395,   166,   167,   168,   213,   396,   297,
     269,   381,   119,   120,   121,    44,   123,   124,   125,   126,
     127,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,    26,   165,   196,   274,    69,   331,   283,   232,    33,
     173,    45,   250,   307,   308,   142,    68,   202,     2,   212,
     296,    60,   132,    16,    17,   173,   400,   152,    58,    59,
      25,   252,    52,    62,   209,    57,    72,    26,   211,   192,
     194,   195,   312,   313,    22,    33,   253,   103,    49,    68,
     290,     2,   103,   258,    22,    43,   103,    53,    39,     2,
     253,   407,    48,   291,   261,    39,    25,   164,   339,   400,
     141,   385,   386,   137,   130,   251,   139,   280,   154,   360,
     361,   289,   103,   103,    46,   292,  -194,    64,   314,   315,
     138,   316,   300,   293,    61,   130,   352,   353,   131,  -194,
     271,   158,   103,    40,   273,   301,   103,   145,   268,   103,
     261,   150,   272,   154,   212,   268,   146,   159,    23,   160,
     319,   262,   380,    22,   175,    54,    23,   322,   263,   283,
     284,   318,     2,   211,   418,   211,   158,   349,   350,   351,
     324,   326,   327,   433,    39,   140,   434,   334,   265,   103,
     103,   103,   130,   103,    51,   266,     2,   103,   103,   103,
     103,   347,   253,   103,    39,   147,   288,   372,   432,   154,
       2,   154,   154,   294,   263,   154,    47,   103,  -174,   103,
     148,   130,   374,   345,   190,   377,   258,   214,   215,   216,
     295,   103,   158,   369,   158,   158,    22,   348,   158,    23,
     388,   197,    65,   373,   173,   275,   387,   173,   154,   122,
     266,   103,   285,   103,   399,   389,   103,   233,   234,   370,
      22,    16,    17,    23,   198,   235,   151,   103,   173,   281,
     128,   158,     2,   268,    22,   424,   173,    23,   338,   142,
     253,   270,    22,     2,   420,  -174,  -174,   336,   217,    39,
     285,   409,   218,  -174,   429,   376,   219,   199,   378,  -174,
     253,   430,   385,   142,   200,    69,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     203,   103,    68,   461,     2,   463,   236,   237,   143,    39,
     204,   103,   164,   164,   154,    40,    22,   246,    54,    23,
     164,    52,   133,   144,   134,   282,   431,    22,    39,   140,
      23,   435,   143,    39,   247,    24,   411,   158,   295,   413,
     205,   414,   291,   444,   238,   239,   422,   144,   173,   253,
     244,   245,   253,   173,   253,   426,   253,   442,   164,   423,
     447,   448,   449,   450,   451,   173,   206,   454,    22,   445,
     446,   292,  -189,   464,   467,   248,    66,   452,   453,   293,
     456,   354,   355,   338,    67,  -189,   291,   253,   459,   460,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   468,
     470,   103,   259,   103,   134,   469,   249,   457,   103,   458,
     103,   278,   253,   253,   268,   288,   268,   149,   288,   279,
     473,    73,   164,    74,    75,    76,    77,    78,    79,    22,
      80,    81,   337,   264,   375,   103,   134,   304,   305,   278,
     293,   309,   310,   184,   185,   298,   302,   383,   299,   321,
     103,   187,   329,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   332,    82,    83,    84,   340,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,   240,   241,
      96,   401,   242,   243,   341,   346,    40,    97,   382,   402,
      98,   356,   357,   358,   359,   278,    99,    24,   100,   254,
     390,    74,    75,    76,    77,    78,    79,   405,    80,    81,
     408,   415,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     416,    82,    83,    84,   261,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    24,   436,    96,   161,
     437,   162,   337,   392,    40,   255,   439,   291,    98,   465,
     293,   404,   466,   471,    99,    24,   100,   210,   472,   170,
      75,    76,    77,    78,    79,   363,    80,    81,   364,   366,
     277,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     365,   367,   260,   320,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   254,   163,
      74,    75,    76,    77,    78,    79,   256,    80,    81,    71,
       0,    93,    94,    95,     0,    24,    96,   176,   177,   178,
     179,   180,   181,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    99,    24,   100,   254,     0,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
      82,    83,    84,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,    96,   182,   183,
     184,   185,     0,    40,   257,     0,     0,    98,   187,     0,
       0,     0,     0,    99,     0,   100,     0,    82,    83,    84,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    70,     1,    96,     2,   182,   183,   184,   185,
      40,   371,     0,     0,    98,     0,   187,     0,     0,     0,
      99,   201,   100,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,   254,     0,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,    22,
       0,     0,    23,    82,    83,    84,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     0,    24,
      96,     0,     0,     0,     0,     0,    40,     0,     0,     0,
      98,     0,     0,     0,     0,     0,    99,     0,   100,    82,
      83,    84,     0,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,   176,   177,    96,     0,   180,   181,
       0,     0,    40,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    99,   169,   100,   170,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
     169,     0,   170,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,   182,   183,   184,   185,     0,
       0,     0,     0,     0,   207,   187,   170,    75,    76,    77,
      78,    79,     0,    80,    81,   169,     0,   170,    75,    76,
      77,    78,    79,     0,    80,    81,     0,    93,    94,    95,
       0,     0,    96,     0,     0,     0,     0,     0,   267,   462,
       0,     0,    98,     0,    93,    94,    95,     0,    99,    96,
     100,     0,     0,     0,     0,     0,     0,     0,   171,    98,
       0,     0,     0,     0,     0,    99,     0,   100,    93,    94,
      95,     0,   208,    96,     0,     0,     0,     0,     0,    93,
      94,    95,     0,    98,    96,     0,     0,     0,     0,    99,
     267,   100,     0,     0,    98,     0,     0,     0,     0,     0,
      99,   342,   100,   170,    75,    76,    77,    78,    79,     0,
      80,    81,   379,     0,   170,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,   397,
       0,   170,    75,    76,    77,    78,    79,     0,    80,    81,
     169,     0,   170,    75,    76,    77,    78,    79,     0,    80,
      81,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    93,    94,    95,     0,     0,
      96,   343,     0,     0,     0,     0,    93,    94,    95,     0,
      98,    96,     0,     0,     0,     0,    99,   267,   100,     0,
       0,    98,     0,    93,    94,    95,     0,    99,    96,   100,
      24,     0,     0,     0,    93,    94,    95,   398,    98,    96,
       0,     0,     0,     0,    99,     0,   100,     0,   443,    98,
       0,     0,     0,     0,     0,    99,   169,   100,   170,    75,
      76,    77,    78,    79,     0,    80,    81,   169,     0,   170,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,   303,     0,   170,    75,    76,    77,
      78,    79,     0,    80,    81,   306,     0,   170,    75,    76,
      77,    78,    79,     0,    80,    81,   220,     0,     0,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,     0,
      93,    94,    95,     0,     0,    96,   455,     0,     0,     0,
       0,    93,    94,    95,     0,    98,    96,     0,     0,     0,
       0,    99,     0,   100,     0,     0,    98,     0,    93,    94,
      95,     0,    99,    96,   100,     0,     0,     0,     0,    93,
      94,    95,     0,    98,    96,     0,     0,     0,     0,    99,
       0,   100,     0,     0,    98,     0,     0,     0,     0,     0,
      99,   311,   100,   170,    75,    76,    77,    78,    79,     0,
      80,    81,   317,     0,   170,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,   210,
       0,   170,    75,    76,    77,    78,    79,     0,    80,    81,
     323,     0,   170,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    93,    94,    95,     0,
      98,    96,     0,     0,     0,     0,    99,     0,   100,     0,
       0,    98,     0,    93,    94,    95,     0,    99,    96,   100,
       0,     0,     0,     0,    93,    94,    95,     0,    98,    96,
       0,     0,     0,     0,    99,     0,   100,     0,     0,    98,
       0,     0,     0,     0,     0,    99,   325,   100,   170,    75,
      76,    77,    78,    79,     0,    80,    81,   330,     0,   170,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,   362,     0,   170,    75,    76,    77,
      78,    79,     0,    80,    81,   368,     0,   170,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    93,    94,    95,     0,    98,    96,     0,     0,     0,
       0,    99,     0,   100,     0,     0,    98,     0,    93,    94,
      95,     0,    99,    96,   100,     0,     0,     0,     0,    93,
      94,    95,     0,    98,    96,   393,     0,     2,     0,    99,
       0,   100,     0,     0,    98,     0,     0,     0,     0,   281,
      99,   254,   100,   170,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    22,     0,     0,   292,   394,     0,   419,     0,     0,
       0,     0,   293,     0,     0,    93,    94,    95,     0,     0,
      96,    24,     0,     0,     0,   384,     0,     0,     0,     0,
      98,     0,     0,     0,     0,    24,    99,     0,   100,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     1,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,   337,   394,     0,     0,
       0,     0,     0,     0,   293,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,    23,     0,     0,     0,     0,   440,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   153,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,    24,     0,     0,   441,   170,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,    24,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   170,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,     0,    24,   191,     0,     0,     0,   170,    75,
      76,    77,    78,    79,    98,    80,    81,    24,     0,     0,
      99,     0,   100,     0,     0,   176,   177,   178,   179,   180,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,     0,     0,   193,
     176,   177,   178,   179,   180,   181,     0,     0,     0,    98,
       0,     0,     0,     0,     0,    99,     0,   100,     0,     0,
      93,    94,    95,     0,     0,    96,   182,   183,   184,   185,
     186,     0,     0,     0,     0,    98,   187,     0,   188,     0,
       0,    99,     0,   100,   328,     0,   189,     0,     0,     0,
       0,   182,   183,   184,   185,   186,     0,     0,     0,     0,
       0,   187,   176,   177,   178,   179,   180,   181,     0,     0,
       0,   189,     0,   176,   177,   178,   179,   180,   181,     0,
       0,     0,     0,     0,     0,     0,   176,   177,   178,   179,
     180,   181,     0,     0,     0,     0,     0,   176,   177,   178,
     179,   180,   181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,   183,   184,   185,   186,     0,   417,
       0,     0,     0,   187,   182,   183,   184,   185,     0,     0,
       0,     0,     0,   189,   187,     0,   427,   182,   183,   184,
     185,   333,     0,   428,   189,     0,     0,   187,   182,   183,
     184,   185,     0,     0,   335,     0,     0,   189,   187,   176,
     177,   178,   179,   180,   181,     0,     0,     0,   189,     0,
     176,   177,   178,   179,   180,   181,     0,     0,     0,     0,
       0,   176,   177,   178,   179,   180,   181,     0,     0,     0,
       0,     0,   176,   177,   178,   179,   180,   181,     0,     0,
       0,     0,     0,   176,   177,   178,   179,   180,   181,     0,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
     187,   182,   183,   184,   185,     0,     0,     0,     0,     0,
     189,   187,   182,   183,   184,   185,     0,     0,   410,   406,
       0,   189,   187,   182,   183,   184,   185,     0,     0,   412,
       0,     0,   189,   187,   182,   183,   184,   185,     0,     0,
       0,     0,     0,   189,   187,   176,   177,   178,   179,   180,
     181,     0,     0,   421,   189,     0,   176,   177,   178,   179,
     180,   181,     0,     0,   149,     0,     0,     0,     0,     0,
       0,   176,   177,   178,   179,   180,   181,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   182,   183,   184,   185,
       0,     0,     0,     0,     0,     0,   187,   182,   183,   184,
     185,     0,     0,     0,   425,     0,   189,   187,     0,     0,
      40,   438,   182,   183,   184,   185,     0,   189,     0,     0,
       0,    24,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   391,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   403,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
      40,     0,    66,    82,   149,    35,   203,   155,   104,     0,
      67,     3,    22,   178,   179,    20,     1,    87,     3,    96,
     164,     3,    76,    46,    47,    82,   295,    76,    27,    28,
       0,    69,    23,    32,    92,    26,     1,    36,    96,    79,
      80,    81,   182,   183,    67,    36,    84,    87,    22,     1,
      71,     3,    92,   123,    67,     1,    96,     1,    70,     3,
      84,    85,    22,    84,    20,    70,    36,    66,   212,   338,
      71,    83,    84,    47,    44,    85,    50,   154,    61,   244,
     245,   158,   122,   123,    76,    70,    71,    33,   184,   185,
      50,   187,    71,    78,    76,    65,   236,   237,    44,    84,
     144,    61,   142,    76,   148,    84,   146,    53,   142,   149,
      20,    57,   146,    96,   191,   149,    20,    63,    70,    65,
     190,    77,   267,    67,    71,    69,    70,   197,    84,   277,
       1,   189,     3,   191,   331,   193,    96,   233,   234,   235,
     198,   199,   200,   386,    70,    71,   389,    69,    77,   189,
     190,   191,   122,   193,     1,    84,     3,   197,   198,   199,
     200,   219,    84,   203,    70,    69,   157,    77,     1,   152,
       3,   154,   155,   164,    84,   158,     1,   217,     3,   219,
      84,   151,   261,   217,    83,   264,   256,     9,    10,    11,
     164,   231,   152,   251,   154,   155,    67,   231,   158,    70,
      69,    83,    33,    77,   261,   151,   285,   264,   191,    40,
      84,   251,    83,   253,   293,    84,   256,    67,    68,   253,
      67,    46,    47,    70,    70,    75,    57,   267,   285,     1,
       1,   191,     3,   267,    67,    79,   293,    70,   212,    20,
      84,     1,    67,     3,   340,    70,    71,    71,    70,    70,
      83,   321,    74,    78,    77,   263,    78,    70,   266,    84,
      84,    84,    83,    20,    70,   295,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      70,   321,     1,   428,     3,   430,    65,    66,    69,    70,
       3,   331,   291,   292,   277,    76,    67,    80,    69,    70,
     299,   292,     1,    84,     3,    77,   385,    67,    70,    71,
      70,   390,    69,    70,    82,    87,    71,   277,   292,    71,
      69,    71,    84,   402,    12,    13,    71,    84,   385,    84,
      16,    17,    84,   390,    84,    83,    84,   401,   337,    84,
     410,   411,   412,   413,   414,   402,    69,   417,    67,   406,
     407,    70,    71,    71,    71,    81,    70,   415,   416,    78,
     418,   238,   239,   337,    78,    84,    84,    84,   425,   426,
     410,   411,   412,   413,   414,   415,   416,   417,   418,    71,
      71,   421,     1,   423,     3,   455,    21,   421,   428,   423,
     430,    69,    84,    84,   428,   386,   430,    20,   389,    77,
     470,     1,   401,     3,     4,     5,     6,     7,     8,    67,
      10,    11,    70,    20,     1,   455,     3,   176,   177,    69,
      78,   180,   181,    67,    68,    71,    79,    77,    84,    83,
     470,    75,    58,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    69,    53,    54,    55,    71,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    14,    15,
      70,    70,    18,    19,     3,     3,    76,    77,    69,    78,
      80,   240,   241,   242,   243,    69,    86,    87,    88,     1,
      83,     3,     4,     5,     6,     7,     8,     3,    10,    11,
      71,    70,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      70,    53,    54,    55,    20,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    87,    71,    70,     1,
      71,     3,    70,   291,    76,    77,    79,    84,    80,    71,
      78,   299,    79,    69,    86,    87,    88,     1,    69,     3,
       4,     5,     6,     7,     8,   246,    10,    11,   247,   249,
     152,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     248,   250,   132,   191,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     1,    71,
       3,     4,     5,     6,     7,     8,   122,    10,    11,    36,
      -1,    65,    66,    67,    -1,    87,    70,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    70,    65,    66,
      67,    68,    -1,    76,    77,    -1,    -1,    80,    75,    -1,
      -1,    -1,    -1,    86,    -1,    88,    -1,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     1,    70,     3,    65,    66,    67,    68,
      76,    77,    -1,    -1,    80,    -1,    75,    -1,    -1,    -1,
      86,     1,    88,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    67,
      -1,    -1,    70,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    87,
      70,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    14,    15,    70,    -1,    18,    19,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,     1,    88,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,     1,    75,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    65,    66,    67,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,    -1,    65,    66,    67,    -1,    86,    70,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    65,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    80,    70,    -1,    -1,    -1,    -1,    86,
      76,    88,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,     1,    88,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    65,    66,    67,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,
      80,    70,    -1,    -1,    -1,    -1,    86,    76,    88,    -1,
      -1,    80,    -1,    65,    66,    67,    -1,    86,    70,    88,
      87,    -1,    -1,    -1,    65,    66,    67,    79,    80,    70,
      -1,    -1,    -1,    -1,    86,    -1,    88,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    86,     1,    88,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      65,    66,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    65,    66,    67,    -1,    80,    70,    -1,    -1,    -1,
      -1,    86,    -1,    88,    -1,    -1,    80,    -1,    65,    66,
      67,    -1,    86,    70,    88,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    80,    70,    -1,    -1,    -1,    -1,    86,
      -1,    88,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,     1,    88,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,
      80,    70,    -1,    -1,    -1,    -1,    86,    -1,    88,    -1,
      -1,    80,    -1,    65,    66,    67,    -1,    86,    70,    88,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    80,    70,
      -1,    -1,    -1,    -1,    86,    -1,    88,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,     1,    88,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    -1,    80,    70,    -1,    -1,    -1,
      -1,    86,    -1,    88,    -1,    -1,    80,    -1,    65,    66,
      67,    -1,    86,    70,    88,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    80,    70,     1,    -1,     3,    -1,    86,
      -1,    88,    -1,    -1,    80,    -1,    -1,    -1,    -1,     1,
      86,     1,    88,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    67,    -1,    -1,    70,    71,    -1,     1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    87,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    87,    86,    -1,    88,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    70,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    87,    -1,    -1,    71,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    87,    70,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    80,    10,    11,    87,    -1,    -1,
      86,    -1,    88,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    -1,    -1,
      65,    66,    67,    -1,    -1,    70,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    80,    75,    -1,    77,    -1,
      -1,    86,    -1,    88,    58,    -1,    85,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    85,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    -1,    71,
      -1,    -1,    -1,    75,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    85,    75,    -1,    77,    65,    66,    67,
      68,    69,    -1,    84,    85,    -1,    -1,    75,    65,    66,
      67,    68,    -1,    -1,    71,    -1,    -1,    85,    75,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    85,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      75,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      85,    75,    65,    66,    67,    68,    -1,    -1,    71,    83,
      -1,    85,    75,    65,    66,    67,    68,    -1,    -1,    71,
      -1,    -1,    85,    75,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    85,    75,    14,    15,    16,    17,    18,
      19,    -1,    -1,    84,    85,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    65,    66,    67,
      68,    -1,    -1,    -1,    83,    -1,    85,    75,    -1,    -1,
      76,    79,    65,    66,    67,    68,    -1,    85,    -1,    -1,
      -1,    87,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    67,    70,    87,   111,   112,   115,   116,   117,
     118,   124,   127,   128,   129,   130,   150,   151,   152,    70,
      76,   111,   112,   143,   144,     3,    76,     1,   127,   130,
     131,     1,   128,     1,    69,   113,   114,   128,   112,   112,
       3,    76,   112,     1,   143,   144,    70,    78,     1,   129,
       0,   151,     1,     1,     3,     4,     5,     6,     7,     8,
      10,    11,    53,    54,    55,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    70,    77,    80,    86,
      88,    90,    91,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   109,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     1,   128,
     111,   143,    76,     1,     3,   125,   126,   130,   127,   130,
      71,    71,    20,    69,    84,   143,    20,    69,    84,    20,
     143,   144,    76,     1,   116,   119,   120,   121,   127,   143,
     143,     1,     3,    71,   112,   132,   133,   134,   135,     1,
       3,    79,    93,   106,   110,    71,    14,    15,    16,    17,
      18,    19,    65,    66,    67,    68,    69,    75,    77,    85,
      83,    70,    93,    70,    93,    93,   110,    83,    70,    70,
      70,     1,   141,    70,     3,    69,    69,     1,    69,   109,
       1,   109,   121,   136,     9,    10,    11,    70,    74,    78,
      20,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   108,    95,    67,    68,    75,    65,    66,    12,    13,
      14,    15,    18,    19,    16,    17,    80,    82,    81,    21,
      22,    85,    69,    84,     1,    77,   145,    77,   141,     1,
     125,    20,    77,    84,    20,    77,    84,    76,   107,   139,
       1,   114,   107,   114,   139,   143,     1,   119,    69,    77,
     121,     1,    77,   120,     1,    83,   122,   123,   128,   121,
      71,    84,    70,    78,   128,   130,   137,   138,    71,    84,
      71,    84,    79,     1,    98,    98,     1,    99,    99,    98,
      98,     1,    96,    96,    95,    95,    95,     1,   109,   141,
     136,    83,   141,     1,   109,     1,   109,   109,    58,    58,
       1,   146,    69,    69,    69,    71,    71,    70,   130,   137,
      71,     3,     1,    71,    92,   107,     3,   109,   107,    95,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      99,    99,     1,   100,   101,   102,   103,   104,     1,   109,
     107,    77,    77,    77,   110,     1,   126,   110,   126,     1,
     139,   140,    69,    77,    77,    83,    84,   110,    69,    84,
      83,    52,   134,     1,    71,   132,   137,     1,    79,   110,
     138,    70,    78,    52,   134,     3,    83,    85,    71,   141,
      71,    71,    71,    71,    71,    70,    70,    71,   146,     1,
      95,    84,    71,    84,    79,    83,    83,    77,    84,    77,
      84,   110,     1,   123,   123,   110,    71,    71,    79,    79,
       1,    71,   132,    79,   110,   106,   106,   141,   141,   141,
     141,   141,   109,   109,   141,    71,   109,   107,   107,   106,
     106,   139,    77,   139,    71,    71,    79,    71,    71,   141,
      71,    69,    69,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   110,   111,   111,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   114,   114,   114,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   125,   125,   125,   126,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   134,   134,   134,
     135,   135,   136,   136,   137,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   139,   140,   140,   140,   141,   141,   141,   141,
     141,   141,   142,   142,   142,   143,   143,   143,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   149,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   152,   152,   152,   152,   152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     1,     3,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     5,     5,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     5,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       5,     4,     1,     1,     1,     2,     3,     2,     2,     1,
       2,     1,     1,     3,     3,     1,     2,     3,     3,     4,
       5,     4,     5,     2,     1,     3,     3,     1,     3,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       4,     4,     3,     3,     1,     2,     2,     3,     3,     1,
       2,     1,     3,     3,     1,     3,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     3,     4,     2,     3,     3,     4,     4,     4,     1,
       3,     4,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     3,     4,     3,
       1,     2,     1,     2,     2,     2,     5,     7,     5,     5,
       7,     5,     5,     7,     6,     7,     7,     5,     3,     2,
       2,     2,     3,     3,     1,     2,     1,     1,     4,     3,
       3,     3,     3,     2,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    (YYSIZE_T) (*yytop == yytop_empty ? 0 : *yytop - *yybottom + 1);
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = (YYSIZE_T) (yyesp - *yyes + 1);
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        yytype_int16 yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = ((yytype_int16)
                     (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                      ? yytable[yyi]
                      : yydefgoto[yylhs]));
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", (int) yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {

#line 2287 "parser.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 496 "parser.y"


void yyerror (char const *s) {
printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
exit(EXIT_FAILURE);
}

int main(void) {
    if (yyparse() == 0) printf("PARSE SUCCESSFUL!\n");
    else                printf("PARSE FAILED!\n");
    return 0;
}
