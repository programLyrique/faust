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
#line 5 "faustparser.y" /* yacc.c:339  */


#include "global.hh"

#include "tree.hh"
#include "xtended.hh"
#include "boxes.hh"
#include "prim2.hh"
#include "signals.hh"
#include "errormsg.hh"
#include "sourcereader.hh"
#include "doc.hh"
#include "ppbox.hh"

#include <string>
#include <list>

#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#define YYMAXDEPTH	100000

using namespace std;

extern char* 		yytext;
extern const char* 	yyfilename;
extern int 			yylineno;
extern int 			yyerr;

int yylex();

//----------------------------------------------------------
// unquote() : remove enclosing quotes and carriage return
// characters from string. Returns a Tree
//----------------------------------------------------------
inline char replaceCR(char c)
{
	return (c!='\n') ? c : ' ';
}

Tree unquote(char* str)
{
    size_t size = strlen(str) + 1;
    
    //-----------copy unquoted filename-------------
    char* buf = (char*)alloca(size);
    int j=0;

    if (str[0] == '"') {
        //it is a quoted string, we remove the quotes
        for (int i=1; j<size-1 && str[i];) {
            buf[j++] = replaceCR(str[i++]);
        }
        // remove last quote
        if (j>0) buf[j-1] = 0;
    } else {
        for (int i=0; j<size-1 && str[i];) {
            buf[j++] = replaceCR(str[i++]);
        }
    }
    buf[j] = 0;

    return tree(buf);
    //----------------------------------------------
}


#line 133 "faustparser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "faustparser.hpp".  */
#ifndef YY_YY_FAUSTPARSER_HPP_INCLUDED
# define YY_YY_FAUSTPARSER_HPP_INCLUDED
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
    WITH = 258,
    LETREC = 259,
    SPLIT = 260,
    MIX = 261,
    SEQ = 262,
    PAR = 263,
    REC = 264,
    LT = 265,
    LE = 266,
    EQ = 267,
    GT = 268,
    GE = 269,
    NE = 270,
    ADD = 271,
    SUB = 272,
    OR = 273,
    MUL = 274,
    DIV = 275,
    MOD = 276,
    AND = 277,
    XOR = 278,
    LSH = 279,
    RSH = 280,
    POWOP = 281,
    FDELAY = 282,
    DELAY1 = 283,
    APPL = 284,
    DOT = 285,
    MEM = 286,
    PREFIX = 287,
    INTCAST = 288,
    FLOATCAST = 289,
    FFUNCTION = 290,
    FCONSTANT = 291,
    FVARIABLE = 292,
    BUTTON = 293,
    CHECKBOX = 294,
    VSLIDER = 295,
    HSLIDER = 296,
    NENTRY = 297,
    VGROUP = 298,
    HGROUP = 299,
    TGROUP = 300,
    HBARGRAPH = 301,
    VBARGRAPH = 302,
    SOUNDFILE = 303,
    ATTACH = 304,
    ACOS = 305,
    ASIN = 306,
    ATAN = 307,
    ATAN2 = 308,
    COS = 309,
    SIN = 310,
    TAN = 311,
    EXP = 312,
    LOG = 313,
    LOG10 = 314,
    POWFUN = 315,
    SQRT = 316,
    ABS = 317,
    MIN = 318,
    MAX = 319,
    FMOD = 320,
    REMAINDER = 321,
    FLOOR = 322,
    CEIL = 323,
    RINT = 324,
    RDTBL = 325,
    RWTBL = 326,
    SELECT2 = 327,
    SELECT3 = 328,
    INT = 329,
    FLOAT = 330,
    LAMBDA = 331,
    WIRE = 332,
    CUT = 333,
    ENDDEF = 334,
    VIRG = 335,
    LPAR = 336,
    RPAR = 337,
    LBRAQ = 338,
    RBRAQ = 339,
    LCROC = 340,
    RCROC = 341,
    DEF = 342,
    IMPORT = 343,
    COMPONENT = 344,
    LIBRARY = 345,
    ENVIRONMENT = 346,
    WAVEFORM = 347,
    ENABLE = 348,
    CONTROL = 349,
    IPAR = 350,
    ISEQ = 351,
    ISUM = 352,
    IPROD = 353,
    INPUTS = 354,
    OUTPUTS = 355,
    STRING = 356,
    FSTRING = 357,
    IDENT = 358,
    EXTRA = 359,
    DECLARE = 360,
    CASE = 361,
    ARROW = 362,
    VECTORIZE = 363,
    SERIALIZE = 364,
    HASH = 365,
    RATE = 366,
    UPSAMPLE = 367,
    DOWNSAMPLE = 368,
    BDOC = 369,
    EDOC = 370,
    BEQN = 371,
    EEQN = 372,
    BDGM = 373,
    EDGM = 374,
    BLST = 375,
    ELST = 376,
    BMETADATA = 377,
    EMETADATA = 378,
    DOCCHAR = 379,
    NOTICE = 380,
    LISTING = 381,
    LSTTRUE = 382,
    LSTFALSE = 383,
    LSTDEPENDENCIES = 384,
    LSTMDOCTAGS = 385,
    LSTDISTRIBUTED = 386,
    LSTEQ = 387,
    LSTQ = 388
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 73 "faustparser.y" /* yacc.c:355  */

	CTree* 	exp;
	char* str;
	string* cppstr;
	bool b;

#line 314 "faustparser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_FAUSTPARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 331 "faustparser.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   846

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   388

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   324,   324,   327,   328,   330,   331,   335,   336,   343,
     344,   347,   348,   349,   350,   351,   352,   356,   357,   358,
     359,   360,   363,   364,   367,   368,   369,   370,   371,   372,
     375,   376,   379,   382,   385,   388,   391,   392,   395,   396,
     397,   400,   401,   404,   407,   408,   409,   412,   413,   416,
     419,   422,   423,   426,   427,   428,   429,   430,   431,   432,
     433,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     446,   447,   448,   450,   451,   453,   454,   455,   456,   457,
     458,   460,   461,   463,   466,   467,   469,   470,   472,   473,
     475,   476,   478,   479,   481,   482,   484,   485,   486,   487,
     488,   489,   491,   492,   493,   495,   496,   498,   499,   500,
     501,   502,   503,   505,   506,   507,   510,   511,   512,   513,
     514,   515,   516,   518,   519,   520,   521,   522,   523,   525,
     526,   527,   529,   530,   532,   533,   534,   537,   538,   540,
     541,   543,   544,   545,   547,   548,   550,   551,   553,   554,
     556,   557,   560,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   581,   582,   583,   584,   586,   587,   592,   595,   600,
     601,   604,   605,   606,   607,   608,   611,   614,   617,   618,
     623,   627,   631,   635,   640,   643,   650,   654,   657,   662,
     665,   668,   671,   674,   677,   680,   683,   687,   690,   693,
     700,   701,   702,   704,   705,   706,   709,   712,   713,   716,
     717,   720,   724,   725
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WITH", "LETREC", "SPLIT", "MIX", "SEQ",
  "PAR", "REC", "LT", "LE", "EQ", "GT", "GE", "NE", "ADD", "SUB", "OR",
  "MUL", "DIV", "MOD", "AND", "XOR", "LSH", "RSH", "POWOP", "FDELAY",
  "DELAY1", "APPL", "DOT", "MEM", "PREFIX", "INTCAST", "FLOATCAST",
  "FFUNCTION", "FCONSTANT", "FVARIABLE", "BUTTON", "CHECKBOX", "VSLIDER",
  "HSLIDER", "NENTRY", "VGROUP", "HGROUP", "TGROUP", "HBARGRAPH",
  "VBARGRAPH", "SOUNDFILE", "ATTACH", "ACOS", "ASIN", "ATAN", "ATAN2",
  "COS", "SIN", "TAN", "EXP", "LOG", "LOG10", "POWFUN", "SQRT", "ABS",
  "MIN", "MAX", "FMOD", "REMAINDER", "FLOOR", "CEIL", "RINT", "RDTBL",
  "RWTBL", "SELECT2", "SELECT3", "INT", "FLOAT", "LAMBDA", "WIRE", "CUT",
  "ENDDEF", "VIRG", "LPAR", "RPAR", "LBRAQ", "RBRAQ", "LCROC", "RCROC",
  "DEF", "IMPORT", "COMPONENT", "LIBRARY", "ENVIRONMENT", "WAVEFORM",
  "ENABLE", "CONTROL", "IPAR", "ISEQ", "ISUM", "IPROD", "INPUTS",
  "OUTPUTS", "STRING", "FSTRING", "IDENT", "EXTRA", "DECLARE", "CASE",
  "ARROW", "VECTORIZE", "SERIALIZE", "HASH", "RATE", "UPSAMPLE",
  "DOWNSAMPLE", "BDOC", "EDOC", "BEQN", "EEQN", "BDGM", "EDGM", "BLST",
  "ELST", "BMETADATA", "EMETADATA", "DOCCHAR", "NOTICE", "LISTING",
  "LSTTRUE", "LSTFALSE", "LSTDEPENDENCIES", "LSTMDOCTAGS",
  "LSTDISTRIBUTED", "LSTEQ", "LSTQ", "$accept", "program", "stmtlist",
  "deflist", "reclist", "vallist", "number", "statement", "doc", "docelem",
  "doctxt", "doceqn", "docdgm", "docntc", "doclst", "lstattrlist",
  "lstattrdef", "lstattrval", "docmtd", "definition", "recinition",
  "defname", "recname", "params", "expression", "infixexp", "primitive",
  "ident", "name", "arglist", "argument", "string", "uqstring", "fstring",
  "fpar", "fseq", "fsum", "fprod", "finputs", "foutputs", "ffunction",
  "fconst", "fvariable", "button", "checkbox", "vslider", "hslider",
  "nentry", "vgroup", "hgroup", "tgroup", "vbargraph", "hbargraph",
  "soundfile", "signature", "fun", "typelist", "rulelist", "rule", "type", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388
};
# endif

#define YYPACT_NINF -360

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-360)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -360,    45,    16,  -360,     9,    24,  -360,    15,  -360,  -360,
    -360,    62,  -360,  -360,    41,  -360,    14,   609,   517,   517,
    -360,    77,  -360,    50,    90,  -360,   517,   517,  -360,    15,
    -360,  -360,    79,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,   -52,    57,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     134,   150,   153,   168,   180,   190,   196,   209,   214,   219,
     235,   260,   274,   279,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,   284,  -360,  -360,   517,   413,   292,   310,   130,   236,
    -360,  -360,   311,   318,   330,   332,   339,   340,   242,  -360,
    -360,  -360,  -360,  -360,   664,  -360,  -360,    46,   361,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,   306,
     664,   333,   362,  -360,    27,     6,   227,   256,  -360,  -360,
    -360,  -360,  -360,  -360,    59,    59,    59,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,   247,    34,
    -360,   621,    41,    41,  -360,   301,   247,   247,   247,   247,
     517,   517,   411,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,  -360,   247,   517,  -360,   517,   355,   517,   517,   517,
     517,   360,   410,   517,   517,   517,   517,   517,  -360,  -360,
    -360,  -360,  -360,  -360,   363,   364,   365,  -360,  -360,  -360,
    -360,   492,   398,    15,    15,   432,   433,   509,   510,   512,
     516,   537,   538,   539,   588,   589,    75,  -360,  -360,  -360,
     518,   519,    19,   189,   192,  -360,  -360,    36,  -360,   591,
     595,   596,   597,    44,    52,   517,   -60,  -360,   692,   692,
     692,   692,   692,   692,   731,   731,   731,   296,   296,   296,
     296,   296,   296,   296,   319,   220,  -360,    76,     5,   361,
     517,   361,   361,   161,  -360,  -360,  -360,   331,   331,    55,
     271,  -360,   485,   486,   488,   251,  -360,     8,   614,   616,
    -360,  -360,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   247,   598,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     301,  -360,   517,   517,   517,   517,  -360,  -360,   137,  -360,
    -360,  -360,  -360,  -360,   649,    26,    18,   244,   244,   244,
    -360,  -360,   642,   398,   120,   251,   251,   381,   400,   690,
      66,    73,    91,   732,   757,   253,  -360,   592,  -360,   762,
     790,   795,   800,   586,  -360,  -360,   622,   247,  -360,  -360,
     613,  -360,  -360,   570,   571,   572,    50,    69,  -360,   138,
    -360,   639,   641,   517,   517,   517,  -360,  -360,  -360,   517,
     517,  -360,   517,   517,   517,   517,   517,   517,  -360,  -360,
     517,  -360,  -360,  -360,   644,   398,   298,    59,  -360,  -360,
    -360,   812,   817,   822,   263,   269,   132,   158,   191,   238,
     248,   656,   663,  -360,   651,  -360,   139,  -360,   517,   517,
     517,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     300,  -360,   827,   832,   837,  -360,   148,   517,   517,   517,
    -360,   277,   282,   287,  -360,  -360,  -360
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,   177,     0,    22,     4,
      20,     0,    49,    46,     0,   178,     0,    30,     0,     0,
     187,     0,   186,     0,     0,    21,     0,     0,    36,     0,
      34,    23,    24,    25,    26,    27,    28,    29,   107,   108,
     111,   109,   110,   112,    96,    97,   103,    98,    99,   100,
     102,   104,   105,   106,   126,   101,    92,    93,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,    84,
      85,     0,    90,    91,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,     0,   141,
     142,   143,   144,   145,   185,    83,   148,     0,   179,   171,
     172,   173,   174,   175,   176,   153,   154,   155,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,     0,
      60,     0,     0,    18,     0,     0,     0,     0,    31,    86,
      87,    88,    89,   149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    17,
      19,    32,    33,    35,     0,     0,     0,    37,    43,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,   150,   147,
       0,     0,     0,     0,     0,    11,    12,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,   219,    75,    76,
      79,    77,    78,    80,    61,    62,    71,    63,    64,    65,
      70,    72,    73,    74,    66,    67,    69,     0,     0,   180,
       0,   182,   183,   181,   184,     5,     7,    57,    58,    56,
      55,    59,     0,     0,     0,     0,   216,     0,     0,     0,
     199,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   158,    13,    14,    15,    16,
       0,   159,     0,     0,     0,     0,   194,   195,     0,   152,
     220,    81,    82,     6,     0,     0,     0,     0,     0,     0,
     188,   189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,    10,     0,
       0,     0,     0,     0,    44,    53,     0,     0,    54,     8,
       0,    41,    42,     0,     0,     0,     0,     0,   213,     0,
     217,     0,     0,     0,     0,     0,   204,   205,   206,     0,
       0,   209,     0,     0,     0,     0,     0,     0,    48,    50,
       0,    38,    39,    40,     0,     0,     0,     0,   210,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,     0,   214,     0,   218,     0,     0,
       0,   208,   207,   151,   190,   191,   192,   193,   221,    47,
       0,   211,     0,     0,     0,   215,     0,     0,     0,     0,
     212,     0,     0,     0,   201,   202,   203
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,   546,   428,  -360,  -360,   396,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,    25,  -360,  -232,
    -360,  -360,  -360,  -360,     2,   -19,  -360,    23,   -11,  -148,
    -106,   -22,   611,    37,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -273,  -359,  -360,   467,  -162
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   298,   356,   267,   268,     9,    17,    31,
      32,    33,    34,    35,    36,   156,   237,   393,    37,    10,
     389,    11,   390,   256,   149,   124,   125,   126,    16,   127,
     128,    24,    21,   362,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   241,   317,   399,   276,   277,   400
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     150,   152,   242,   243,   244,    23,     4,   150,   150,   221,
     222,   223,   224,   225,   226,   227,    -2,     4,   157,   386,
       4,   275,   159,   160,   349,    12,   363,     4,   154,   155,
     221,   222,   223,   224,   225,   226,   227,   221,   222,   223,
     224,   225,   226,   227,   340,     3,   387,   221,   222,   223,
     224,   225,   226,   227,   215,   221,   222,   223,   224,   225,
     226,   227,   225,   226,   227,   297,   353,   446,   163,   221,
     222,   223,   224,   225,   226,   227,   221,   222,   223,   224,
     225,   226,   227,   331,   215,   150,   181,   425,    13,   364,
     397,   352,   239,   240,   221,   222,   223,   224,   225,   226,
     227,   466,   388,   335,     5,    14,   179,     5,     6,   299,
     385,   301,   302,   303,   304,    22,   258,    15,    15,     6,
     341,     7,     6,   353,     7,   232,   346,   348,   216,     6,
       8,   161,   162,     8,   347,   221,   222,   223,   224,   225,
     226,   227,    20,    18,   231,   215,   427,   427,   406,    19,
     426,    22,   444,   239,   240,   407,   427,   332,   351,   151,
       6,   221,   222,   223,   224,   225,   226,   227,   219,   153,
     220,   150,   150,   408,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   273,   274,   221,   222,   223,   224,   225,   226,
     227,   257,   398,   158,   150,   150,   150,   150,   150,   269,
     270,   271,   272,   184,   453,   164,   367,   368,   369,   383,
     428,   461,   373,   374,   375,   307,   308,   309,   310,   311,
     470,   165,   318,   319,   166,   296,   379,   380,   381,   382,
     454,   221,   222,   223,   224,   225,   226,   227,   211,   167,
     212,   221,   222,   223,   224,   225,   226,   227,   217,   218,
     219,   168,   220,   336,   337,   447,   338,   339,   217,   218,
     219,   169,   220,   455,   217,   218,   219,   170,   220,   226,
     227,   150,   217,   218,   219,    12,   220,   217,   218,   219,
     171,   220,   217,   218,   219,   172,   220,   431,   432,   433,
     173,   213,   354,   434,   435,   214,   150,   150,   150,   221,
     222,   223,   224,   225,   226,   227,   174,   263,   264,   185,
     456,    12,   209,   210,   211,   192,   212,   370,   371,   372,
     457,   239,   240,   239,   240,   411,   223,   224,   225,   226,
     227,   175,   462,   463,   464,   451,   210,   211,   233,   212,
       6,   452,   360,   361,   376,   176,   234,   235,   236,   474,
     177,   471,   472,   473,   475,   178,   217,   218,   219,   476,
     220,   391,   392,   182,   424,   265,   266,   213,    12,   238,
     445,   214,   465,   394,   395,   228,   217,   218,   219,   403,
     220,   183,   186,   150,   150,   150,   150,   150,   150,   187,
     213,   150,   401,   402,   214,   217,   218,   219,   404,   220,
     419,   188,   229,   189,   436,   437,   438,   439,   440,   441,
     190,   191,   442,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   230,   300,   305,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   275,   306,   104,   312,   313,   314,   105,   180,
     315,   316,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   320,   321,     6,   322,   323,   118,
     324,   119,   120,   121,   325,   122,   123,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   326,   327,   328,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   329,   330,   104,   342,
     333,   334,   105,   343,   344,   345,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   357,   358,
       6,   359,   365,   118,   366,   119,   120,   121,   377,   122,
     123,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     396,   212,   221,   222,   223,   224,   225,   226,   227,   221,
     222,   223,   224,   225,   226,   227,   221,   222,   223,   224,
     225,   226,   227,   412,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   417,   212,   217,   218,   219,   405,   220,
     420,   418,   213,   421,   422,   423,   214,   259,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   429,   212,   430,    25,    26,   443,    27,   384,    28,
     262,    29,   460,   355,    30,   458,   378,   217,   218,   219,
     409,   220,   459,   350,     0,   213,     0,     0,     0,   214,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
       0,   212,   217,   218,   219,   410,   220,   217,   218,   219,
     413,   220,     0,   213,     0,     0,     0,   214,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
       0,     0,     0,   260,   261,   217,   218,   219,   414,   220,
     217,   218,   219,   415,   220,   217,   218,   219,   416,   220,
       0,     0,   213,     0,     0,     0,   214,   217,   218,   219,
     448,   220,   217,   218,   219,   449,   220,   217,   218,   219,
     450,   220,   217,   218,   219,   467,   220,   217,   218,   219,
     468,   220,   217,   218,   219,   469,   220
};

static const yytype_int16 yycheck[] =
{
      19,    23,   164,   165,   166,    16,     1,    26,    27,     3,
       4,     5,     6,     7,     8,     9,     0,     1,    29,     1,
       1,    81,    74,    75,    84,     2,    18,     1,    26,    27,
       3,     4,     5,     6,     7,     8,     9,     3,     4,     5,
       6,     7,     8,     9,     8,     0,    28,     3,     4,     5,
       6,     7,     8,     9,     8,     3,     4,     5,     6,     7,
       8,     9,     7,     8,     9,   213,   298,   426,    45,     3,
       4,     5,     6,     7,     8,     9,     3,     4,     5,     6,
       7,     8,     9,     8,     8,   104,   105,    18,    79,    81,
     363,    86,    33,    34,     3,     4,     5,     6,     7,     8,
       9,   460,    84,    84,    88,    81,   104,    88,   103,   215,
      84,   217,   218,   219,   220,   101,    82,   103,   103,   103,
      84,   105,   103,   355,   105,   119,    82,   275,    82,   103,
     114,    74,    75,   114,    82,     3,     4,     5,     6,     7,
       8,     9,   101,    81,   117,     8,     8,     8,    82,    87,
      81,   101,   425,    33,    34,    82,     8,    82,    82,    82,
     103,     3,     4,     5,     6,     7,     8,     9,     7,    79,
       9,   190,   191,    82,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   190,   191,     3,     4,     5,     6,     7,     8,
       9,   178,    82,   124,   223,   224,   225,   226,   227,   186,
     187,   188,   189,    83,    82,    81,   322,   323,   324,    82,
      82,    82,   328,   329,   330,   223,   224,   225,   226,   227,
      82,    81,   243,   244,    81,   212,   342,   343,   344,   345,
      82,     3,     4,     5,     6,     7,     8,     9,    28,    81,
      30,     3,     4,     5,     6,     7,     8,     9,     5,     6,
       7,    81,     9,    74,    75,   427,    74,    75,     5,     6,
       7,    81,     9,    82,     5,     6,     7,    81,     9,     8,
       9,   300,     5,     6,     7,   262,     9,     5,     6,     7,
      81,     9,     5,     6,     7,    81,     9,   403,   404,   405,
      81,    81,   300,   409,   410,    85,   325,   326,   327,     3,
       4,     5,     6,     7,     8,     9,    81,    16,    17,    83,
      82,   298,    26,    27,    28,    83,    30,   325,   326,   327,
      82,    33,    34,    33,    34,    82,     5,     6,     7,     8,
       9,    81,   448,   449,   450,    82,    27,    28,   121,    30,
     103,    82,   101,   102,   331,    81,   129,   130,   131,    82,
      81,   467,   468,   469,    82,    81,     5,     6,     7,    82,
       9,   127,   128,    81,   396,    74,    75,    81,   355,   123,
      82,    85,    82,   358,   359,    79,     5,     6,     7,     8,
       9,    81,    81,   412,   413,   414,   415,   416,   417,    81,
      81,   420,   365,   366,    85,     5,     6,     7,     8,     9,
     387,    81,    79,    81,   412,   413,   414,   415,   416,   417,
      81,    81,   420,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    79,    87,    83,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    81,    83,    81,   132,   132,   132,    85,    86,
       8,   103,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    82,    82,   103,     8,     8,   106,
       8,   108,   109,   110,     8,   112,   113,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     8,     8,     8,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     8,     8,    81,     8,
      82,    82,    85,     8,     8,     8,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   133,   133,
     103,   133,     8,   106,     8,   108,   109,   110,    30,   112,
     113,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       8,    30,     3,     4,     5,     6,     7,     8,     9,     3,
       4,     5,     6,     7,     8,     9,     3,     4,     5,     6,
       7,     8,     9,    81,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   107,    30,     5,     6,     7,     8,     9,
      87,    79,    81,   133,   133,   133,    85,    86,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    82,    30,    82,   115,   116,    82,   118,    79,   120,
     184,   122,    81,   305,   125,    79,   340,     5,     6,     7,
       8,     9,    79,   276,    -1,    81,    -1,    -1,    -1,    85,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,     5,     6,     7,     8,     9,     5,     6,     7,
       8,     9,    -1,    81,    -1,    -1,    -1,    85,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,    -1,
      -1,    -1,    -1,   182,   183,     5,     6,     7,     8,     9,
       5,     6,     7,     8,     9,     5,     6,     7,     8,     9,
      -1,    -1,    81,    -1,    -1,    -1,    85,     5,     6,     7,
       8,     9,     5,     6,     7,     8,     9,     5,     6,     7,
       8,     9,     5,     6,     7,     8,     9,     5,     6,     7,
       8,     9,     5,     6,     7,     8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   135,   136,     0,     1,    88,   103,   105,   114,   141,
     153,   155,   161,    79,    81,   103,   162,   142,    81,    87,
     101,   166,   101,   162,   165,   115,   116,   118,   120,   122,
     125,   143,   144,   145,   146,   147,   148,   152,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    81,    85,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   106,   108,
     109,   110,   112,   113,   159,   160,   161,   163,   164,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   158,
     159,    82,   165,    79,   158,   158,   149,   162,   124,    74,
      75,    74,    75,   161,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,   158,
      86,   159,    81,    81,    83,    83,    81,    81,    81,    81,
      81,    81,    83,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    30,    81,    85,     8,    82,     5,     6,     7,
       9,     3,     4,     5,     6,     7,     8,     9,    79,    79,
      79,   117,   119,   121,   129,   130,   131,   150,   123,    33,
      34,   188,   193,   193,   193,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   157,   161,    82,    86,
     166,   166,   136,    16,    17,    74,    75,   139,   140,   161,
     161,   161,   161,   158,   158,    81,   191,   192,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   161,   163,   137,   164,
      87,   164,   164,   164,   164,    83,    83,   158,   158,   158,
     158,   158,   132,   132,   132,     8,   103,   189,   162,   162,
      82,    82,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,    82,    82,    82,    84,    74,    75,    74,    75,
       8,    84,     8,     8,     8,     8,    82,    82,   163,    84,
     192,    82,    86,   153,   158,   137,   138,   133,   133,   133,
     101,   102,   167,    18,    81,     8,     8,   164,   164,   164,
     158,   158,   158,   164,   164,   164,   161,    30,   140,   164,
     164,   164,   164,    82,    79,    84,     1,    28,    84,   154,
     156,   127,   128,   151,   151,   151,     8,   189,    82,   190,
     193,   167,   167,     8,     8,     8,    82,    82,    82,     8,
       8,    82,    81,     8,     8,     8,     8,   107,    79,   161,
      87,   133,   133,   133,   165,    18,    81,     8,    82,    82,
      82,   164,   164,   164,   164,   164,   158,   158,   158,   158,
     158,   158,   158,    82,   189,    82,   190,   193,     8,     8,
       8,    82,    82,    82,    82,    82,    82,    82,    79,    79,
      81,    82,   164,   164,   164,    82,   190,     8,     8,     8,
      82,   164,   164,   164,    82,    82,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   134,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   140,   140,   140,   141,   141,   141,
     141,   141,   142,   142,   143,   143,   143,   143,   143,   143,
     144,   144,   145,   146,   147,   148,   149,   149,   150,   150,
     150,   151,   151,   152,   153,   153,   153,   154,   154,   155,
     156,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   161,   162,   163,
     163,   164,   164,   164,   164,   164,   165,   166,   167,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   188,   188,   188,   188,   188,   189,   190,   190,   191,
     191,   192,   193,   193
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     0,     2,     1,
       3,     1,     1,     2,     2,     2,     2,     5,     4,     5,
       1,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     2,     3,     3,     1,     3,     0,     2,     5,     5,
       5,     1,     1,     3,     7,     4,     2,     4,     2,     1,
       2,     1,     3,     5,     5,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     2,
       3,     8,     4,     1,     1,     1,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       8,     8,     8,     8,     4,     4,     8,     7,     7,     4,
       4,    12,    12,    12,     6,     6,     6,     8,     8,     6,
       5,     7,     9,     4,     6,     8,     1,     1,     3,     1,
       2,     6,     1,     1
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 324 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); gGlobal->gResult = formatDefinitions((yyval.exp)); }
#line 1833 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 327 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->nil; }
#line 1839 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 328 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons ((yyvsp[0].exp),(yyvsp[-1].exp)); }
#line 1845 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 330 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->nil; }
#line 1851 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 331 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons ((yyvsp[0].exp),(yyvsp[-1].exp)); }
#line 1857 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 335 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->nil; }
#line 1863 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 336 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons ((yyvsp[0].exp),(yyvsp[-1].exp)); }
#line 1869 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 343 "faustparser.y" /* yacc.c:1646  */
    { gGlobal->gWaveForm.push_back((yyvsp[0].exp)); }
#line 1875 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 344 "faustparser.y" /* yacc.c:1646  */
    { gGlobal->gWaveForm.push_back((yyvsp[0].exp)); }
#line 1881 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 347 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxInt(atoi(yytext)); }
#line 1887 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 348 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxReal(atof(yytext)); }
#line 1893 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 349 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxInt (atoi(yytext)); }
#line 1899 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 350 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxReal(atof(yytext)); }
#line 1905 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 351 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxInt ( -atoi(yytext) ); }
#line 1911 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 352 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxReal( -atof(yytext) ); }
#line 1917 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 356 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = importFile((yyvsp[-2].exp)); }
#line 1923 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 357 "faustparser.y" /* yacc.c:1646  */
    { declareMetadata((yyvsp[-2].exp),(yyvsp[-1].exp)); (yyval.exp) = gGlobal->nil; }
#line 1929 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 358 "faustparser.y" /* yacc.c:1646  */
    { declareDefinitionMetadata((yyvsp[-3].exp),(yyvsp[-2].exp),(yyvsp[-1].exp)); (yyval.exp) = gGlobal->nil; }
#line 1935 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 359 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1941 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 360 "faustparser.y" /* yacc.c:1646  */
    { declareDoc((yyvsp[-1].exp)); (yyval.exp) = gGlobal->nil; /* cerr << "Yacc : doc : " << *$2 << endl; */ }
#line 1947 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 363 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->nil; }
#line 1953 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 364 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons ((yyvsp[0].exp),(yyvsp[-1].exp)); }
#line 1959 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 367 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = docTxt((yyvsp[0].cppstr)->c_str()); delete (yyvsp[0].cppstr); }
#line 1965 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 368 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = docEqn((yyvsp[0].exp)); }
#line 1971 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 369 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = docDgm((yyvsp[0].exp)); }
#line 1977 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 370 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = docNtc(); }
#line 1983 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 371 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = docLst(); }
#line 1989 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 372 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = docMtd((yyvsp[0].exp)); }
#line 1995 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 375 "faustparser.y" /* yacc.c:1646  */
    { (yyval.cppstr) = new string(); }
#line 2001 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 376 "faustparser.y" /* yacc.c:1646  */
    { (yyval.cppstr) = &((yyvsp[-1].cppstr)->append(yytext)); }
#line 2007 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 379 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 2013 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 382 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 2019 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 385 "faustparser.y" /* yacc.c:1646  */
    { }
#line 2025 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 388 "faustparser.y" /* yacc.c:1646  */
    { }
#line 2031 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 391 "faustparser.y" /* yacc.c:1646  */
    { }
#line 2037 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 392 "faustparser.y" /* yacc.c:1646  */
    { }
#line 2043 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 395 "faustparser.y" /* yacc.c:1646  */
    { gGlobal->gLstDependenciesSwitch = (yyvsp[-1].b); }
#line 2049 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 396 "faustparser.y" /* yacc.c:1646  */
    { gGlobal->gStripDocSwitch = (yyvsp[-1].b); gGlobal->gStripDocSwitch==true ? gGlobal->gStripDocSwitch=false : gGlobal->gStripDocSwitch=true; }
#line 2055 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 397 "faustparser.y" /* yacc.c:1646  */
    { gGlobal->gLstDistributedSwitch = (yyvsp[-1].b); }
#line 2061 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 400 "faustparser.y" /* yacc.c:1646  */
    { (yyval.b) = true; }
#line 2067 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 401 "faustparser.y" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 2073 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 404 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 2079 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 407 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-6].exp),cons((yyvsp[-4].exp),(yyvsp[-1].exp))); setDefProp((yyvsp[-6].exp), yyfilename, yylineno); }
#line 2085 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 408 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-3].exp),cons(gGlobal->nil,(yyvsp[-1].exp)));  setDefProp((yyvsp[-3].exp), yyfilename, yylineno); }
#line 2091 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 409 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->nil; yyerr++; }
#line 2097 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 412 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-3].exp),cons(gGlobal->nil,(yyvsp[-1].exp))); setDefProp((yyvsp[-3].exp), yyfilename, yylineno); }
#line 2103 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 413 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->nil; yyerr++; }
#line 2109 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 416 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp)=(yyvsp[0].exp); }
#line 2115 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 419 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp)=(yyvsp[0].exp); }
#line 2121 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 422 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),gGlobal->nil); }
#line 2127 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 423 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),(yyvsp[-2].exp)); }
#line 2133 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 426 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxWithLocalDef((yyvsp[-4].exp),formatDefinitions((yyvsp[-1].exp))); }
#line 2139 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 427 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxWithRecDef  ((yyvsp[-4].exp),formatDefinitions((yyvsp[-1].exp))); }
#line 2145 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 428 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPar((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2151 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 429 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2157 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 430 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSplit((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2163 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 431 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxMerge((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2169 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 432 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxRec((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2175 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 433 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2181 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 436 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigAdd)); }
#line 2187 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 437 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigSub)); }
#line 2193 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 438 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigMul)); }
#line 2199 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 439 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigDiv)); }
#line 2205 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 440 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigRem)); }
#line 2211 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 441 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),gGlobal->gPowPrim->box()); }
#line 2217 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 442 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigFixDelay)); }
#line 2223 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 443 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq((yyvsp[-1].exp),boxPrim1(sigDelay1)); }
#line 2229 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 444 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxAccess((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2235 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 446 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigAND)); }
#line 2241 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 447 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigOR)); }
#line 2247 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 448 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigXOR)); }
#line 2253 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 450 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigLeftShift)); }
#line 2259 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 451 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigRightShift)); }
#line 2265 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 453 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigLT)); }
#line 2271 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 454 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigLE)); }
#line 2277 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 455 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigGT)); }
#line 2283 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 456 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigGE)); }
#line 2289 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 457 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigEQ)); }
#line 2295 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 458 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar((yyvsp[-2].exp),(yyvsp[0].exp)),boxPrim2(sigNE)); }
#line 2301 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 460 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = buildBoxAppl((yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 2307 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 461 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxModifLocalDef((yyvsp[-3].exp),formatDefinitions((yyvsp[-1].exp))); }
#line 2313 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 463 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2319 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 466 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxInt(atoi(yytext)); }
#line 2325 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 467 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxReal(atof(yytext)); }
#line 2331 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 469 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxInt (atoi(yytext)); }
#line 2337 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 470 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxReal(atof(yytext)); }
#line 2343 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 472 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxInt ( -atoi(yytext) ); }
#line 2349 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 473 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxReal( -atof(yytext) ); }
#line 2355 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 475 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxWire(); }
#line 2361 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 476 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxCut(); }
#line 2367 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 478 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim1(sigDelay1); }
#line 2373 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 479 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigPrefix); }
#line 2379 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 481 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim1(sigIntCast); }
#line 2385 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 482 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim1(sigFloatCast); }
#line 2391 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 484 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigAdd); }
#line 2397 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 485 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigSub); }
#line 2403 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 486 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigMul); }
#line 2409 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 487 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigDiv); }
#line 2415 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 488 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigRem); }
#line 2421 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 489 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigFixDelay); }
#line 2427 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 491 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigAND); }
#line 2433 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 492 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigOR); }
#line 2439 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 493 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigXOR); }
#line 2445 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 495 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigLeftShift); }
#line 2451 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 496 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigRightShift); }
#line 2457 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 498 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigLT); }
#line 2463 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 499 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigLE); }
#line 2469 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 500 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigGT); }
#line 2475 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 501 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigGE); }
#line 2481 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 502 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigEQ); }
#line 2487 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 503 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigNE); }
#line 2493 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 505 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigAttach); }
#line 2499 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 506 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigEnable); }
#line 2505 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 507 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigControl); }
#line 2511 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 510 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gAcosPrim->box(); }
#line 2517 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 511 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gAsinPrim->box(); }
#line 2523 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 512 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gAtanPrim->box(); }
#line 2529 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 513 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gAtan2Prim->box(); }
#line 2535 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 514 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gCosPrim->box(); }
#line 2541 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 515 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gSinPrim->box(); }
#line 2547 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 516 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gTanPrim->box(); }
#line 2553 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 518 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gExpPrim->box(); }
#line 2559 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 519 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gLogPrim->box(); }
#line 2565 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 520 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gLog10Prim->box(); }
#line 2571 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 521 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gPowPrim->box(); }
#line 2577 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 522 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gPowPrim->box(); }
#line 2583 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 523 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gSqrtPrim->box(); }
#line 2589 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 525 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gAbsPrim->box(); }
#line 2595 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 526 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gMinPrim->box(); }
#line 2601 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 527 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gMaxPrim->box(); }
#line 2607 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 529 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gFmodPrim->box(); }
#line 2613 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 530 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gRemainderPrim->box(); }
#line 2619 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 532 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gFloorPrim->box(); }
#line 2625 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 533 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gCeilPrim->box(); }
#line 2631 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 534 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = gGlobal->gRintPrim->box(); }
#line 2637 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 537 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim3(sigReadOnlyTable); }
#line 2643 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 538 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim5(sigWriteReadTable); }
#line 2649 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 540 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim3(sigSelect2); }
#line 2655 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 541 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim4(sigSelect3); }
#line 2661 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 543 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigVectorize); }
#line 2667 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 544 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim1(sigSerialize); }
#line 2673 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 545 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigConcat); }
#line 2679 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 547 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigUpSample); }
#line 2685 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 548 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigDownSample); }
#line 2691 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 550 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxPrim2(sigVectorAt); }
#line 2697 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 551 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar(boxWire(),(yyvsp[-1].exp)),boxPrim2(sigVectorAt)); }
#line 2703 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 553 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp);  setUseProp((yyvsp[0].exp), yyfilename, yylineno);}
#line 2709 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 554 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq(boxPar(boxInt(0),(yyvsp[0].exp)),boxPrim2(sigSub)); }
#line 2715 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 556 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 2721 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 558 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = buildBoxAbstr((yyvsp[-5].exp),(yyvsp[-1].exp)); }
#line 2727 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 560 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxCase(checkRulelist((yyvsp[-1].exp))); }
#line 2733 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 562 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxFFun((yyvsp[0].exp)); }
#line 2739 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 563 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2745 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 564 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2751 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 565 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxComponent((yyvsp[-1].exp)); }
#line 2757 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 566 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxLibrary((yyvsp[-1].exp)); }
#line 2763 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 567 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxWithLocalDef(boxEnvironment(),formatDefinitions((yyvsp[-1].exp))); }
#line 2769 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 568 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxWaveform(gGlobal->gWaveForm); gGlobal->gWaveForm.clear(); }
#line 2775 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 569 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2781 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 570 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2787 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 571 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2793 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 572 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2799 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 573 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2805 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 574 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2811 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 575 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2817 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 576 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2823 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 577 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2829 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 578 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2835 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 579 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2841 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 581 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2847 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 582 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2853 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 583 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2859 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 584 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2865 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 586 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2871 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 587 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2877 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 592 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxIdent(yytext); setUseProp((yyval.exp), yyfilename, yylineno);  }
#line 2883 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 595 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = tree(yytext); setUseProp((yyval.exp), yyfilename, yylineno);  }
#line 2889 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 600 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),gGlobal->nil); }
#line 2895 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 601 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),(yyvsp[-2].exp)); }
#line 2901 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 604 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSeq((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2907 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 605 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSplit((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2913 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 606 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxMerge((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2919 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 607 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxRec((yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 2925 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 608 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2931 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 611 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = tree(yytext); }
#line 2937 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 614 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = unquote(yytext); }
#line 2943 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 617 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = tree(yytext); }
#line 2949 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 618 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = tree(yytext); }
#line 2955 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 624 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxIPar((yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 2961 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 628 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxISeq((yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 2967 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 632 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxISum((yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 2973 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 636 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxIProd((yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 2979 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 640 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxInputs((yyvsp[-1].exp)); }
#line 2985 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 643 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxOutputs((yyvsp[-1].exp)); }
#line 2991 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 651 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = ffunction((yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 2997 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 655 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxFConst((yyvsp[-4].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3003 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 658 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxFVar((yyvsp[-4].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3009 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 662 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxButton((yyvsp[-1].exp)); }
#line 3015 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 665 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxCheckbox((yyvsp[-1].exp)); }
#line 3021 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 669 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxVSlider((yyvsp[-9].exp),(yyvsp[-7].exp),(yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3027 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 672 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxHSlider((yyvsp[-9].exp),(yyvsp[-7].exp),(yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3033 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 675 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxNumEntry((yyvsp[-9].exp),(yyvsp[-7].exp),(yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3039 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 678 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxVGroup((yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3045 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 681 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxHGroup((yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3051 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 684 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxTGroup((yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3057 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 688 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxVBargraph((yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3063 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 691 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxHBargraph((yyvsp[-5].exp),(yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3069 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 694 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = boxSoundfile((yyvsp[-3].exp),(yyvsp[-1].exp)); }
#line 3075 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 700 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-4].exp), cons(cons((yyvsp[-3].exp),cons((yyvsp[-3].exp),cons((yyvsp[-3].exp),gGlobal->nil))), (yyvsp[-1].exp))); }
#line 3081 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 701 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-6].exp), cons(cons((yyvsp[-5].exp),cons((yyvsp[-3].exp),cons((yyvsp[-3].exp),gGlobal->nil))), (yyvsp[-1].exp))); }
#line 3087 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 702 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-8].exp), cons(cons((yyvsp[-7].exp),cons((yyvsp[-5].exp),cons((yyvsp[-3].exp),gGlobal->nil))), (yyvsp[-1].exp))); }
#line 3093 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 704 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-3].exp), cons(cons((yyvsp[-2].exp),cons((yyvsp[-2].exp),cons((yyvsp[-2].exp),gGlobal->nil))), gGlobal->nil)); }
#line 3099 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 705 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-5].exp), cons(cons((yyvsp[-4].exp),cons((yyvsp[-2].exp),cons((yyvsp[-2].exp),gGlobal->nil))), gGlobal->nil)); }
#line 3105 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 706 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-7].exp), cons(cons((yyvsp[-6].exp),cons((yyvsp[-4].exp),cons((yyvsp[-2].exp),gGlobal->nil))), gGlobal->nil)); }
#line 3111 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 709 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = tree(yytext); }
#line 3117 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 712 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),gGlobal->nil); }
#line 3123 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 713 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),(yyvsp[-2].exp)); }
#line 3129 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 716 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),gGlobal->nil); }
#line 3135 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 717 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[0].exp),(yyvsp[-1].exp)); }
#line 3141 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 721 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = cons((yyvsp[-4].exp),(yyvsp[-1].exp)); }
#line 3147 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 724 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = tree(0); }
#line 3153 "faustparser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 725 "faustparser.y" /* yacc.c:1646  */
    { (yyval.exp) = tree(1); }
#line 3159 "faustparser.cpp" /* yacc.c:1646  */
    break;


#line 3163 "faustparser.cpp" /* yacc.c:1646  */
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 728 "faustparser.y" /* yacc.c:1906  */

