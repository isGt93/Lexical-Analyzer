/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "analyzer.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	int yylex();
	void yyerror(const char *s);

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    START = 258,
    END = 259,
    S_COMMENT1 = 260,
    S_COMMENT2 = 261,
    MULTILINE = 262,
    S_VARIABLE = 263,
    S_UNDERSCORE = 264,
    S_SEMICOLON = 265,
    O_CONCATENATION = 266,
    O_CONCATENATIONA = 267,
    W_RESERVED = 268,
    O_ARITHMETIC = 269,
    O_COMPARISON = 270,
    O_ASSIGNMENT = 271,
    O_INC_DEC = 272,
    O_LOGICAL = 273,
    O_LOGICAL2 = 274,
    T_INTEGER = 275,
    T_FLOAT = 276,
    T_STRING = 277,
    IDENTIFIER = 278,
    S_QUOTES = 279,
    T_BOOLEAN = 280,
    T_NULL = 281,
    ECHO = 282,
    EQUALS = 283,
    GLOBAL_STATIC = 284,
    S_COMA = 285,
    C_PRINT = 286,
    W_CONSTANT = 287,
    W_CONSTANT2 = 288,
    S_OPARENTESIS = 289,
    S_CPARENTESIS = 290,
    W_IF = 291,
    W_ELSEIF = 292,
    W_ELSE = 293,
    S_OBRACKETS = 294,
    S_CBRACKETS = 295,
    S_OSBRACKETS = 296,
    S_CSBRACKETS = 297,
    W_SWITCH = 298,
    S_DOUBLEP = 299,
    W_CASE = 300,
    W_BREAK = 301,
    W_DEFAULT = 302,
    W_ENDSWITCH = 303,
    W_ENDIF = 304,
    W_ENDWHILE = 305,
    W_WHILE = 306,
    W_DO = 307,
    W_FOR = 308,
    W_ENDFOR = 309,
    W_FOREACH = 310,
    W_ENDFOREACH = 311,
    S_FOREACH = 312,
    W_AS = 313,
    S_AND = 314,
    W_INCLUDE = 315,
    W_CONTINUE = 316,
    W_RETURN = 317,
    W_FUNCTION = 318,
    P_VARIABLE = 319,
    DB_RECORDSET = 320
  };
#endif
/* Tokens.  */
#define START 258
#define END 259
#define S_COMMENT1 260
#define S_COMMENT2 261
#define MULTILINE 262
#define S_VARIABLE 263
#define S_UNDERSCORE 264
#define S_SEMICOLON 265
#define O_CONCATENATION 266
#define O_CONCATENATIONA 267
#define W_RESERVED 268
#define O_ARITHMETIC 269
#define O_COMPARISON 270
#define O_ASSIGNMENT 271
#define O_INC_DEC 272
#define O_LOGICAL 273
#define O_LOGICAL2 274
#define T_INTEGER 275
#define T_FLOAT 276
#define T_STRING 277
#define IDENTIFIER 278
#define S_QUOTES 279
#define T_BOOLEAN 280
#define T_NULL 281
#define ECHO 282
#define EQUALS 283
#define GLOBAL_STATIC 284
#define S_COMA 285
#define C_PRINT 286
#define W_CONSTANT 287
#define W_CONSTANT2 288
#define S_OPARENTESIS 289
#define S_CPARENTESIS 290
#define W_IF 291
#define W_ELSEIF 292
#define W_ELSE 293
#define S_OBRACKETS 294
#define S_CBRACKETS 295
#define S_OSBRACKETS 296
#define S_CSBRACKETS 297
#define W_SWITCH 298
#define S_DOUBLEP 299
#define W_CASE 300
#define W_BREAK 301
#define W_DEFAULT 302
#define W_ENDSWITCH 303
#define W_ENDIF 304
#define W_ENDWHILE 305
#define W_WHILE 306
#define W_DO 307
#define W_FOR 308
#define W_ENDFOR 309
#define W_FOREACH 310
#define W_ENDFOREACH 311
#define S_FOREACH 312
#define W_AS 313
#define S_AND 314
#define W_INCLUDE 315
#define W_CONTINUE 316
#define W_RETURN 317
#define W_FUNCTION 318
#define P_VARIABLE 319
#define DB_RECORDSET 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 268 "y.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  342

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    78,    79,    80,    81,    82,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   120,   121,   123,   124,   126,   127,   128,
     129,   130,   131,   132,   133,   135,   136,   137,   139,   140,
     141,   142,   144,   146,   147,   148,   150,   151,   152,   153,
     154,   155,   156,   157,   159,   160,   162,   163,   164,   166,
     167,   168,   169,   170,   172,   173,   175,   176,   178,   179,
     181,   182,   183,   184,   186,   187,   189,   190,   191,   192,
     194,   195,   196,   197,   199,   201,   202,   203,   204,   206,
     207,   209,   210,   211,   212,   213,   214,   215,   217,   218,
     219,   220,   222,   223,   225,   226,   227,   228,   230,   233,
     234,   237,   238,   240,   241,   242,   244,   246,   247,   248,
     249,   251,   252,   254,   255,   256,   258,   259,   261,   262,
     264,   265,   267,   268,   269,   270,   272,   273,   274,   275,
     277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "END", "S_COMMENT1",
  "S_COMMENT2", "MULTILINE", "S_VARIABLE", "S_UNDERSCORE", "S_SEMICOLON",
  "O_CONCATENATION", "O_CONCATENATIONA", "W_RESERVED", "O_ARITHMETIC",
  "O_COMPARISON", "O_ASSIGNMENT", "O_INC_DEC", "O_LOGICAL", "O_LOGICAL2",
  "T_INTEGER", "T_FLOAT", "T_STRING", "IDENTIFIER", "S_QUOTES",
  "T_BOOLEAN", "T_NULL", "ECHO", "EQUALS", "GLOBAL_STATIC", "S_COMA",
  "C_PRINT", "W_CONSTANT", "W_CONSTANT2", "S_OPARENTESIS", "S_CPARENTESIS",
  "W_IF", "W_ELSEIF", "W_ELSE", "S_OBRACKETS", "S_CBRACKETS",
  "S_OSBRACKETS", "S_CSBRACKETS", "W_SWITCH", "S_DOUBLEP", "W_CASE",
  "W_BREAK", "W_DEFAULT", "W_ENDSWITCH", "W_ENDIF", "W_ENDWHILE",
  "W_WHILE", "W_DO", "W_FOR", "W_ENDFOR", "W_FOREACH", "W_ENDFOREACH",
  "S_FOREACH", "W_AS", "S_AND", "W_INCLUDE", "W_CONTINUE", "W_RETURN",
  "W_FUNCTION", "P_VARIABLE", "DB_RECORDSET", "$accept", "INIT", "CONTENT",
  "CONTENTP", "PRINT", "CONCATENATION", "COMMENT", "DEFINE", "EQUAL",
  "VARIABLE", "OPERATION", "MULTIPLES", "CONSTANT", "TYPES", "ESTRUCTURE",
  "AESTRUCTURE", "IF", "ELSEIF", "AIF", "AELSEIF", "CONDITION",
  "_CONDITION", "FULLCONDITION", "SWITCH", "SCONTENT", "WHILE", "DOWHILE",
  "FOR", "ESTRUCTUREFOR", "FOREACH", "AFOREACH", "ESTRUCTUREFOREACH",
  "BREAK", "INCLUDE", "CONTINUE", "RETURN", "DFUNCTION", "CFUNCTION",
  "ESTRUCTUREFUNC", "PARAMETERS", "PARAMETERSP", "DB", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF -266

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-266)))

#define YYTABLE_NINF -118

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,  2116,    22,  2157,    16,  -266,  -266,  -266,   -13,    49,
      40,     8,    41,     8,    42,    75,    70,    71,    70,    74,
      72,    82,    67,    68,   104,   117,   138,   146,   225,   289,
    -266,  -266,   352,   415,   478,   541,   604,   667,   730,   793,
     856,   919,   982,  1045,  1108,  1171,  -266,  -266,   142,  -266,
      33,   115,  -266,   135,    65,   141,    73,   161,   149,  -266,
     166,   170,   159,   162,  -266,   113,    59,   -25,    55,   183,
      78,  1360,   185,    97,   195,   116,   181,   204,    45,  -266,
     205,   182,  -266,  -266,  -266,  -266,  -266,  -266,   208,   186,
     198,    16,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,    16,
     228,   123,   221,   235,   223,   237,   219,   215,     3,     8,
       8,  -266,  -266,   157,  -266,  -266,   229,   230,   202,   236,
     242,   220,    70,   227,  -266,    70,   226,   257,   233,  1423,
    1234,   246,  1486,  1549,   232,   262,  -266,   252,  2198,   275,
    1612,  1675,   276,  1738,  1801,   290,  -266,   278,   267,  -266,
     297,  -266,    12,  1864,  -266,  -266,  -266,   288,   283,   303,
     123,   272,  -266,   285,  -266,   346,   307,     8,     8,  -266,
    -266,  -266,   315,   302,   313,   312,   202,   113,  -266,    59,
     292,  1927,    90,   304,  1990,  -266,   323,  -266,   294,  -266,
     301,  -266,   306,   337,   305,    70,  -266,   310,  -266,   334,
    -266,   324,   353,   311,   316,  -266,   330,   363,   320,  -266,
     342,   368,  -266,   357,  -266,   347,  -266,   351,   123,   364,
     123,  -266,  -266,  -266,   346,  -266,  -266,  -266,  -266,   370,
    -266,   127,   202,   113,  -266,  -266,  -266,  -266,   354,  -266,
    -266,  -266,  -266,   126,  -266,  -266,   376,   386,    70,   377,
    -266,  -266,   389,     0,  -266,  -266,   399,   400,  -266,    -7,
    -266,  -266,  -266,   123,  -266,  -266,   381,   392,   408,  -266,
    -266,  -266,     9,     9,  -266,  -266,   414,   416,  -266,   402,
     419,  -266,  -266,   214,   420,  -266,   394,  -266,   191,   387,
     390,   385,  -266,   426,    -6,   412,   420,  -266,  -266,   427,
     395,  2053,  -266,   430,   413,  -266,   433,   410,  -266,  -266,
    1297,   397,  -266,   434,   431,  -266,   404,  -266,   446,   437,
     424,   450,  -266,   452,  -266,     9,   464,  -266,   451,   456,
     445,  -266
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    42,     0,     7,
       0,     0,    63,     0,     0,     0,    47,     0,     0,    58,
       0,     0,     0,     0,    78,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,   143,    79,    80,    83,    81,    82,     0,     0,
       0,     2,     9,    11,    13,    15,    17,    19,    21,    23,
      25,    27,    29,    31,    33,    35,    37,    39,    41,     4,
       0,     0,     0,     0,     0,     0,   158,     0,    50,     0,
       0,    48,    45,    74,    59,    46,     0,     0,     0,   103,
     105,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,   142,
       0,   144,     0,     0,     3,     5,    64,     0,     0,     0,
      68,     0,    65,   156,   149,     0,     0,     0,     0,    51,
      49,    54,     0,     0,   100,   107,     0,     0,   104,    90,
       0,     0,    96,     0,     0,    94,     0,    85,     0,    86,
       0,   120,     0,     0,     0,     0,   136,     0,    44,     0,
     126,     0,     0,     0,     0,   130,     0,     0,     0,   138,
       0,     0,   145,     0,   151,     0,   147,     0,    66,     0,
      72,    62,    69,   160,     0,   159,   148,    52,    53,     0,
      75,     0,     0,     0,   102,   106,    91,    93,     0,    97,
      98,    95,    84,     0,   118,   121,     0,     0,     0,     0,
     124,   127,     0,     0,   129,   132,     0,     0,   139,   152,
     150,   146,    67,    70,    73,   157,    74,     0,     0,   101,
     108,    92,     0,     0,   119,   123,     0,     0,   125,     0,
       0,   131,   140,     0,     0,    71,     0,    76,     0,     0,
       0,     0,   122,     0,     0,     0,     0,   154,   153,     0,
       0,     0,   109,     0,     0,   133,     0,     0,   155,    77,
       0,   116,   110,     0,     0,   134,     0,   114,     0,     0,
       0,     0,   115,     0,   135,   111,     0,   112,     0,     0,
       0,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,     2,    -1,   -71,  -266,   -10,  -266,  -266,   466,   475,
    -166,   308,  -266,    -9,   356,   358,  -266,   300,  -266,   299,
    -123,   -17,  -178,  -266,  -265,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -246,
    -168,  -266
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   146,   147,    27,    57,    28,    29,    52,    30,
     169,    60,    31,   129,    66,    67,    32,   134,    33,   138,
     130,    68,   131,    34,   300,    35,    36,    37,    73,    38,
      39,    75,   148,    40,    41,    42,    43,    44,    90,   225,
     117,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    70,    48,    61,   232,   185,    49,   235,   289,   245,
      50,    55,   135,   136,   177,    88,    55,   178,   301,     1,
     223,   293,    46,   294,   137,    56,    92,    93,    94,   315,
      56,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   116,   121,   224,   308,    58,
     110,   316,    51,   157,   298,   327,   299,    53,     9,   290,
     318,   111,   272,   244,   274,   280,   275,   158,   198,   199,
     337,   202,   204,   114,    54,    76,    62,   208,    79,   211,
     213,    55,   216,   218,   119,    83,    84,    85,    80,    77,
      86,    87,   227,   164,   139,    56,   132,   133,    63,   140,
     115,    78,   170,   120,    65,    69,    72,   295,   179,   180,
     181,   165,    81,    71,    82,   190,    74,   142,   193,   279,
     248,   127,   143,   250,    83,    84,    85,   135,   136,    86,
      87,   167,   128,    83,    84,    85,   150,   168,    86,    87,
      89,   151,    91,    83,    84,    85,   109,    47,    86,    87,
      -8,     5,     6,     7,     8,   153,   112,   277,   113,   230,
     154,   170,   278,     9,   118,   282,   116,   237,   238,    10,
     283,   122,   123,    11,   110,    12,   124,    13,    14,    15,
     125,   126,    16,    -8,    -8,   111,    -8,   182,   257,    17,
     111,   141,    -8,   149,    -8,    -8,    -8,    18,    19,    20,
      -8,    21,    -8,   152,   155,   160,    22,    23,    24,    25,
     127,    83,    84,    85,   156,   159,    86,    87,   161,   170,
     162,   170,    83,    84,    85,   116,    47,    86,    87,   -10,
       5,     6,     7,     8,    83,    84,    85,   163,   166,    86,
      87,   286,     9,   171,   306,   172,   173,   174,    10,   175,
     176,   186,    11,   184,    12,   188,    13,    14,    15,   183,
     187,    16,   -10,   -10,   170,   -10,   191,   195,    17,   200,
     194,   -10,   206,   -10,   -10,   -10,    18,    19,    20,   -10,
      21,   -10,   196,   205,   307,    22,    23,    24,    25,   310,
      47,   229,   207,   -12,     5,     6,     7,     8,   209,   214,
     219,   220,   221,    83,    84,    85,     9,   222,    86,    87,
     321,   228,    10,   231,   233,   234,    11,   236,    12,   326,
      13,    14,    15,   239,   241,    16,   -12,   -12,   242,   -12,
     243,   139,    17,   251,   252,   -12,   253,   -12,   -12,   -12,
      18,    19,    20,   -12,    21,   -12,   254,   255,   140,    22,
      23,    24,    25,    47,   114,   256,   -14,     5,     6,     7,
       8,   258,   259,   261,   260,   262,    83,    84,    85,     9,
     264,    86,    87,   265,   263,    10,   266,   267,   268,    11,
     269,    12,   270,    13,    14,    15,   284,   273,    16,   -14,
     -14,   271,   -14,   276,   281,    17,   285,   287,   -14,   288,
     -14,   -14,   -14,    18,    19,    20,   -14,    21,   -14,   291,
     292,   182,    22,    23,    24,    25,    47,   296,   297,   -16,
       5,     6,     7,     8,   302,   304,   303,   305,   223,   309,
     312,   311,     9,   313,   314,   317,   323,   319,    10,   320,
     322,   324,    11,   328,    12,   325,    13,    14,    15,   329,
     331,    16,   -16,   -16,   330,   -16,   332,   333,    17,   334,
     335,   -16,   336,   -16,   -16,   -16,    18,    19,    20,   -16,
      21,   -16,   338,   340,   339,    22,    23,    24,    25,    47,
     341,    64,   -18,     5,     6,     7,     8,    59,   189,   246,
     240,   249,     0,   192,     0,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,    12,     0,    13,
      14,    15,     0,     0,    16,   -18,   -18,     0,   -18,     0,
       0,    17,     0,     0,   -18,     0,   -18,   -18,   -18,    18,
      19,    20,   -18,    21,   -18,     0,     0,     0,    22,    23,
      24,    25,    47,     0,     0,   -20,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    10,     0,     0,     0,    11,     0,
      12,     0,    13,    14,    15,     0,     0,    16,   -20,   -20,
       0,   -20,     0,     0,    17,     0,     0,   -20,     0,   -20,
     -20,   -20,    18,    19,    20,   -20,    21,   -20,     0,     0,
       0,    22,    23,    24,    25,    47,     0,     0,   -22,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,     0,    12,     0,    13,    14,    15,     0,     0,
      16,   -22,   -22,     0,   -22,     0,     0,    17,     0,     0,
     -22,     0,   -22,   -22,   -22,    18,    19,    20,   -22,    21,
     -22,     0,     0,     0,    22,    23,    24,    25,    47,     0,
       0,   -24,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,    12,     0,    13,    14,
      15,     0,     0,    16,   -24,   -24,     0,   -24,     0,     0,
      17,     0,     0,   -24,     0,   -24,   -24,   -24,    18,    19,
      20,   -24,    21,   -24,     0,     0,     0,    22,    23,    24,
      25,    47,     0,     0,   -26,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    11,     0,    12,
       0,    13,    14,    15,     0,     0,    16,   -26,   -26,     0,
     -26,     0,     0,    17,     0,     0,   -26,     0,   -26,   -26,
     -26,    18,    19,    20,   -26,    21,   -26,     0,     0,     0,
      22,    23,    24,    25,    47,     0,     0,   -28,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,    12,     0,    13,    14,    15,     0,     0,    16,
     -28,   -28,     0,   -28,     0,     0,    17,     0,     0,   -28,
       0,   -28,   -28,   -28,    18,    19,    20,   -28,    21,   -28,
       0,     0,     0,    22,    23,    24,    25,    47,     0,     0,
     -30,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,    12,     0,    13,    14,    15,
       0,     0,    16,   -30,   -30,     0,   -30,     0,     0,    17,
       0,     0,   -30,     0,   -30,   -30,   -30,    18,    19,    20,
     -30,    21,   -30,     0,     0,     0,    22,    23,    24,    25,
      47,     0,     0,   -32,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,    12,     0,
      13,    14,    15,     0,     0,    16,   -32,   -32,     0,   -32,
       0,     0,    17,     0,     0,   -32,     0,   -32,   -32,   -32,
      18,    19,    20,   -32,    21,   -32,     0,     0,     0,    22,
      23,    24,    25,    47,     0,     0,   -34,     5,     6,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    11,
       0,    12,     0,    13,    14,    15,     0,     0,    16,   -34,
     -34,     0,   -34,     0,     0,    17,     0,     0,   -34,     0,
     -34,   -34,   -34,    18,    19,    20,   -34,    21,   -34,     0,
       0,     0,    22,    23,    24,    25,    47,     0,     0,   -36,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,    12,     0,    13,    14,    15,     0,
       0,    16,   -36,   -36,     0,   -36,     0,     0,    17,     0,
       0,   -36,     0,   -36,   -36,   -36,    18,    19,    20,   -36,
      21,   -36,     0,     0,     0,    22,    23,    24,    25,    47,
       0,     0,   -38,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,    12,     0,    13,
      14,    15,     0,     0,    16,   -38,   -38,     0,   -38,     0,
       0,    17,     0,     0,   -38,     0,   -38,   -38,   -38,    18,
      19,    20,   -38,    21,   -38,     0,     0,     0,    22,    23,
      24,    25,    47,     0,     0,   -40,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    10,     0,     0,     0,    11,     0,
      12,     0,    13,    14,    15,     0,     0,    16,   -40,   -40,
       0,   -40,     0,     0,    17,     0,     0,   -40,     0,   -40,
     -40,   -40,    18,    19,    20,   -40,    21,   -40,     0,     0,
       0,    22,    23,    24,    25,    47,     0,     0,     0,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,     0,    12,     0,    13,    14,    15,     0,     0,
      16,   -87,   -87,     0,     0,     0,     0,    17,     0,     0,
     145,     0,     0,   -87,     0,    18,    19,    20,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,    47,     0,
       0,     0,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,    12,     0,    13,    14,
      15,     0,     0,    16,     0,     0,     0,  -113,     0,     0,
      17,     0,   298,     0,   299,  -113,     0,     0,    18,    19,
      20,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,    47,     0,     0,     0,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    11,     0,    12,
       0,    13,    14,    15,     0,     0,    16,     0,     0,     0,
     144,     0,     0,    17,     0,     0,   145,     0,     0,     0,
       0,    18,    19,    20,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,    47,     0,     0,     0,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,    12,     0,    13,    14,    15,     0,     0,    16,
       0,     0,     0,   197,     0,     0,    17,     0,     0,   145,
       0,     0,     0,     0,    18,    19,    20,     0,    21,     0,
       0,     0,     0,    22,    23,    24,    25,    47,     0,     0,
       0,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,    12,     0,    13,    14,    15,
       0,     0,    16,     0,     0,     0,   201,     0,     0,    17,
       0,     0,   145,     0,     0,     0,     0,    18,    19,    20,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
      47,     0,     0,     0,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,    12,     0,
      13,    14,    15,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    17,     0,     0,   145,     0,     0,     0,   203,
      18,    19,    20,     0,    21,     0,     0,     0,     0,    22,
      23,    24,    25,    47,     0,     0,     0,     5,     6,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    11,
       0,    12,     0,    13,    14,    15,     0,     0,    16,     0,
       0,     0,   210,     0,     0,    17,     0,     0,   145,     0,
       0,     0,     0,    18,    19,    20,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,    47,     0,     0,     0,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,    12,     0,    13,    14,    15,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    17,     0,
       0,   145,     0,     0,     0,     0,    18,    19,    20,   212,
      21,     0,     0,     0,     0,    22,    23,    24,    25,    47,
       0,     0,     0,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,    12,     0,    13,
      14,    15,     0,     0,    16,     0,     0,     0,   215,     0,
       0,    17,     0,     0,   145,     0,     0,     0,     0,    18,
      19,    20,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,    47,     0,     0,     0,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    10,     0,     0,     0,    11,     0,
      12,     0,    13,    14,    15,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    17,     0,     0,   145,     0,     0,
       0,     0,    18,    19,    20,     0,    21,   217,     0,     0,
       0,    22,    23,    24,    25,    47,     0,     0,     0,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,     0,    12,     0,    13,    14,    15,     0,     0,
      16,     0,     0,     0,   226,     0,     0,    17,     0,     0,
     145,     0,     0,     0,     0,    18,    19,    20,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,    47,     0,
       0,     0,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,    12,     0,    13,    14,
      15,     0,     0,    16,     0,     0,     0,   247,     0,     0,
      17,     0,     0,   145,     0,     0,     0,     0,    18,    19,
      20,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,    47,     0,     0,     0,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    11,     0,    12,
       0,    13,    14,    15,     0,     0,    16,     0,     0,     0,
       0,     0,     0,    17,     0,     0,   145,     0,     0,   -99,
       0,    18,    19,    20,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,    47,     0,     0,     0,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,    12,     0,    13,    14,    15,     0,     0,    16,
       0,     0,     0,  -117,     0,     0,    17,     0,     0,     0,
       0,  -117,     0,     0,    18,    19,    20,     0,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     3,     0,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,    12,     0,    13,    14,    15,
       0,     0,    16,     0,     0,     0,     0,     0,    47,    17,
       0,   -42,     5,     6,     7,     8,     0,    18,    19,    20,
       0,    21,     0,     0,     9,     0,    22,    23,    24,    25,
      10,     0,     0,     0,    11,     0,    12,     0,    13,    14,
      15,     0,     0,    16,     0,     0,     0,     0,     0,    47,
      17,     0,     0,     5,     6,     7,     8,     0,    18,    19,
      20,     0,    21,     0,     0,     9,     0,    22,    23,    24,
      25,    10,     0,     0,     0,    11,     0,    12,     0,    13,
      14,    15,     0,     0,    16,     0,     0,     0,     0,     0,
       0,    17,     0,     0,   145,     0,     0,     0,     0,    18,
      19,    20,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25
};

static const yytype_int16 yycheck[] =
{
       1,    18,     3,    13,   170,   128,     4,   175,     8,   187,
      23,     8,    37,    38,    11,    24,     8,    14,   283,     3,
       8,    28,     0,    30,    49,    22,    27,    28,    29,    35,
      22,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    54,    56,    35,   294,     8,
      17,    57,    65,     8,    45,   320,    47,     8,    17,    59,
     306,    28,   228,   186,   230,   243,   234,    22,   139,   140,
     335,   142,   143,     8,    34,     8,    34,   148,    10,   150,
     151,     8,   153,   154,    11,    20,    21,    22,    20,    22,
      25,    26,   163,    91,    39,    22,    37,    38,    23,    44,
      35,    34,   111,    30,    34,    34,    34,   273,   118,   119,
     120,   109,     8,    39,    10,   132,    34,    39,   135,   242,
     191,     8,    44,   194,    20,    21,    22,    37,    38,    25,
      26,     8,    19,    20,    21,    22,    39,    14,    25,    26,
      23,    44,     4,    20,    21,    22,     4,     1,    25,    26,
       4,     5,     6,     7,     8,    39,    41,    30,    23,   168,
      44,   170,    35,    17,    23,    39,   175,   177,   178,    23,
      44,    10,    23,    27,    17,    29,    10,    31,    32,    33,
      10,    22,    36,    37,    38,    28,    40,    30,   205,    43,
      28,     8,    46,     8,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     8,    23,    23,    60,    61,    62,    63,
       8,    20,    21,    22,    10,    10,    25,    26,    10,   228,
      34,   230,    20,    21,    22,   234,     1,    25,    26,     4,
       5,     6,     7,     8,    20,    21,    22,    39,    10,    25,
      26,   258,    17,    22,    30,    10,    23,    10,    23,    30,
      35,    15,    27,    23,    29,    35,    31,    32,    33,    30,
      18,    36,    37,    38,   273,    40,    39,    10,    43,    23,
      44,    46,    10,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    49,    51,   293,    60,    61,    62,    63,   298,
       1,     8,    40,     4,     5,     6,     7,     8,    23,    23,
      10,    23,    35,    20,    21,    22,    17,    10,    25,    26,
     311,    23,    23,    10,    42,    30,    27,    10,    29,   320,
      31,    32,    33,     8,    22,    36,    37,    38,    15,    40,
      18,    39,    43,    10,    40,    46,    35,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    40,    10,    44,    60,
      61,    62,    63,     1,     8,    50,     4,     5,     6,     7,
       8,    51,    28,    10,    40,    54,    20,    21,    22,    17,
      40,    25,    26,    10,    58,    23,    56,    35,    10,    27,
      23,    29,    35,    31,    32,    33,    10,    23,    36,    37,
      38,    40,    40,    23,    40,    43,    10,    20,    46,    10,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    10,
      10,    30,    60,    61,    62,    63,     1,    25,    10,     4,
       5,     6,     7,     8,    10,    23,    10,     8,     8,    35,
      40,    44,    17,    48,     8,    23,    23,    10,    23,    44,
      10,     8,    27,    46,    29,    35,    31,    32,    33,    15,
      46,    36,    37,    38,    23,    40,    10,    20,    43,    35,
      10,    46,    10,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     8,    17,    23,    60,    61,    62,    63,     1,
      35,    15,     4,     5,     6,     7,     8,    12,   132,   189,
     182,   192,    -1,   135,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    -1,    -1,    36,    37,    38,    -1,    40,    -1,
      -1,    43,    -1,    -1,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    60,    61,
      62,    63,     1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    -1,    -1,    36,    37,    38,
      -1,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    60,    61,    62,    63,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,    -1,
      36,    37,    38,    -1,    40,    -1,    -1,    43,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    60,    61,    62,    63,     1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    -1,    -1,    36,    37,    38,    -1,    40,    -1,    -1,
      43,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    60,    61,    62,
      63,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    -1,    -1,    36,    37,    38,    -1,
      40,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    61,    62,    63,     1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    -1,    -1,    36,
      37,    38,    -1,    40,    -1,    -1,    43,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    60,    61,    62,    63,     1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      -1,    -1,    36,    37,    38,    -1,    40,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    61,    62,    63,
       1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    -1,
      31,    32,    33,    -1,    -1,    36,    37,    38,    -1,    40,
      -1,    -1,    43,    -1,    -1,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    60,
      61,    62,    63,     1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    33,    -1,    -1,    36,    37,
      38,    -1,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    61,    62,    63,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,
      -1,    36,    37,    38,    -1,    40,    -1,    -1,    43,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    60,    61,    62,    63,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    -1,    -1,    36,    37,    38,    -1,    40,    -1,
      -1,    43,    -1,    -1,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    60,    61,
      62,    63,     1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    -1,    -1,    36,    37,    38,
      -1,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    60,    61,    62,    63,     1,    -1,    -1,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,    -1,
      36,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    -1,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,     1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    45,    -1,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,     1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,     1,    -1,    -1,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,     1,    -1,    -1,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
       1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    -1,
      31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,     1,    -1,    -1,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,     1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,     1,
      -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,     1,    -1,    -1,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    -1,    -1,
      -1,    60,    61,    62,    63,     1,    -1,    -1,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,     1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,     1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    49,
      -1,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,     1,    -1,    -1,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,     1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,     1,    43,
      -1,     4,     5,     6,     7,     8,    -1,    51,    52,    53,
      -1,    55,    -1,    -1,    17,    -1,    60,    61,    62,    63,
      23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,     1,
      43,    -1,    -1,     5,     6,     7,     8,    -1,    51,    52,
      53,    -1,    55,    -1,    -1,    17,    -1,    60,    61,    62,
      63,    23,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,     1,     4,     5,     6,     7,     8,    17,
      23,    27,    29,    31,    32,    33,    36,    43,    51,    52,
      53,    55,    60,    61,    62,    63,    68,    70,    72,    73,
      75,    78,    82,    84,    89,    91,    92,    93,    95,    96,
      99,   100,   101,   102,   103,   107,     0,     1,    68,    67,
      23,    65,    74,     8,    34,     8,    22,    71,     8,    75,
      77,    71,    34,    23,    74,    34,    80,    81,    87,    34,
      87,    39,    34,    94,    34,    97,     8,    22,    34,    10,
      20,     8,    10,    20,    21,    22,    25,    26,    79,    23,
     104,     4,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,     4,
      17,    28,    41,    23,     8,    35,    79,   106,    23,    11,
      30,    71,    10,    23,    10,    10,    22,     8,    19,    79,
      86,    88,    37,    38,    83,    37,    38,    49,    85,    39,
      44,     8,    39,    44,    40,    46,    68,    69,    98,     8,
      39,    44,     8,    39,    44,    23,    10,     8,    22,    10,
      23,    10,    34,    39,    67,    67,    10,     8,    14,    76,
      79,    22,    10,    23,    10,    30,    35,    11,    14,    71,
      71,    71,    30,    30,    23,    86,    15,    18,    35,    80,
      87,    39,    81,    87,    44,    10,    49,    40,    69,    69,
      23,    40,    69,    50,    69,    51,    10,    40,    69,    23,
      40,    69,    54,    69,    23,    40,    69,    56,    69,    10,
      23,    35,    10,     8,    35,   105,    40,    69,    23,     8,
      79,    10,    76,    42,    30,   106,    10,    71,    71,     8,
      77,    22,    15,    18,    86,    88,    83,    40,    69,    85,
      69,    10,    40,    35,    40,    10,    50,    87,    51,    28,
      40,    10,    54,    58,    40,    10,    56,    35,    10,    23,
      35,    40,    76,    23,    76,   106,    23,    30,    35,    86,
      88,    40,    39,    44,    10,    10,    87,    20,    10,     8,
      59,    10,    10,    28,    30,    76,    25,    10,    45,    47,
      90,    90,    10,    10,    23,     8,    30,    79,   105,    35,
      79,    44,    40,    48,     8,    35,    57,    23,   105,    10,
      44,    68,    10,    23,     8,    35,    68,    90,    46,    15,
      23,    46,    10,    20,    35,    10,    10,    90,     8,    23,
      17,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    73,    73,
      73,    73,    74,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    85,    85,    85,    85,
      86,    86,    86,    86,    87,    88,    88,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    92,    92,    93,    93,    93,    93,    94,    95,
      95,    96,    96,    97,    97,    97,    98,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   106,   106,   106,   106,
     107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     4,     5,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     2,     3,     3,     1,     2,     3,
       2,     3,     4,     4,     3,     1,     1,     1,     2,     3,
       1,     1,     4,     2,     4,     4,     2,     3,     1,     2,
       3,     4,     2,     3,     2,     4,     7,     9,     2,     1,
       1,     1,     1,     1,     4,     3,     3,     2,     2,     3,
       2,     3,     4,     3,     4,     5,     2,     3,     3,     2,
       2,     4,     3,     1,     3,     1,     3,     2,     4,     8,
       9,     6,     7,     3,     4,     5,     3,     2,     5,     6,
       4,     5,     7,     6,     5,     6,     4,     5,    15,     5,
       4,     6,     5,     7,     8,    10,     2,     3,     4,     5,
       6,     2,     3,     2,     3,     4,     5,     4,     5,     4,
       4,     3,     2,     4,     4,     5,     2,     4,     1,     3,
       5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 2067 "y.tab.c" /* yacc.c:1646  */
      default: break;
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 278 "analyzer.y" /* yacc.c:1906  */


int main()
{
	printf("1");
	if(yyparse()==0)
	printf("\nAnalisis concluido.\n");
}
void yyerror(const char* mensaje)
{
	extern int yylineno;
	extern char yytext[];
	printf("\nMensaje: %s Line: %d Text: %s\n",mensaje, yylineno, yytext);

	FILE *fp;
	fp = fopen("errors.out", "a");
	fprintf(fp, "Message: %s Line: %d Text: %s\n",mensaje, yylineno, yytext);
	fclose(fp);
}
