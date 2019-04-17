
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
#line 1 "MiniPbison.txt"

    #include <stdio.h>
    #include <stdlib.h>
    int yylex (void);
    int yyerror(char const *);


/* Line 189 of yacc.c  */
#line 81 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     _ASSIGN = 17,
     _LESS = 41,
     _GTR = 42,
     _LEQ = 43,
     _GEQ = 44,
     _EQL = 40,
     _NEQ = 45,
     _PLUS = 20,
     _MINUS = 21,
     _MULT = 22,
     _DIVIDE = 23,
     _ID = 1,
     _ICONST = 2,
     _RCONST = 3,
     _ECONST = 4,
     _LITERAL = 5,
     _LBRACK = 10,
     _RBRACK = 11,
     _LPAREN = 12,
     _RPAREN = 13,
     _SEMI = 14,
     _COLON = 15,
     _COMMA = 16,
     _PROGRAM = 51,
     _ENDVARS = 52,
     _ENDPROCS = 53,
     _VARS = 54,
     _NOVARS = 55,
     _INTEGER = 56,
     _REAL = 57,
     _STRING = 58,
     _PROCS = 59,
     _NOPROCS = 60,
     _PROC = 61,
     _BEGIN = 62,
     _END = 63,
     _FOR = 64,
     _TO = 65,
     _DO = 66,
     _IF = 67,
     _THEN = 68,
     _ELSE = 69,
     _READ = 70,
     _WRITE = 71
   };
#endif
/* Tokens.  */
#define _ASSIGN 17
#define _LESS 41
#define _GTR 42
#define _LEQ 43
#define _GEQ 44
#define _EQL 40
#define _NEQ 45
#define _PLUS 20
#define _MINUS 21
#define _MULT 22
#define _DIVIDE 23
#define _ID 1
#define _ICONST 2
#define _RCONST 3
#define _ECONST 4
#define _LITERAL 5
#define _LBRACK 10
#define _RBRACK 11
#define _LPAREN 12
#define _RPAREN 13
#define _SEMI 14
#define _COLON 15
#define _COMMA 16
#define _PROGRAM 51
#define _ENDVARS 52
#define _ENDPROCS 53
#define _VARS 54
#define _NOVARS 55
#define _INTEGER 56
#define _REAL 57
#define _STRING 58
#define _PROCS 59
#define _NOPROCS 60
#define _PROC 61
#define _BEGIN 62
#define _END 63
#define _FOR 64
#define _TO 65
#define _DO 66
#define _IF 67
#define _THEN 68
#define _ELSE 69
#define _READ 70
#define _WRITE 71




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 215 "y.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  123

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   257

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,    14,    15,    16,    17,    18,     2,     2,     2,     2,
      19,    20,    21,    22,    23,    24,    25,     3,     2,     2,
      10,    11,    12,    13,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       8,     4,     5,     6,     7,     9,     2,     2,     2,     2,
       2,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    16,    20,    22,    26,    28,
      32,    36,    41,    45,    49,    53,    55,    58,    60,    64,
      66,    70,    76,    81,    85,    87,    91,    93,    95,    97,
      99,   101,   103,   105,   109,   113,   117,   119,   123,   127,
     129,   131,   135,   137,   142,   144,   146,   148,   153,   157,
     159,   161,   163,   172,   174,   176,   178,   180,   182,   184,
     191,   196,   201
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    23,    50,    -1,    26,    14,    -1,
      51,    27,    56,    28,    60,    -1,    29,    52,    23,    -1,
      30,    -1,    52,    23,    53,    -1,    53,    -1,    14,    24,
      31,    -1,    14,    24,    32,    -1,    14,    24,    31,    54,
      -1,    14,    24,    33,    -1,    19,    55,    20,    -1,    55,
      25,    15,    -1,    15,    -1,    34,    57,    -1,    35,    -1,
      57,    23,    58,    -1,    58,    -1,    59,    23,    50,    -1,
      36,    14,    21,    52,    22,    -1,    36,    14,    21,    22,
      -1,    37,    61,    38,    -1,    23,    -1,    61,    23,    62,
      -1,    62,    -1,    63,    -1,    71,    -1,    73,    -1,    74,
      -1,    75,    -1,    60,    -1,    68,     3,    64,    -1,    64,
      10,    65,    -1,    64,    11,    65,    -1,    65,    -1,    65,
      12,    66,    -1,    65,    13,    66,    -1,    66,    -1,    67,
      -1,    21,    64,    22,    -1,    68,    -1,    14,    21,    69,
      22,    -1,    15,    -1,    16,    -1,    14,    -1,    14,    19,
      69,    20,    -1,    69,    25,    70,    -1,    70,    -1,    14,
      -1,    15,    -1,    42,    64,    72,    64,    43,    62,    44,
      62,    -1,     8,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,     9,    -1,    39,    63,    40,    64,    41,    62,
      -1,    45,    21,    14,    22,    -1,    46,    21,    14,    22,
      -1,    46,    21,    18,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    61,    65,    69,    70,    74,    75,    79,
      80,    81,    82,    86,    90,    91,    95,    96,   100,   101,
     105,   109,   110,   114,   115,   119,   120,   124,   125,   126,
     127,   128,   129,   133,   137,   138,   139,   143,   144,   145,
     149,   150,   154,   155,   156,   157,   161,   162,   166,   167,
     171,   172,   176,   180,   181,   182,   183,   184,   185,   189,
     193,   197,   198
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ASSIGN", "_LESS", "_GTR", "_LEQ",
  "_GEQ", "_EQL", "_NEQ", "_PLUS", "_MINUS", "_MULT", "_DIVIDE", "_ID",
  "_ICONST", "_RCONST", "_ECONST", "_LITERAL", "_LBRACK", "_RBRACK",
  "_LPAREN", "_RPAREN", "_SEMI", "_COLON", "_COMMA", "_PROGRAM",
  "_ENDVARS", "_ENDPROCS", "_VARS", "_NOVARS", "_INTEGER", "_REAL",
  "_STRING", "_PROCS", "_NOPROCS", "_PROC", "_BEGIN", "_END", "_FOR",
  "_TO", "_DO", "_IF", "_THEN", "_ELSE", "_READ", "_WRITE", "$accept",
  "program", "title", "block", "vars", "varlist", "vardef", "bnl", "nlist",
  "procs", "proclist", "procdef", "ptitle", "code", "para", "stmt",
  "assign", "expr", "term", "fac", "val", "ids", "vallist", "it", "cond",
  "bop", "loop", "input", "output", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    17,    41,    42,    43,    44,    40,    45,
      20,    21,    22,    23,     1,     2,     3,     4,     5,    10,
      11,    12,    13,    14,    15,    16,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    51,    52,    52,    53,
      53,    53,    53,    54,    55,    55,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    63,    64,    64,    64,    65,    65,    65,
      66,    66,    67,    67,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    72,    72,    72,    72,    72,    72,    73,
      74,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     5,     3,     1,     3,     1,     3,
       3,     4,     3,     3,     3,     1,     2,     1,     3,     1,
       3,     5,     4,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       1,     3,     1,     4,     1,     1,     1,     4,     3,     1,
       1,     1,     8,     1,     1,     1,     1,     1,     1,     6,
       4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,     0,     6,     2,
       0,     0,     0,     8,     0,     0,     5,     0,    17,     0,
       9,    10,    12,     7,     0,    16,    19,     0,     0,     0,
      11,     0,     0,     0,    24,     0,     4,    15,     0,     0,
      18,    20,    46,     0,     0,     0,     0,    32,     0,    26,
      27,     0,    28,    29,    30,    31,    13,     0,    22,     0,
       0,     0,    46,    44,    45,     0,     0,    36,    39,    40,
      42,     0,     0,     0,    23,     0,    14,    21,     0,    50,
      51,     0,    49,     0,     0,     0,    54,    55,    56,    57,
      53,    58,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    33,    47,     0,     0,     0,    41,    34,    35,     0,
      37,    38,    60,    61,    62,    48,     0,    43,     0,    59,
       0,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     9,    10,    12,    13,    30,    38,    19,
      25,    26,    27,    47,    48,    49,    50,    66,    67,    68,
      69,    70,    81,    82,    52,    94,    53,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int8 yypact[] =
{
       7,     9,    29,    16,   -72,   -72,    19,    68,   -72,   -72,
      35,    56,    20,   -72,    30,    36,    68,    51,   -72,    60,
      70,   -72,   -72,   -72,    76,    69,   -72,    71,   -16,    78,
     -72,    74,    51,    19,   -72,    -5,   -72,   -72,   -10,     5,
     -72,   -72,    72,    82,    45,    77,    79,   -72,   -18,   -72,
     -72,    94,   -72,   -72,   -72,   -72,   -72,    84,   -72,    48,
      58,    61,    25,   -72,   -72,    45,    47,    62,   -72,   -72,
     -72,    88,    12,    -5,   -72,    45,   -72,   -72,    68,   -72,
     -72,    -3,   -72,    45,    58,     3,   -72,   -72,   -72,   -72,
     -72,   -72,    45,    45,    45,    45,    45,    81,    83,    85,
     -72,    66,   -72,    58,     1,     6,   -72,    62,    62,    -7,
     -72,   -72,   -72,   -72,   -72,   -72,    -5,   -72,    -5,   -72,
      64,    -5,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,   -72,    73,   -72,    65,   -15,   -72,   -72,   -72,
     -72,    80,   -72,    86,   -72,   -71,    67,   -59,   -14,   -11,
     -72,   -35,    27,    10,   -72,   -72,   -72,   -72,   -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      51,    23,   100,    92,    93,    73,    85,    34,    51,    42,
      56,    92,    93,    92,    93,    57,   101,   102,    34,    11,
      74,    35,   103,     4,   104,   106,    98,    58,   117,     5,
      99,   103,    35,     1,    43,   109,   118,    44,    51,     6,
      45,    46,   116,    16,    60,   119,    84,   120,     7,     8,
     122,    86,    87,    88,    89,    90,    91,    92,    93,    62,
      63,    64,    14,    23,    17,    18,    65,    20,    21,    22,
      77,    78,    79,    80,    95,    96,    92,    93,   107,   108,
      15,    51,    11,    51,   110,   111,    51,    24,    28,    29,
      31,    60,    32,    37,    33,    39,    42,    75,    71,    76,
      72,    83,    97,   112,    59,   113,    41,   114,   121,     0,
      61,   105,    40,   115,    36
};

static const yytype_int8 yycheck[] =
{
      35,    16,    73,    10,    11,    23,    65,    23,    43,    14,
      20,    10,    11,    10,    11,    25,    75,    20,    23,    14,
      38,    37,    25,    14,    83,    22,    14,    22,    22,     0,
      18,    25,    37,    26,    39,    94,    43,    42,    73,    23,
      45,    46,    41,    23,    19,   116,    21,   118,    29,    30,
     121,     4,     5,     6,     7,     8,     9,    10,    11,    14,
      15,    16,    27,    78,    34,    35,    21,    31,    32,    33,
      22,    23,    14,    15,    12,    13,    10,    11,    92,    93,
      24,   116,    14,   118,    95,    96,   121,    36,    28,    19,
      14,    19,    23,    15,    23,    21,    14,     3,    21,    15,
      21,    40,    14,    22,    39,    22,    33,    22,    44,    -1,
      43,    84,    32,   103,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    48,    49,    14,     0,    23,    29,    30,    50,
      51,    14,    52,    53,    27,    24,    23,    34,    35,    56,
      31,    32,    33,    53,    36,    57,    58,    59,    28,    19,
      54,    14,    23,    23,    23,    37,    60,    15,    55,    21,
      58,    50,    14,    39,    42,    45,    46,    60,    61,    62,
      63,    68,    71,    73,    74,    75,    20,    25,    22,    52,
      19,    63,    14,    15,    16,    21,    64,    65,    66,    67,
      68,    21,    21,    23,    38,     3,    15,    22,    23,    14,
      15,    69,    70,    40,    21,    64,     4,     5,     6,     7,
       8,     9,    10,    11,    72,    12,    13,    14,    14,    18,
      62,    64,    20,    25,    64,    69,    22,    65,    65,    64,
      66,    66,    22,    22,    22,    70,    41,    22,    43,    62,
      62,    44,    62
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
        case 2:

/* Line 1455 of yacc.c  */
#line 57 "MiniPbison.txt"
    { printf ("Regla: program → title _SEMI block\n"); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 61 "MiniPbison.txt"
    { printf ("Regla: title → _PROGRAM _ID\n"); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 65 "MiniPbison.txt"
    { printf ("Regla: block → vars _ENDVARS procs _ENDPROCS code\n"); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 69 "MiniPbison.txt"
    { printf ("Regla: vars → _VARS varlist _SEMI\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 70 "MiniPbison.txt"
    { printf ("Regla: vars → _NOVARS\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 74 "MiniPbison.txt"
    { printf ("Regla: varlist → varlist _SEMI vardef\n"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 75 "MiniPbison.txt"
    { printf ("Regla: varlist → vardef\n"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 79 "MiniPbison.txt"
    { printf ("Regla: vardef → _ID _COLON _INTEGER\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 80 "MiniPbison.txt"
    { printf ("Regla: vardef → _ID _COLON _REAL\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 81 "MiniPbison.txt"
    { printf ("Regla: vardef → _ID _COLON _INTEGER\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 82 "MiniPbison.txt"
    { printf ("Regla: vardef → _ID _COLON _STRING\n"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 86 "MiniPbison.txt"
    { printf ("Regla: bnl → _LBRACK nlist _RBRACK\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 90 "MiniPbison.txt"
    { printf ("Regla: nlist → nlist _COMMA _ICONST\n"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 91 "MiniPbison.txt"
    { printf ("Regla: nlist → _ICONST\n"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 95 "MiniPbison.txt"
    { printf ("Regla: procs → _PROCS proclist\n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 96 "MiniPbison.txt"
    { printf ("Regla: procs → _NOPROCS\n"); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 100 "MiniPbison.txt"
    { printf ("Regla: proclist → proclist _SEMI procdef\n"); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 101 "MiniPbison.txt"
    { printf ("Regla: proclist → procdef\n"); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 105 "MiniPbison.txt"
    { printf ("Regla: procdef → ptitle _SEMI block\n"); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 109 "MiniPbison.txt"
    { printf ("Regla: ptitle → _PROC _ID _LPAREN varlist _RPAREN\n"); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 110 "MiniPbison.txt"
    { printf ("Regla: ptitle → _PROC _ID _LPAREN  _RPAREN\n"); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 114 "MiniPbison.txt"
    { printf ("Regla: code → _BEGIN para _END\n"); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 115 "MiniPbison.txt"
    { printf ("Regla: code → _SEMI\n"); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 119 "MiniPbison.txt"
    { printf ("Regla: para → para _SEMI stmt\n"); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 120 "MiniPbison.txt"
    { printf ("Regla: para → stmt\n"); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 124 "MiniPbison.txt"
    { printf ("Regla: stmt → assign\n"); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 125 "MiniPbison.txt"
    { printf ("Regla: stmt → cond\n"); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 126 "MiniPbison.txt"
    { printf ("Regla: stmt → loop\n"); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 127 "MiniPbison.txt"
    { printf ("Regla: stmt → input\n"); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 128 "MiniPbison.txt"
    { printf ("Regla: stmt → output\n"); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 129 "MiniPbison.txt"
    { printf ("Regla: stmt → code\n"); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 133 "MiniPbison.txt"
    { printf ("Regla: assign → ids _ASSIGN expr\n"); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 137 "MiniPbison.txt"
    { printf ("Regla: expr → expr _PLUS term\n"); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 138 "MiniPbison.txt"
    { printf ("Regla: expr → expr _MINUS term\n"); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 139 "MiniPbison.txt"
    { printf ("Regla: expr → term\n"); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 143 "MiniPbison.txt"
    { printf ("Regla: term → term _MULT fac\n"); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 144 "MiniPbison.txt"
    { printf ("Regla: term → term _DIVIDE fac\n"); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 145 "MiniPbison.txt"
    { printf ("Regla: term → fac\n"); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 149 "MiniPbison.txt"
    { printf ("Regla: fac → val\n"); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 150 "MiniPbison.txt"
    { printf ("Regla: fac → _LPAREN expr _RPAREN\n"); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 154 "MiniPbison.txt"
    { printf ("Regla: val → ids\n"); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 155 "MiniPbison.txt"
    { printf ("Regla: val → _ID _LPAREN vallist _RPAREN\n"); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 156 "MiniPbison.txt"
    { printf ("Regla: val → _ICONST\n"); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 157 "MiniPbison.txt"
    { printf ("Regla: val → _RCONST\n"); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 161 "MiniPbison.txt"
    { printf ("Regla: ids → _ID\n"); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 162 "MiniPbison.txt"
    { printf ("Regla: ids →  _ID _LBRACK vallist _RBRACK\n"); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 166 "MiniPbison.txt"
    { printf ("Regla: vallist → vallist _COMMA it\n"); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 167 "MiniPbison.txt"
    { printf ("Regla: vallist → it\n"); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 171 "MiniPbison.txt"
    { printf ("Regla: it → _ID\n"); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 172 "MiniPbison.txt"
    { printf ("Regla: it → _ICONST\n"); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 176 "MiniPbison.txt"
    { printf ("Regla: cond → _IF expr bop expr _THEN stmt _ELSE stmt\n"); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 180 "MiniPbison.txt"
    { printf ("Regla: bop → _EQL\n"); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 181 "MiniPbison.txt"
    { printf ("Regla: bop → _LESS\n"); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 182 "MiniPbison.txt"
    { printf ("Regla: bop → _GTR\n"); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 183 "MiniPbison.txt"
    { printf ("Regla: bop → _LEQ\n"); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 184 "MiniPbison.txt"
    { printf ("Regla: bop → _GEQ\n"); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 185 "MiniPbison.txt"
    { printf ("Regla: bop → _NEQ\n"); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 189 "MiniPbison.txt"
    { printf ("Regla: loop → _FOR assign _TO expr _DO stmt\n"); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 193 "MiniPbison.txt"
    { printf ("Regla: input → _READ _LPAREN _ID _RPAREN\n"); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 197 "MiniPbison.txt"
    { printf ("Regla: output → _WRITE _LPAREN _ID _RPAREN\n"); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 198 "MiniPbison.txt"
    { printf ("Regla: output → _WRITE _LPAREN _LITERAL _RPAREN\n"); }
    break;



/* Line 1455 of yacc.c  */
#line 1938 "y.tab.c"
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
#line 201 "MiniPbison.txt"

