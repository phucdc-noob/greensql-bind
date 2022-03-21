
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "sql.ypp"

/* C declarations */

#include <stdio.h>
#include <string.h> // for strcmp

//#include <iostream>
#include "expression.hpp"
#include "parser.hpp"

int yylex();
int yyerror( char * s);
int yy_scan_string ( char *yy_str  );
int scan_buffer(const char * data);
static void cmp_fn(Expression * xp1, Expression * xp2);



/* Line 189 of yacc.c  */
#line 92 "sql.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SELECT = 258,
     DISTINCT = 259,
     SELECT_OPT = 260,
     FROM = 261,
     WHERE = 262,
     JOIN_TYPE = 263,
     JOIN = 264,
     STRAIGHT_JOIN = 265,
     INDEX = 266,
     USE = 267,
     ON = 268,
     USING = 269,
     IGNORE = 270,
     FORCE = 271,
     FOR = 272,
     QUICK = 273,
     LOW_PRIORITY = 274,
     GROUP = 275,
     ORDER = 276,
     BY = 277,
     ASC = 278,
     DESC = 279,
     INSERT = 280,
     UPDATE = 281,
     DELETE = 282,
     SHOW = 283,
     INTO = 284,
     AS = 285,
     IN = 286,
     ANY = 287,
     EXISTS = 288,
     IS = 289,
     NULLX = 290,
     UNKNOWN = 291,
     FALSEX = 292,
     TRUEX = 293,
     DEFAULT = 294,
     EQUAL = 295,
     N_EQUAL = 296,
     MULTIPLY = 297,
     DIVIDE = 298,
     POWER = 299,
     NEWLINE = 300,
     SHIFT = 301,
     BASIC_OP = 302,
     BETWEEN = 303,
     CASE = 304,
     WHEN = 305,
     THEN = 306,
     ELSE = 307,
     END_CASE = 308,
     CAST = 309,
     DATA_TYPE = 310,
     BINARY = 311,
     CHAR_TYPE = 312,
     REGEXP = 313,
     HAVING = 314,
     LIMIT = 315,
     OFFSET = 316,
     PROCEDURE = 317,
     UNION = 318,
     SET = 319,
     INTEGER = 320,
     STRING = 321,
     Q_STRING = 322,
     DQ_STRING = 323,
     NAME = 324,
     VARIABLE = 325,
     O_BRACE = 326,
     C_BRACE = 327,
     BIT_AND = 328,
     BIT_OR = 329,
     COMMA = 330,
     END = 331,
     NEG = 332,
     DOT = 333,
     AND = 334,
     OR = 335,
     NOT = 336,
     XOR = 337,
     LIKE = 338
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "sql.ypp"

  int int_val;
  class SQLString * str_val;
  class Expression * exp_val;



/* Line 214 of yacc.c  */
#line 219 "sql.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 231 "sql.tab.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   831

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNRULES -- Number of states.  */
#define YYNSTATES  369

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    12,    14,    28,
      32,    35,    37,    47,    57,    58,    60,    62,    64,    66,
      69,    72,    73,    75,    77,    79,    81,    84,    87,    90,
      91,    93,    97,    99,   103,   109,   113,   114,   117,   119,
     123,   126,   128,   132,   136,   142,   148,   154,   160,   162,
     166,   171,   173,   175,   181,   187,   189,   193,   198,   202,
     208,   215,   222,   230,   236,   243,   249,   256,   262,   266,
     271,   273,   275,   277,   281,   285,   289,   293,   297,   301,
     304,   308,   312,   316,   318,   320,   322,   324,   326,   328,
     332,   336,   340,   344,   346,   348,   350,   352,   354,   356,
     358,   360,   362,   366,   368,   370,   375,   378,   380,   382,
     385,   387,   388,   391,   396,   400,   406,   408,   410,   414,
     415,   417,   420,   422,   424,   426,   428,   429,   435,   443,
     445,   447,   449,   451,   455,   460,   467,   472,   477,   481,
     485,   487,   491,   493,   495,   497,   501,   504,   506,   508,
     510,   512,   514,   517,   519,   520,   525,   527,   531,   532,
     534,   536,   537,   540,   541,   546,   548,   550,   552,   556,
     557,   560,   565,   570,   571,   574,   575,   578,   579,   581,
     585,   589,   595,   601,   605,   611,   616,   623,   625,   628,
     633,   640,   650,   657,   667,   674,   684
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      85,     0,    -1,    -1,    86,    -1,    87,    -1,    88,    -1,
      89,    -1,    90,    -1,     3,    91,    98,     6,   106,    97,
     125,   128,   129,   131,   132,   133,   134,    -1,     3,    91,
      98,    -1,    25,    29,    -1,    28,    -1,    27,    93,    95,
       6,   106,    97,   129,   131,   134,    -1,    26,    93,   106,
      64,   135,    97,   129,   131,   134,    -1,    -1,    92,    -1,
       5,    -1,    10,    -1,     4,    -1,    92,     5,    -1,    92,
       4,    -1,    -1,    94,    -1,    19,    -1,    15,    -1,    18,
      -1,    94,    19,    -1,    94,    15,    -1,    94,    18,    -1,
      -1,    96,    -1,    95,    75,    96,    -1,   113,    -1,   113,
      78,   113,    -1,   113,    78,   113,    78,    42,    -1,   113,
      78,    42,    -1,    -1,     7,   123,    -1,    99,    -1,    98,
      75,    99,    -1,   100,   114,    -1,    42,    -1,    66,    78,
      42,    -1,    69,    78,    42,    -1,    66,    78,    66,    78,
      42,    -1,    66,    78,    69,    78,    42,    -1,    69,    78,
      66,    78,    42,    -1,    69,    78,    69,    78,    42,    -1,
     102,    -1,   100,   124,   102,    -1,   100,    81,   124,   102,
      -1,   136,    -1,   139,    -1,   100,    48,   102,    79,   102,
      -1,   100,    31,    71,   121,    72,    -1,   102,    -1,   102,
     124,   102,    -1,   102,    81,   124,   102,    -1,   102,    81,
     102,    -1,   102,   124,   102,   124,   102,    -1,   102,    81,
     124,   102,   124,   102,    -1,   102,   124,   102,    81,   124,
     102,    -1,   102,    81,   124,   102,    81,   124,   102,    -1,
     102,    31,    71,   121,    72,    -1,   102,    81,    31,    71,
     121,    72,    -1,   102,    31,    71,    86,    72,    -1,   102,
      81,    31,    71,    86,    72,    -1,   102,    48,   102,    79,
     102,    -1,    71,   101,    72,    -1,    33,    71,    86,    72,
      -1,   136,    -1,   139,    -1,   103,    -1,   102,    47,   103,
      -1,   102,    42,   103,    -1,   102,    43,   103,    -1,   102,
      46,   103,    -1,   102,    74,   103,    -1,   102,    73,   103,
      -1,    47,   103,    -1,   102,    44,   103,    -1,    71,   102,
      72,    -1,    71,    86,    72,    -1,   104,    -1,   105,    -1,
     119,    -1,   120,    -1,    66,    -1,    69,    -1,    66,    78,
      66,    -1,    66,    78,    69,    -1,    69,    78,    66,    -1,
      69,    78,    69,    -1,    65,    -1,    70,    -1,    67,    -1,
      68,    -1,    35,    -1,    36,    -1,    38,    -1,    37,    -1,
     107,    -1,   106,    75,   107,    -1,   112,    -1,   108,    -1,
     107,   109,   112,   111,    -1,   110,     9,    -1,     9,    -1,
      10,    -1,   110,     8,    -1,     8,    -1,    -1,    13,   123,
      -1,    14,    71,   102,    72,    -1,   113,   114,   116,    -1,
     113,    78,   113,   114,   116,    -1,    66,    -1,    69,    -1,
      71,    86,    72,    -1,    -1,   115,    -1,    30,   115,    -1,
      66,    -1,    69,    -1,    67,    -1,    68,    -1,    -1,   117,
      11,    71,   118,    72,    -1,   117,    11,    17,     9,    71,
     118,    72,    -1,    12,    -1,    15,    -1,    16,    -1,    66,
      -1,   118,    75,   118,    -1,    66,    71,   121,    72,    -1,
      66,    71,     4,   121,   129,    72,    -1,    57,    71,   121,
      72,    -1,    66,    71,    42,    72,    -1,    66,    71,    72,
      -1,    57,    71,    72,    -1,   102,    -1,   121,    75,   121,
      -1,    79,    -1,    80,    -1,    82,    -1,   123,   122,   101,
      -1,    81,   101,    -1,   101,    -1,    40,    -1,    41,    -1,
      83,    -1,    58,    -1,    34,    81,    -1,    34,    -1,    -1,
      20,    22,   126,   127,    -1,   104,    -1,   126,    75,   104,
      -1,    -1,    23,    -1,    24,    -1,    -1,    59,   123,    -1,
      -1,    21,    22,   130,   127,    -1,   104,    -1,   120,    -1,
      35,    -1,   130,    75,   130,    -1,    -1,    60,    65,    -1,
      60,    65,    75,    65,    -1,    60,    65,    61,    65,    -1,
      -1,    62,   119,    -1,    -1,    63,    86,    -1,    -1,    76,
      -1,   104,    40,   102,    -1,   104,    40,    39,    -1,   135,
      75,   103,    40,   102,    -1,   135,    75,   103,    40,    39,
      -1,    49,   137,    53,    -1,    49,   137,    52,   102,    53,
      -1,    49,   102,   137,    53,    -1,    49,   102,   137,    52,
     102,    53,    -1,   138,    -1,   137,   138,    -1,    50,   100,
      51,   102,    -1,    54,    71,   102,    30,    55,    72,    -1,
      54,    71,   102,    30,    55,    71,   121,    72,    72,    -1,
      54,    71,   102,    30,    57,    72,    -1,    54,    71,   102,
      30,    57,    71,   121,    72,    72,    -1,    54,    71,   102,
      30,    56,    72,    -1,    54,    71,   102,    30,    56,    71,
     121,    72,    72,    -1,    56,   102,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    97,    98,    99,   100,   101,   104,   105,
     108,   111,   114,   117,   120,   121,   124,   125,   126,   127,
     128,   131,   132,   135,   136,   137,   138,   139,   140,   143,
     144,   145,   148,   149,   150,   151,   154,   155,   158,   159,
     162,   163,   164,   165,   166,   167,   168,   169,   172,   173,
     174,   175,   176,   177,   178,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   213,   217,   218,   219,   222,   223,   224,
     225,   226,   227,   230,   231,   232,   233,   234,   235,   236,
     237,   240,   241,   244,   245,   248,   251,   252,   253,   256,
     257,   260,   261,   262,   265,   266,   269,   270,   274,   277,
     278,   279,   282,   283,   284,   285,   289,   290,   291,   293,
     294,   295,   298,   299,   302,   303,   304,   307,   308,   309,
     312,   313,   316,   317,   319,   322,   324,   325,   328,   329,
     330,   331,   332,   333,   336,   337,   340,   341,   344,   345,
     346,   349,   350,   353,   354,   357,   358,   359,   360,   363,
     364,   365,   366,   369,   370,   373,   374,   377,   378,   381,
     382,   383,   384,   387,   388,   389,   390,   394,   395,   398,
     401,   402,   403,   404,   405,   406,   407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SELECT", "DISTINCT", "SELECT_OPT",
  "FROM", "WHERE", "JOIN_TYPE", "JOIN", "STRAIGHT_JOIN", "INDEX", "USE",
  "ON", "USING", "IGNORE", "FORCE", "FOR", "QUICK", "LOW_PRIORITY",
  "GROUP", "ORDER", "BY", "ASC", "DESC", "INSERT", "UPDATE", "DELETE",
  "SHOW", "INTO", "AS", "IN", "ANY", "EXISTS", "IS", "NULLX", "UNKNOWN",
  "FALSEX", "TRUEX", "DEFAULT", "EQUAL", "N_EQUAL", "MULTIPLY", "DIVIDE",
  "POWER", "NEWLINE", "SHIFT", "BASIC_OP", "BETWEEN", "CASE", "WHEN",
  "THEN", "ELSE", "END_CASE", "CAST", "DATA_TYPE", "BINARY", "CHAR_TYPE",
  "REGEXP", "HAVING", "LIMIT", "OFFSET", "PROCEDURE", "UNION", "SET",
  "INTEGER", "STRING", "Q_STRING", "DQ_STRING", "NAME", "VARIABLE",
  "O_BRACE", "C_BRACE", "BIT_AND", "BIT_OR", "COMMA", "END", "NEG", "DOT",
  "AND", "OR", "NOT", "XOR", "LIKE", "$accept", "command", "select_cmd",
  "insert_cmd", "show_cmd", "delete_cmd", "update_cmd", "select_options",
  "select_opts", "delete_option_list", "delete_option",
  "delete_table_list", "delete_table", "where_cond", "select_exps",
  "select_exp", "math_op", "logical_exp", "math_exp", "field",
  "table_field", "const_value", "table_references", "table_reference",
  "join_table", "join_ops", "join_types", "join_cond", "table_factor",
  "simple_table", "alias", "alias_str", "index_hint", "index_use",
  "index_list", "fn", "simple_fn", "fn_args", "logical_operator",
  "logical_exp_list", "comp_operator", "group_cond", "groupby_column_list",
  "sort_order", "having_cond", "order_cond", "orderby_column_list",
  "limit_cond", "procedure_cond", "union_cond", "end_cond", "set_cond",
  "case_fn", "case_cases", "case_case", "cast_fn", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     335,   336,   337,   338
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    88,    89,    90,    91,    91,    92,    92,    92,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   109,   109,   109,   110,
     110,   111,   111,   111,   112,   112,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   115,   116,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   119,   120,   120,   120,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   130,   131,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   135,   136,   136,   136,   136,   137,   137,   138,
     139,   139,   139,   139,   139,   139,   139
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,    13,     3,
       2,     1,     9,     9,     0,     1,     1,     1,     1,     2,
       2,     0,     1,     1,     1,     1,     2,     2,     2,     0,
       1,     3,     1,     3,     5,     3,     0,     2,     1,     3,
       2,     1,     3,     3,     5,     5,     5,     5,     1,     3,
       4,     1,     1,     5,     5,     1,     3,     4,     3,     5,
       6,     6,     7,     5,     6,     5,     6,     5,     3,     4,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     4,     2,     1,     1,     2,
       1,     0,     2,     4,     3,     5,     1,     1,     3,     0,
       1,     2,     1,     1,     1,     1,     0,     5,     7,     1,
       1,     1,     1,     3,     4,     6,     4,     4,     3,     3,
       1,     3,     1,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     2,     1,     0,     4,     1,     3,     0,     1,
       1,     0,     2,     0,     4,     1,     1,     1,     3,     0,
       2,     4,     4,     0,     2,     0,     2,     0,     1,     3,
       3,     5,     5,     3,     5,     4,     6,     1,     2,     4,
       6,     9,     6,     9,     6,     9,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    14,     0,    21,    21,    11,     0,     3,     4,     5,
       6,     7,    18,    16,    17,     0,    15,    10,    24,    25,
      23,     0,    22,    29,     1,    97,    98,   100,    99,    41,
       0,     0,     0,     0,     0,    93,    87,    95,    96,    88,
      94,     0,     9,    38,   119,    48,    72,    83,    84,    85,
      86,    51,    52,    20,    19,   116,   117,     0,     0,   101,
     104,   103,   119,    27,    28,    26,     0,    30,    32,    87,
      88,    79,     0,     0,     0,   187,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   148,
     149,     0,   151,   122,   124,   125,   123,     0,   150,    40,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   107,   108,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,   183,   188,     0,
     139,   140,     0,     0,     0,   138,     0,    42,    89,    90,
      43,    91,    92,    82,    81,    36,    39,   121,     0,   152,
       0,     0,    49,    74,    75,    80,    76,    73,    78,    77,
     118,    87,     0,    36,   102,   111,   109,   106,   119,   129,
     130,   131,   114,     0,    36,    31,    35,    33,    89,    90,
      91,    92,     0,     0,   185,     0,     0,   136,     0,   163,
     137,   134,     0,     0,     0,     0,     0,   154,     0,     0,
      50,     0,     0,   163,     0,     0,   105,   126,     0,   163,
       0,   189,     0,   184,     0,     0,     0,   141,     0,     0,
      44,    45,    46,    47,     0,     0,     0,   147,    55,    37,
      70,    71,     0,   161,    54,    53,   180,   179,     0,   169,
     112,     0,   115,     0,     0,   169,    34,   186,     0,   190,
       0,   194,     0,   192,     0,   135,     0,     0,     0,   146,
       0,     0,     0,     0,   142,   143,   144,     0,     0,     0,
     163,     0,     0,   177,     0,     0,   132,     0,   177,     0,
       0,     0,   167,     0,    87,   165,   166,   158,     0,    68,
       0,     0,     0,    58,     0,    56,   145,   156,   158,   162,
     169,   182,   181,   170,   178,    13,   113,     0,   127,     0,
      12,     0,     0,     0,     0,     0,   159,   160,     0,   164,
      69,     0,     0,     0,     0,    57,     0,     0,     0,   155,
     173,     0,     0,     0,   133,   191,   195,   193,   168,    65,
      63,    67,     0,     0,     0,     0,     0,    59,   157,     0,
     175,   172,   171,   128,    66,    64,     0,    60,    61,     0,
       0,   174,     0,   177,    62,     0,     0,   176,     8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    82,     8,     9,    10,    11,    15,    16,    21,
      22,    66,    67,   197,    42,    43,    44,   227,   131,    46,
      47,    48,    58,    59,    60,   115,   116,   206,    61,    62,
      99,   100,   172,   173,   277,    49,    50,   132,   267,   229,
     101,   233,   298,   319,   270,   219,   287,   273,   350,   363,
     305,   163,   230,    74,    75,   231
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -275
static const yytype_int16 yypact[] =
{
     127,    29,    19,   148,   148,  -275,    61,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,   558,    38,  -275,  -275,  -275,
    -275,    50,   165,    50,  -275,  -275,  -275,  -275,  -275,  -275,
     687,   608,    42,   664,    94,  -275,   -42,  -275,  -275,    93,
    -275,   236,    15,  -275,   323,   757,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,   122,   -26,   311,
    -275,  -275,    37,  -275,  -275,  -275,    16,  -275,   103,    31,
     120,  -275,   583,   695,   168,  -275,   664,   757,   516,   166,
      75,    80,    79,   704,    50,   558,   128,   144,   149,  -275,
    -275,   664,  -275,  -275,  -275,  -275,  -275,   159,  -275,  -275,
    -275,   664,   687,   687,   687,   687,   687,   687,   687,   172,
      54,    50,  -275,  -275,  -275,    50,    47,    50,   176,    50,
      50,    65,    73,   106,   399,   193,   664,  -275,  -275,   292,
    -275,   757,   114,   664,   180,  -275,   134,  -275,   184,   190,
    -275,   199,   211,  -275,  -275,    13,  -275,  -275,   664,  -275,
     422,   664,   757,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,   230,   241,    17,   311,   297,  -275,  -275,   -16,  -275,
    -275,  -275,  -275,   303,    13,  -275,  -275,   245,  -275,  -275,
    -275,  -275,   664,   664,  -275,   717,   273,  -275,   664,   -11,
    -275,  -275,   249,   291,   310,   313,   475,   338,   147,   664,
     757,   624,   687,   335,   475,   288,  -275,   176,    24,   335,
     318,   757,   739,  -275,   254,   269,   272,  -275,   339,   296,
    -275,  -275,  -275,  -275,   298,    91,   501,  -275,   380,    53,
    -275,  -275,   350,   314,  -275,   757,  -275,   757,   334,   315,
      53,   664,  -275,   376,   320,   315,  -275,  -275,   664,  -275,
     664,  -275,   664,  -275,    -3,  -275,   122,   316,   336,  -275,
     322,   664,   229,   664,  -275,  -275,  -275,   501,    54,   475,
     335,   649,   330,   321,   751,   325,  -275,   153,   321,   154,
     179,   186,  -275,   327,    40,  -275,  -275,    21,   328,  -275,
     236,   518,   331,   757,   664,   402,  -275,  -275,    23,    53,
     315,  -275,   757,   -38,  -275,  -275,  -275,   320,  -275,   320,
    -275,   329,   333,   340,   341,    -2,  -275,  -275,    -3,  -275,
    -275,   343,   203,   664,   236,   447,   159,   664,    54,  -275,
     337,   342,   351,   207,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,   757,   346,   213,   159,   664,   664,   757,  -275,   -31,
     324,  -275,  -275,  -275,  -275,  -275,   664,   757,   757,   332,
     354,  -275,   122,   321,   757,   664,   280,  -275,  -275
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -275,  -275,     0,  -275,  -275,  -275,  -275,  -275,  -275,   425,
    -275,  -275,   312,   -64,  -275,   349,   359,  -195,   -14,   -23,
    -104,  -275,   -59,   326,  -275,  -275,  -275,  -275,   344,   -20,
     -60,   355,   228,  -275,  -102,   102,  -243,   -74,  -275,  -176,
     -85,  -275,  -275,   157,  -275,  -194,   138,  -232,  -275,  -275,
    -274,  -275,    -7,   379,   -56,     1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       7,    45,   118,    68,   310,   136,   162,    71,    51,   239,
     218,   286,   151,   278,    86,   245,    52,    73,   128,    77,
     196,    84,   119,   331,   196,   145,   359,    83,   240,    79,
     257,   259,   282,    12,    13,   360,    80,   332,   110,    14,
     134,   243,    53,    54,   316,   317,   316,   317,    17,   111,
      93,    94,    95,    96,   283,   166,   167,   109,    45,   189,
     174,    24,   129,   284,   188,    51,    70,    86,   330,   128,
     135,    45,   296,    52,   198,   286,   300,   150,    51,   153,
     154,   155,   156,   157,   158,   159,    52,   152,   111,   368,
      85,   120,   202,   299,     1,   244,   318,   168,   328,   203,
      68,   177,    79,    93,    94,    95,    96,   176,   207,   122,
     209,   315,   185,    76,   217,   117,    55,   137,   122,    56,
     161,    57,   140,    70,   224,     1,    25,    26,    27,    28,
       1,    55,   264,   265,    56,   266,    57,   200,    30,   178,
      31,   138,   179,   263,   139,    32,   141,    33,    34,   142,
     285,   143,     2,     3,     4,     5,    35,    69,    37,    38,
      70,    40,   225,    18,   297,    78,    19,    20,   211,   212,
     133,    81,   180,   263,   279,   181,   280,   294,   281,   238,
      63,   121,   228,    64,    65,   235,   187,   237,   169,   188,
     228,   170,   171,    88,    93,    94,    95,    96,   123,    89,
      90,    25,    26,    27,    28,   333,   191,   334,   134,   188,
     327,   258,   228,    30,   285,   148,   322,    92,    72,   234,
     126,   127,   188,    34,   348,   308,   311,   274,   309,   188,
     149,    35,    69,    37,    38,    70,    40,    41,   135,     1,
     345,   346,    98,    72,   160,   183,   184,   291,   293,   295,
     343,   312,   190,   228,   188,   228,   288,   302,   313,   356,
     292,   188,   192,    88,    25,    26,    27,    28,   193,    89,
      90,    25,    26,    27,    28,   340,    30,   194,   188,   353,
     325,   201,   309,    30,   133,   355,    34,    92,   188,   195,
     321,   220,   136,    34,    35,    69,    37,    38,    70,    40,
      41,    35,    69,    37,    38,    70,    40,    41,   122,   341,
     204,   205,    98,   347,   208,    25,    26,    27,    28,   112,
     113,   114,   186,   210,   342,   248,   249,    30,   214,   215,
     216,   357,   358,   221,   102,   103,   104,    34,   105,   106,
     250,   251,   364,   252,   253,    35,    69,    37,    38,    70,
      40,    41,   222,    86,    87,   223,   218,    88,   232,   241,
     246,   254,   367,    89,    90,   107,   108,   260,   255,   256,
      88,    91,   268,   269,   271,   272,    89,    90,   102,   103,
     104,    92,   105,   106,   261,   275,   276,   362,   289,    93,
      94,    95,    96,   290,    92,   303,   307,   304,   314,   349,
     320,   335,   324,   365,    97,   336,    98,   351,   144,   107,
     108,   260,   337,   130,    88,   339,   352,   262,   354,    98,
      89,    90,   102,   103,   104,   366,   105,   106,   261,    23,
      87,   124,   175,    88,   146,   242,    88,   164,    92,    89,
      90,   147,    89,    90,   102,   103,   104,    91,   105,   106,
     182,   361,   125,   107,   108,   329,   338,    92,     0,   165,
      92,   262,     0,    98,   102,   103,   104,     0,   105,   106,
       0,     0,     0,     0,     0,   107,   108,     0,     0,     0,
      97,    88,    98,   326,     0,    98,     0,    89,    90,   102,
     103,   104,     0,   105,   106,   107,   108,     0,     0,     0,
       0,   199,     0,     0,     0,    92,     0,     0,   224,     0,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
     107,   108,    30,     0,    31,     0,     0,     0,   344,    32,
      98,    33,    34,     0,   224,     0,    25,    26,    27,    28,
      35,    69,    37,    38,    70,    40,   225,     0,    30,     0,
      31,    25,    26,    27,    28,    32,   226,    33,    34,     0,
     102,   103,   104,    30,   105,   106,    35,    69,    37,    38,
      70,    40,   225,    34,     0,     0,     0,     0,     0,     0,
       0,    35,    69,    37,    38,    70,    40,    41,   130,     0,
       0,   107,   108,    25,    26,    27,    28,   323,     0,     0,
      29,     0,     0,     0,     0,    30,     0,    31,     0,     0,
       0,     0,    32,     0,    33,    34,     0,     0,    25,    26,
      27,    28,     0,    35,    36,    37,    38,    39,    40,    41,
      30,     0,    31,     0,     0,     0,     0,    32,     0,    33,
      34,     0,     0,    25,    26,    27,    28,     0,    35,    69,
      37,    38,    70,    40,    41,    30,     0,     0,    72,    25,
      26,    27,    28,   236,     0,    34,     0,     0,     0,     0,
       0,    30,     0,    35,    69,    37,    38,    70,    40,    41,
       0,    34,     0,     0,    25,    26,    27,    28,   301,    35,
      69,    37,    38,    70,    40,    41,    30,     0,     0,    25,
      26,    27,    28,     0,     0,     0,    34,     0,     0,     0,
       0,    30,     0,     0,    35,    69,    37,    38,    70,    40,
      41,    34,    25,    26,    27,    28,     0,     0,     0,    35,
      69,    37,    38,    70,    40,    41,     0,   102,   103,   104,
       0,   105,   106,     0,    34,    72,   102,   103,   104,     0,
     105,   106,    35,    69,    37,    38,    70,    40,     0,   102,
     103,   104,     0,   105,   106,     0,     0,     0,   107,   108,
     213,     0,     0,     0,     0,     0,   144,   107,   108,     0,
       0,   102,   103,   104,     0,   105,   106,     0,     0,     0,
     107,   108,   247,   102,   103,   104,     0,   105,   106,   102,
     103,   104,     0,   105,   106,     0,     0,     0,     0,     0,
       0,     0,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,   107,   108,     0,     0,     0,     0,
     107,   108
};

static const yytype_int16 yycheck[] =
{
       0,    15,    62,    23,   278,    79,   110,    30,    15,   203,
      21,   254,    97,   245,    30,   209,    15,    31,    74,    33,
       7,     6,     6,    61,     7,    84,    57,    41,   204,    71,
     225,   226,    35,     4,     5,    66,    78,    75,    64,    10,
      42,    17,     4,     5,    23,    24,    23,    24,    29,    75,
      66,    67,    68,    69,    57,     8,     9,    57,    72,   133,
     119,     0,    76,    66,    75,    72,    69,    30,   300,   125,
      72,    85,   267,    72,   148,   318,   270,    91,    85,   102,
     103,   104,   105,   106,   107,   108,    85,   101,    75,   363,
      75,    75,    75,   269,     3,    71,    75,   117,    75,   163,
     120,   121,    71,    66,    67,    68,    69,    42,   168,    78,
     174,    71,   126,    71,   188,    78,    66,    42,    78,    69,
      66,    71,    42,    69,    33,     3,    35,    36,    37,    38,
       3,    66,    79,    80,    69,    82,    71,   151,    47,    66,
      49,    66,    69,   228,    69,    54,    66,    56,    57,    69,
     254,    72,    25,    26,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    15,   268,    71,    18,    19,   182,   183,
       4,    78,    66,   258,   248,    69,   250,   262,   252,   202,
      15,    78,   196,    18,    19,   199,    72,   201,    12,    75,
     204,    15,    16,    34,    66,    67,    68,    69,    78,    40,
      41,    35,    36,    37,    38,   307,    72,   309,    42,    75,
     295,   225,   226,    47,   318,    71,   290,    58,    50,    72,
      52,    53,    75,    57,   328,    72,    72,   241,    75,    75,
      81,    65,    66,    67,    68,    69,    70,    71,    72,     3,
     325,   326,    83,    50,    72,    52,    53,   261,   262,   263,
     324,    72,    72,   267,    75,   269,   256,   271,    72,   344,
      31,    75,    78,    34,    35,    36,    37,    38,    78,    40,
      41,    35,    36,    37,    38,    72,    47,    78,    75,    72,
     294,    40,    75,    47,     4,    72,    57,    58,    75,    78,
     290,    42,   366,    57,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    78,   323,
      13,    14,    83,   327,    11,    35,    36,    37,    38,     8,
       9,    10,    30,    78,   324,    71,    72,    47,    55,    56,
      57,   345,   346,    42,    42,    43,    44,    57,    46,    47,
      71,    72,   356,    71,    72,    65,    66,    67,    68,    69,
      70,    71,    42,    30,    31,    42,    21,    34,    20,    71,
      42,    22,   362,    40,    41,    73,    74,    31,    72,    71,
      34,    48,    22,    59,    40,    60,    40,    41,    42,    43,
      44,    58,    46,    47,    48,     9,    66,    63,    72,    66,
      67,    68,    69,    71,    58,    65,    71,    76,    71,    62,
      72,    72,    71,    71,    81,    72,    83,    65,    72,    73,
      74,    31,    72,    72,    34,    72,    65,    81,    72,    83,
      40,    41,    42,    43,    44,    71,    46,    47,    48,     4,
      31,    72,   120,    34,    85,   207,    34,   111,    58,    40,
      41,    86,    40,    41,    42,    43,    44,    48,    46,    47,
      51,   349,    73,    73,    74,   298,   318,    58,    -1,   115,
      58,    81,    -1,    83,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,
      81,    34,    83,    81,    -1,    83,    -1,    40,    41,    42,
      43,    44,    -1,    46,    47,    73,    74,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    58,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    47,    -1,    49,    -1,    -1,    -1,    81,    54,
      83,    56,    57,    -1,    33,    -1,    35,    36,    37,    38,
      65,    66,    67,    68,    69,    70,    71,    -1,    47,    -1,
      49,    35,    36,    37,    38,    54,    81,    56,    57,    -1,
      42,    43,    44,    47,    46,    47,    65,    66,    67,    68,
      69,    70,    71,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      -1,    73,    74,    35,    36,    37,    38,    79,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    -1,    -1,    35,    36,
      37,    38,    -1,    65,    66,    67,    68,    69,    70,    71,
      47,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    -1,    -1,    35,    36,    37,    38,    -1,    65,    66,
      67,    68,    69,    70,    71,    47,    -1,    -1,    50,    35,
      36,    37,    38,    39,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    57,    -1,    -1,    35,    36,    37,    38,    39,    65,
      66,    67,    68,    69,    70,    71,    47,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    57,    35,    36,    37,    38,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    42,    43,    44,
      -1,    46,    47,    -1,    57,    50,    42,    43,    44,    -1,
      46,    47,    65,    66,    67,    68,    69,    70,    -1,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    73,    74,
      53,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      73,    74,    53,    42,    43,    44,    -1,    46,    47,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    25,    26,    27,    28,    85,    86,    87,    88,
      89,    90,     4,     5,    10,    91,    92,    29,    15,    18,
      19,    93,    94,    93,     0,    35,    36,    37,    38,    42,
      47,    49,    54,    56,    57,    65,    66,    67,    68,    69,
      70,    71,    98,    99,   100,   102,   103,   104,   105,   119,
     120,   136,   139,     4,     5,    66,    69,    71,   106,   107,
     108,   112,   113,    15,    18,    19,    95,    96,   113,    66,
      69,   103,    50,   102,   137,   138,    71,   102,    71,    71,
      78,    78,    86,   102,     6,    75,    30,    31,    34,    40,
      41,    48,    58,    66,    67,    68,    69,    81,    83,   114,
     115,   124,    42,    43,    44,    46,    47,    73,    74,    86,
      64,    75,     8,     9,    10,   109,   110,    78,   114,     6,
      75,    78,    78,    78,   100,   137,    52,    53,   138,   102,
      72,   102,   121,     4,    42,    72,   121,    42,    66,    69,
      42,    66,    69,    72,    72,   106,    99,   115,    71,    81,
     102,   124,   102,   103,   103,   103,   103,   103,   103,   103,
      72,    66,   104,   135,   107,   112,     8,     9,   113,    12,
      15,    16,   116,   117,   106,    96,    42,   113,    66,    69,
      66,    69,    51,    52,    53,   102,    30,    72,    75,   121,
      72,    72,    78,    78,    78,    78,     7,    97,   121,    79,
     102,    40,    75,    97,    13,    14,   111,   114,    11,    97,
      78,   102,   102,    53,    55,    56,    57,   121,    21,   129,
      42,    42,    42,    42,    33,    71,    81,   101,   102,   123,
     136,   139,    20,   125,    72,   102,    39,   102,   103,   129,
     123,    71,   116,    17,    71,   129,    42,    53,    71,    72,
      71,    72,    71,    72,    22,    72,    71,   101,   102,   101,
      31,    48,    81,   124,    79,    80,    82,   122,    22,    59,
     128,    40,    60,   131,   102,     9,    66,   118,   131,   121,
     121,   121,    35,    57,    66,   104,   120,   130,    86,    72,
      71,   102,    31,   102,   124,   102,   101,   104,   126,   123,
     129,    39,   102,    65,    76,   134,    72,    71,    72,    75,
     134,    72,    72,    72,    71,    71,    23,    24,    75,   127,
      72,    86,   121,    79,    71,   102,    81,   124,    75,   127,
     131,    61,    75,   118,   118,    72,    72,    72,   130,    72,
      72,   102,    86,   121,    81,   124,   124,   102,   104,    62,
     132,    65,    65,    72,    72,    72,   124,   102,   102,    57,
      66,   119,    63,   133,   102,    71,    71,    86,   134
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
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

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:

/* Line 1455 of yacc.c  */
#line 104 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (13)].exp_val); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 105 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (3)].exp_val); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 158 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 159 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 162 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (2)].exp_val); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 163 "sql.ypp"
    { (yyval.exp_val)=new Expression(); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 164 "sql.ypp"
    { clb_found_table((yyvsp[(1) - (3)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(1) - (3)].str_val)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 165 "sql.ypp"
    { clb_found_table((yyvsp[(1) - (3)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(1) - (3)].str_val));  ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 166 "sql.ypp"
    { clb_found_table((yyvsp[(3) - (5)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(3) - (5)].str_val)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 167 "sql.ypp"
    { clb_found_table((yyvsp[(3) - (5)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(3) - (5)].str_val)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 168 "sql.ypp"
    { clb_found_table((yyvsp[(3) - (5)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(3) - (5)].str_val)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 169 "sql.ypp"
    { clb_found_table((yyvsp[(3) - (5)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(3) - (5)].str_val)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 172 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 173 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 174 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(4) - (4)].exp_val)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 175 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 176 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 177 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (5)].exp_val); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 178 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (5)].exp_val); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 181 "sql.ypp"
    { if ((yyvsp[(1) - (1)].exp_val)->IsTrue()) clb_found_tautology(); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 182 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (3)].exp_val),(yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 183 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (4)].exp_val),(yyvsp[(4) - (4)].exp_val)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 184 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (3)].exp_val),(yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 185 "sql.ypp"
    { clb_found_tautology(); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 186 "sql.ypp"
    { clb_found_tautology(); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 187 "sql.ypp"
    { clb_found_tautology(); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 188 "sql.ypp"
    { clb_found_tautology(); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 189 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (5)].exp_val),(yyvsp[(4) - (5)].exp_val)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 190 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (6)].exp_val),(yyvsp[(5) - (6)].exp_val)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 191 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (5)].exp_val), (yyvsp[(4) - (5)].exp_val)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 192 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (6)].exp_val), (yyvsp[(5) - (6)].exp_val)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 193 "sql.ypp"
    { cmp_fn((yyvsp[(1) - (5)].exp_val), (yyvsp[(3) - (5)].exp_val)); cmp_fn((yyvsp[(1) - (5)].exp_val), (yyvsp[(5) - (5)].exp_val)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 200 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 201 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 202 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 203 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 204 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 205 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 206 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 207 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (2)].exp_val); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 208 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); /*bit xor*/ ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 209 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (3)].exp_val); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 210 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (3)].exp_val); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 213 "sql.ypp"
    { (yyval.exp_val)=new Expression(); 
                            clb_check_true_constant((yyvsp[(1) - (1)].str_val))? 
                              (yyval.exp_val)->AddConst(new SQLString("fn()")) : 
                              (yyval.exp_val)->AddField((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 217 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 218 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 219 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(new SQLString("fn()")); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 222 "sql.ypp"
    { (yyval.str_val)=(yyvsp[(1) - (1)].str_val); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 223 "sql.ypp"
    { (yyval.str_val)=(yyvsp[(1) - (1)].str_val); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 224 "sql.ypp"
    { (yyval.str_val)=(yyvsp[(3) - (3)].str_val); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 225 "sql.ypp"
    { (yyval.str_val)=(yyvsp[(3) - (3)].str_val); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 226 "sql.ypp"
    { (yyval.str_val)=(yyvsp[(3) - (3)].str_val); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 227 "sql.ypp"
    { (yyval.str_val)=(yyvsp[(3) - (3)].str_val); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 230 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[(1) - (1)].int_val)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 231 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[(1) - (1)].int_val)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 232 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 233 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 234 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(0);  ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 235 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(0); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 236 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(1); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 237 "sql.ypp"
    { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(0); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 269 "sql.ypp"
    { clb_found_table((yyvsp[(1) - (1)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 270 "sql.ypp"
    { clb_found_table((yyvsp[(1) - (1)].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[(1) - (1)].str_val)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 274 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (3)].exp_val); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 277 "sql.ypp"
    { ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 278 "sql.ypp"
    { ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 279 "sql.ypp"
    { ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 282 "sql.ypp"
    { /* $$ = $1; printf("table: %s\n", $1); */ ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 283 "sql.ypp"
    { /* $$ = $2; printf("table: %s\n", $2); */ ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 302 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (4)].exp_val); clb_check_bruteforce_function((yyvsp[(1) - (4)].str_val)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 303 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(4) - (6)].exp_val); clb_check_bruteforce_function((yyvsp[(1) - (6)].str_val)); /* printf("fn\n"); */ ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 304 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (4)].exp_val); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 307 "sql.ypp"
    { clb_check_bruteforce_function((yyvsp[(1) - (4)].str_val)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 308 "sql.ypp"
    { clb_check_bruteforce_function((yyvsp[(1) - (3)].str_val)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 309 "sql.ypp"
    { /* $1 = new SQLString("char()"); */ ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 312 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 313 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(3) - (3)].exp_val)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 387 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (3)].exp_val); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 388 "sql.ypp"
    { (yyval.exp_val) = (yyvsp[(2) - (5)].exp_val); (yyval.exp_val)->Add((yyvsp[(4) - (5)].exp_val)); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 389 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (4)].exp_val); cmp_fn((yyvsp[(2) - (4)].exp_val),(yyvsp[(3) - (4)].exp_val)); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 390 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (6)].exp_val); cmp_fn((yyvsp[(2) - (6)].exp_val),(yyvsp[(3) - (6)].exp_val)); cmp_fn((yyvsp[(2) - (6)].exp_val),(yyvsp[(5) - (6)].exp_val)); (yyval.exp_val)->Add((yyvsp[(5) - (6)].exp_val)); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 394 "sql.ypp"
    { (yyval.exp_val) = (yyvsp[(1) - (1)].exp_val); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 395 "sql.ypp"
    { (yyval.exp_val)->Add((yyvsp[(2) - (2)].exp_val)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 398 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (4)].exp_val); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 401 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (6)].exp_val); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 402 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (9)].exp_val); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 403 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (6)].exp_val); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 404 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (9)].exp_val); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 405 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (6)].exp_val); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 406 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(3) - (9)].exp_val); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 407 "sql.ypp"
    { (yyval.exp_val)=(yyvsp[(2) - (2)].exp_val); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2514 "sql.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 410 "sql.ypp"

/*
int main()
{
  std::string s;
  while (std::cin)
  {
    std::getline(std::cin, s);
    //std::cout << "line: " << s << std::endl;
    scan_buffer(s.c_str());
  }
  return 1;
}

*/
int yyerror( char *s)
{
    extern char * yytext;
    //printf("error at char %s\n", yytext);
    //exit(1);
    return 1;
}

static void cmp_fn(Expression * xp1, Expression * xp2)
{
  if (xp1->Comp(xp2))
    clb_found_tautology();
  else if (xp1->IsEmptyPwd(xp2))
    clb_found_empty_pwd();
}

