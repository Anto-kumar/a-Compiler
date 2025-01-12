/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "app.y"


# include <stdio.h>
# include <string.h>
# include <math.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdbool.h>

int yylex(void);
void yyerror(char*);
char variable[500][20]; 
int DeclaredBefore[500];
int recordTheInteger[500];
double recordTheDecimal[500];
char *recordString[500];
int maincase,subcase;
double dmaincase, dsubcase;
int intArrSize=0, doubleArrSize=0;
int funcCount=0;
int arr_int[10000];
double arr_real[10000];



int i, tmp=0;
/*takes a string x as an argument and checks if it matches 
any of the strings stored in the variable array*/
int check_the_variable(char *x)
{
    for(i=0 ; i<tmp ; i++)
    {
        if( strcmp(x,variable[i])==0 )
        {
            return i;
        }
    }
    return -1;
}




#line 117 "app.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "app.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_DECI = 4,                       /* DECI  */
  YYSYMBOL_STR = 5,                        /* STR  */
  YYSYMBOL_BEG = 6,                        /* BEG  */
  YYSYMBOL_END = 7,                        /* END  */
  YYSYMBOL_NEWLINE = 8,                    /* NEWLINE  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_INTNUMBER = 10,                 /* INTNUMBER  */
  YYSYMBOL_REALNUMBER = 11,                /* REALNUMBER  */
  YYSYMBOL_singlecmnt = 12,                /* singlecmnt  */
  YYSYMBOL_multicmnt = 13,                 /* multicmnt  */
  YYSYMBOL_VAR = 14,                       /* VAR  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_DIVIDER = 16,                   /* DIVIDER  */
  YYSYMBOL_SCAN = 17,                      /* SCAN  */
  YYSYMBOL_FUNC = 18,                      /* FUNC  */
  YYSYMBOL_ARR = 19,                       /* ARR  */
  YYSYMBOL_LTB = 20,                       /* LTB  */
  YYSYMBOL_RTB = 21,                       /* RTB  */
  YYSYMBOL_LP = 22,                        /* LP  */
  YYSYMBOL_RP = 23,                        /* RP  */
  YYSYMBOL_PRINT = 24,                     /* PRINT  */
  YYSYMBOL_SEMICOLON = 25,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MUL = 29,                       /* MUL  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_POWER = 32,                     /* POWER  */
  YYSYMBOL_ABSOLUTE = 33,                  /* ABSOLUTE  */
  YYSYMBOL_FACTORIAL = 34,                 /* FACTORIAL  */
  YYSYMBOL_INCRE = 35,                     /* INCRE  */
  YYSYMBOL_DECRE = 36,                     /* DECRE  */
  YYSYMBOL_EQUAL = 37,                     /* EQUAL  */
  YYSYMBOL_GREATER = 38,                   /* GREATER  */
  YYSYMBOL_LESS = 39,                      /* LESS  */
  YYSYMBOL_GRTEQUAL = 40,                  /* GRTEQUAL  */
  YYSYMBOL_LESSEQUAL = 41,                 /* LESSEQUAL  */
  YYSYMBOL_NOTEQUAL = 42,                  /* NOTEQUAL  */
  YYSYMBOL_OR = 43,                        /* OR  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_NOT = 45,                       /* NOT  */
  YYSYMBOL_IF = 46,                        /* IF  */
  YYSYMBOL_ELSE = 47,                      /* ELSE  */
  YYSYMBOL_ELIF = 48,                      /* ELIF  */
  YYSYMBOL_LB = 49,                        /* LB  */
  YYSYMBOL_RB = 50,                        /* RB  */
  YYSYMBOL_SWITCH = 51,                    /* SWITCH  */
  YYSYMBOL_CASE = 52,                      /* CASE  */
  YYSYMBOL_DEFAULT = 53,                   /* DEFAULT  */
  YYSYMBOL_COLON = 54,                     /* COLON  */
  YYSYMBOL_FROM = 55,                      /* FROM  */
  YYSYMBOL_WHILE = 56,                     /* WHILE  */
  YYSYMBOL_DO = 57,                        /* DO  */
  YYSYMBOL_RANGE = 58,                     /* RANGE  */
  YYSYMBOL_SIN = 59,                       /* SIN  */
  YYSYMBOL_COS = 60,                       /* COS  */
  YYSYMBOL_TAN = 61,                       /* TAN  */
  YYSYMBOL_LOG10 = 62,                     /* LOG10  */
  YYSYMBOL_LOG2 = 63,                      /* LOG2  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_statements = 66,                /* statements  */
  YYSYMBOL_statement = 67,                 /* statement  */
  YYSYMBOL_declaration = 68,               /* declaration  */
  YYSYMBOL_writeINT = 69,                  /* writeINT  */
  YYSYMBOL_writeReal = 70,                 /* writeReal  */
  YYSYMBOL_writeString = 71,               /* writeString  */
  YYSYMBOL_array_int = 72,                 /* array_int  */
  YYSYMBOL_array_real = 73,                /* array_real  */
  YYSYMBOL_assignment = 74,                /* assignment  */
  YYSYMBOL_assigTheVal = 75,               /* assigTheVal  */
  YYSYMBOL_assign_array = 76,              /* assign_array  */
  YYSYMBOL_conditionalStmt = 77,           /* conditionalStmt  */
  YYSYMBOL_if_stmt = 78,                   /* if_stmt  */
  YYSYMBOL_elif_stmts = 79,                /* elif_stmts  */
  YYSYMBOL_elif_stmt = 80,                 /* elif_stmt  */
  YYSYMBOL_loop_stmts = 81,                /* loop_stmts  */
  YYSYMBOL_whileLoop = 82,                 /* whileLoop  */
  YYSYMBOL_forLoop = 83,                   /* forLoop  */
  YYSYMBOL_dowhileLoop = 84,               /* dowhileLoop  */
  YYSYMBOL_switchStmt = 85,                /* switchStmt  */
  YYSYMBOL_caseStmt = 86,                  /* caseStmt  */
  YYSYMBOL_case_stmt = 87,                 /* case_stmt  */
  YYSYMBOL_defaultStmt = 88,               /* defaultStmt  */
  YYSYMBOL_special = 89,                   /* special  */
  YYSYMBOL_all = 90,                       /* all  */
  YYSYMBOL_printtype = 91,                 /* printtype  */
  YYSYMBOL_expression = 92                 /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,    98,    99,   102,   103,   104,   106,   107,
     108,   109,   110,   113,   116,   117,   118,   119,   120,   125,
     138,   155,   168,   187,   200,   215,   232,   247,   260,   280,
     296,   311,   330,   348,   349,   350,   360,   361,   384,   412,
     414,   419,   422,   423,   427,   428,   431,   438,   439,   440,
     443,   455,   459,   474,   486,   490,   496,   503,   504,   505,
     507,   516,   524,   530,   537,   538,   539,   540,   543,   575,
     576,   579,   582,   589,   622,   623,   624,   636,   660,   703,
     704,   719,   720,   721,   722,   733,   734,   736,   755,   775,
     797,   816,   819,   825,   832,   839,   846,   853,   860,   867,
     874,   877,   880,   883,   886,   889,   893
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "DECI", "STR",
  "BEG", "END", "NEWLINE", "ASSIGN", "INTNUMBER", "REALNUMBER",
  "singlecmnt", "multicmnt", "VAR", "STRING", "DIVIDER", "SCAN", "FUNC",
  "ARR", "LTB", "RTB", "LP", "RP", "PRINT", "SEMICOLON", "COMMA", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "POWER", "ABSOLUTE", "FACTORIAL", "INCRE",
  "DECRE", "EQUAL", "GREATER", "LESS", "GRTEQUAL", "LESSEQUAL", "NOTEQUAL",
  "OR", "AND", "NOT", "IF", "ELSE", "ELIF", "LB", "RB", "SWITCH", "CASE",
  "DEFAULT", "COLON", "FROM", "WHILE", "DO", "RANGE", "SIN", "COS", "TAN",
  "LOG10", "LOG2", "$accept", "program", "statements", "statement",
  "declaration", "writeINT", "writeReal", "writeString", "array_int",
  "array_real", "assignment", "assigTheVal", "assign_array",
  "conditionalStmt", "if_stmt", "elif_stmts", "elif_stmt", "loop_stmts",
  "whileLoop", "forLoop", "dowhileLoop", "switchStmt", "caseStmt",
  "case_stmt", "defaultStmt", "special", "all", "printtype", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,  1026,    44,   -11,    21,    50,  -172,  -172,  -172,  -172,
    -172,    -5,    36,    52,  1085,    79,  -172,  1085,  1085,    58,
      94,  1085,    95,    42,    98,   109,    85,   130,   140,   152,
     153,   154,   233,  -172,   155,  -172,  -172,    54,  -172,   156,
    -172,    69,  -172,  -172,  -172,  -172,  -172,  -172,  1322,  -172,
     122,   127,   151,   170,   168,   157,   175,   160,    14,    41,
    -172,  -172,   181,   177,     2,  1192,  1031,  1340,  1340,  -172,
    -172,  1071,  1085,   144,   145,   146,   -13,  1085,  1026,  1085,
    1085,  1085,  1085,  1085,  -172,  -172,  -172,  -172,   187,  -172,
     161,   182,   164,   173,  -172,  1085,  1085,  1085,  1085,  1085,
    1085,  1085,  1085,  1085,  1085,  1085,  1085,  1085,  1085,  1085,
     192,   209,  1085,   204,   211,   212,   215,  -172,  1340,   205,
     218,   225,   246,    68,  -172,    -2,  -172,     4,  -172,  1340,
     116,   203,   207,   210,     3,   243,     0,  -172,  1095,   294,
    1214,  1236,  1258,  1280,  1302,  -172,  1026,  1085,   213,  -172,
     176,  1356,  1371,  1385,  1398,  1071,    -1,    62,   126,    19,
      96,   106,   216,  -172,  1340,   244,   252,  1340,   253,   255,
    -172,   256,   261,  -172,   247,   257,   254,  1031,   248,   227,
     222,   222,   222,   267,   264,  1085,   232,   226,  -172,  -172,
    -172,  -172,  -172,   355,  1122,  1026,   262,  1085,   265,  1085,
     270,  1085,  -172,   266,  -172,  -172,  -172,  1026,   117,   241,
     119,   250,   251,   282,   299,    82,  1026,   290,  -172,   268,
     416,  -172,  1340,  -172,  1340,  -172,  1340,  -172,   477,   259,
     260,   269,  -172,   271,  -172,  -172,  -172,  -172,   261,   300,
    1085,   538,  1085,  1026,  -172,  -172,   273,   275,   277,   283,
     284,  1146,  -172,  1170,   599,  1026,  1026,  1026,  1026,  1026,
     285,  -172,  -172,   660,   721,   782,   843,   904,  1026,  -172,
    -172,  -172,  -172,  -172,   965,  -172
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    12,    74,    75,     6,
       7,    76,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    16,    17,     0,    34,    36,
      64,    39,    66,    48,    47,    49,    65,    13,     0,     1,
      21,     0,    14,    26,     0,    15,    30,    18,     0,     0,
      89,    90,     0,     0,    76,     0,     0,    79,    80,    87,
      88,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     4,     8,     9,     0,    11,
       0,     0,    42,    44,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    37,     0,
       0,     0,     0,     0,   100,    76,    72,     0,    69,    71,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    45,
      81,    82,    83,    84,    85,    86,    96,    93,    92,    95,
      94,    97,    98,    99,    22,     0,    19,    25,     0,    23,
      29,    27,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    77,    70,    67,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,    31,    20,    32,    24,    28,    38,   106,     0,     0,
       0,     0,    54,     0,    59,    58,    56,    55,     0,     0,
       0,     0,     0,     0,    43,    40,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    46,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    52,     0,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   -65,   -32,  -172,  -172,  -172,  -172,  -172,  -172,
     239,   249,   -69,  -172,  -172,   238,  -172,  -172,  -172,  -172,
    -172,  -172,  -171,  -172,  -172,  -172,  -172,   143,   -12
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    32,    33,    34,    52,    55,    57,    35,    36,
      37,    38,    39,    40,    41,    92,    93,    42,    43,    44,
      45,    46,   209,   210,   235,    47,   127,   128,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,   134,    65,    50,    58,    67,    68,   137,    51,    71,
     211,   212,    58,   139,   -73,    59,   185,     1,   123,   137,
     177,   -73,   123,   183,     7,     8,    88,   178,    64,   117,
      60,    61,    13,    60,    61,    53,    14,    60,    61,   234,
      54,   106,   107,   108,    49,   135,   118,    17,    18,    19,
      20,   119,    73,    74,   129,   120,   101,    75,    62,    21,
     130,   106,   107,   108,    56,   138,    63,   140,   141,   142,
     143,   144,    69,    27,    28,    29,    30,    31,   176,    87,
      88,   193,   120,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   240,   101,
     167,    66,   104,   105,   106,   107,   108,    85,    70,    95,
      96,    97,    98,    99,   100,    72,    90,    91,    76,   101,
     102,   103,   104,   105,   106,   107,   108,   229,   230,    77,
     220,   109,   231,   101,    78,   194,   104,   179,   106,   107,
     108,   110,   228,    95,    96,    97,    98,    99,   100,   107,
     108,   241,    79,   101,   102,   103,   104,   105,   106,   107,
     108,    85,    80,   101,   102,   129,   104,   105,   106,   107,
     108,   208,   233,   215,    81,    82,    83,   111,   254,   112,
      86,    89,   113,   114,   115,   222,   116,   224,    85,   226,
     263,   264,   265,   266,   267,   121,    85,   122,   131,   132,
     133,   134,   147,   274,    96,    97,    98,    99,   100,    85,
     146,   148,   165,   101,   102,   103,   104,   105,   106,   107,
     108,    91,    85,   166,   168,   169,   172,   170,   251,   171,
     253,    85,    85,    85,    85,    85,     3,     4,     5,   173,
      84,     6,    85,     7,     8,     9,    10,    11,   174,   175,
      12,    13,   180,   184,   196,    14,   181,    15,    16,   182,
     108,   197,   195,   198,   199,   200,    17,    18,    19,    20,
     201,   203,   202,   206,   208,   204,   207,   213,    21,    22,
     214,   216,   217,   221,    23,   225,   223,   227,    24,    25,
      26,   232,    27,    28,    29,    30,    31,     3,     4,     5,
     236,   237,     6,   238,     7,     8,     9,    10,    11,   239,
     242,    12,    13,   246,   247,   136,    14,   243,    15,    16,
     205,   250,   255,   248,   256,   249,   257,    17,    18,    19,
      20,   149,   258,   259,   268,     0,     0,   145,     0,    21,
      22,     0,     0,     0,   187,    23,     0,     0,     0,    24,
      25,    26,     0,    27,    28,    29,    30,    31,     3,     4,
       5,     0,     0,     6,     0,     7,     8,     9,    10,    11,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,   218,    23,     0,     0,     0,
      24,    25,    26,     0,    27,    28,    29,    30,    31,     3,
       4,     5,     0,     0,     6,     0,     7,     8,     9,    10,
      11,     0,     0,    12,    13,     0,     0,     0,    14,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,   244,    23,     0,     0,
       0,    24,    25,    26,     0,    27,    28,    29,    30,    31,
       3,     4,     5,     0,     0,     6,     0,     7,     8,     9,
      10,    11,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,   245,    23,     0,
       0,     0,    24,    25,    26,     0,    27,    28,    29,    30,
      31,     3,     4,     5,     0,     0,     6,     0,     7,     8,
       9,    10,    11,     0,     0,    12,    13,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,   252,    23,
       0,     0,     0,    24,    25,    26,     0,    27,    28,    29,
      30,    31,     3,     4,     5,     0,     0,     6,     0,     7,
       8,     9,    10,    11,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,   262,
      23,     0,     0,     0,    24,    25,    26,     0,    27,    28,
      29,    30,    31,     3,     4,     5,     0,     0,     6,     0,
       7,     8,     9,    10,    11,     0,     0,    12,    13,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
     269,    23,     0,     0,     0,    24,    25,    26,     0,    27,
      28,    29,    30,    31,     3,     4,     5,     0,     0,     6,
       0,     7,     8,     9,    10,    11,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,   270,    23,     0,     0,     0,    24,    25,    26,     0,
      27,    28,    29,    30,    31,     3,     4,     5,     0,     0,
       6,     0,     7,     8,     9,    10,    11,     0,     0,    12,
      13,     0,     0,     0,    14,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
       0,     0,   271,    23,     0,     0,     0,    24,    25,    26,
       0,    27,    28,    29,    30,    31,     3,     4,     5,     0,
       0,     6,     0,     7,     8,     9,    10,    11,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,     0,     0,   272,    23,     0,     0,     0,    24,    25,
      26,     0,    27,    28,    29,    30,    31,     3,     4,     5,
       0,     0,     6,     0,     7,     8,     9,    10,    11,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,   273,    23,     0,     0,     0,    24,
      25,    26,     0,    27,    28,    29,    30,    31,     3,     4,
       5,     0,     0,     6,     0,     7,     8,     9,    10,    11,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,   275,    23,     0,     0,     0,
      24,    25,    26,     0,    27,    28,    29,    30,    31,     3,
       4,     5,     0,     0,     6,     0,     7,     8,     9,    10,
      11,     7,     8,    12,    13,   125,   126,     0,    14,    13,
      15,    16,     0,    14,     0,     0,     0,     0,     0,    17,
      18,    19,    20,     0,    17,    18,    19,    20,     0,     0,
       0,    21,    22,     0,     0,     0,    21,    23,     0,     0,
       0,    24,    25,    26,     0,    27,    28,    29,    30,    31,
      27,    28,    29,    30,    31,     7,     8,     0,     0,    64,
       0,     0,     0,    13,     0,     0,     0,    14,   101,   102,
     103,   104,   105,   106,   107,   108,   186,     0,    17,    18,
      19,    20,    95,    96,    97,    98,    99,   100,     0,     0,
      21,     0,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,   219,    27,    28,    29,    30,    31,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,   260,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   107,
     108,   261,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   124,     0,     0,     0,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,   188,     0,     0,
       0,    95,    96,    97,    98,    99,   100,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   189,
       0,     0,     0,    95,    96,    97,    98,    99,   100,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   107,
     108,   190,     0,     0,     0,    95,    96,    97,    98,    99,
     100,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,   107,   108,   191,     0,     0,     0,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   192,     0,     0,     0,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,    94,     0,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,   108,    97,    98,    99,   100,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   107,
     108,    98,    99,   100,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,   107,   108,    99,   100,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   107,   108,
     100,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,   107,   108
};

static const yytype_int16 yycheck[] =
{
      32,    14,    14,    14,     9,    17,    18,    76,    19,    21,
     181,   182,     9,    78,    16,    20,    16,     6,    20,    88,
      16,    23,    20,    20,    10,    11,    26,    23,    14,    15,
      35,    36,    18,    35,    36,    14,    22,    35,    36,   210,
      19,    42,    43,    44,     0,    58,    58,    33,    34,    35,
      36,    10,    10,    11,    66,    14,    37,    15,    22,    45,
      72,    42,    43,    44,    14,    77,    14,    79,    80,    81,
      82,    83,    14,    59,    60,    61,    62,    63,    10,    25,
      26,   146,    14,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    16,    37,
     112,    22,    40,    41,    42,    43,    44,   139,    14,    27,
      28,    29,    30,    31,    32,    20,    47,    48,    20,    37,
      38,    39,    40,    41,    42,    43,    44,    10,    11,    20,
     195,     9,    15,    37,    49,   147,    40,    21,    42,    43,
      44,    14,   207,    27,    28,    29,    30,    31,    32,    43,
      44,   216,    22,    37,    38,    39,    40,    41,    42,    43,
      44,   193,    22,    37,    38,   177,    40,    41,    42,    43,
      44,    52,    53,   185,    22,    22,    22,    26,   243,     9,
      25,    25,    14,    26,     9,   197,    26,   199,   220,   201,
     255,   256,   257,   258,   259,    14,   228,    20,    54,    54,
      54,    14,    20,   268,    28,    29,    30,    31,    32,   241,
      49,    47,    20,    37,    38,    39,    40,    41,    42,    43,
      44,    48,   254,    14,    20,    14,    21,    15,   240,    14,
     242,   263,   264,   265,   266,   267,     3,     4,     5,    21,
       7,     8,   274,    10,    11,    12,    13,    14,    23,     3,
      17,    18,    49,    10,    10,    22,    49,    24,    25,    49,
      44,     9,    49,    10,     9,     9,    33,    34,    35,    36,
       9,    14,    25,    25,    52,    21,    49,    10,    45,    46,
      16,    49,    56,    21,    51,    15,    21,    21,    55,    56,
      57,    50,    59,    60,    61,    62,    63,     3,     4,     5,
      50,    50,     8,    21,    10,    11,    12,    13,    14,    10,
      20,    17,    18,    54,    54,    76,    22,    49,    24,    25,
     177,    21,    49,    54,    49,    54,    49,    33,    34,    35,
      36,    93,    49,    49,    49,    -1,    -1,    88,    -1,    45,
      46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,     3,     4,
       5,    -1,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,     3,
       4,     5,    -1,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
       3,     4,     5,    -1,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,     3,     4,     5,    -1,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,     3,     4,     5,    -1,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,     3,     4,     5,    -1,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,     3,     4,     5,    -1,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,     3,     4,     5,    -1,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,     3,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,     3,     4,     5,
      -1,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,     3,     4,
       5,    -1,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,     3,
       4,     5,    -1,    -1,     8,    -1,    10,    11,    12,    13,
      14,    10,    11,    17,    18,    14,    15,    -1,    22,    18,
      24,    25,    -1,    22,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    45,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      59,    60,    61,    62,    63,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    37,    38,
      39,    40,    41,    42,    43,    44,    21,    -1,    33,    34,
      35,    36,    27,    28,    29,    30,    31,    32,    -1,    -1,
      45,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    21,    59,    60,    61,    62,    63,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    25,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    31,    32,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    65,     3,     4,     5,     8,    10,    11,    12,
      13,    14,    17,    18,    22,    24,    25,    33,    34,    35,
      36,    45,    46,    51,    55,    56,    57,    59,    60,    61,
      62,    63,    66,    67,    68,    72,    73,    74,    75,    76,
      77,    78,    81,    82,    83,    84,    85,    89,    92,     0,
      14,    19,    69,    14,    19,    70,    14,    71,     9,    20,
      35,    36,    22,    14,    14,    92,    22,    92,    92,    14,
      14,    92,    20,    10,    11,    15,    20,    20,    49,    22,
      22,    22,    22,    22,     7,    67,    25,    25,    26,    25,
      47,    48,    79,    80,    25,    27,    28,    29,    30,    31,
      32,    37,    38,    39,    40,    41,    42,    43,    44,     9,
      14,    26,     9,    14,    26,     9,    26,    15,    92,    10,
      14,    14,    20,    20,    23,    14,    15,    90,    91,    92,
      92,    54,    54,    54,    14,    58,    74,    76,    92,    66,
      92,    92,    92,    92,    92,    75,    49,    20,    47,    79,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    20,    14,    92,    20,    14,
      15,    14,    21,    21,    23,     3,    10,    16,    23,    21,
      49,    49,    49,    20,    10,    16,    21,    50,    23,    23,
      23,    23,    23,    66,    92,    49,    10,     9,    10,     9,
       9,     9,    25,    14,    21,    91,    25,    49,    52,    86,
      87,    86,    86,    10,    16,    92,    49,    56,    50,    21,
      66,    21,    92,    21,    92,    15,    92,    21,    66,    10,
      11,    15,    50,    53,    86,    88,    50,    50,    21,    10,
      16,    66,    20,    49,    50,    50,    54,    54,    54,    54,
      21,    92,    50,    92,    66,    49,    49,    49,    49,    49,
      21,    21,    50,    66,    66,    66,    66,    66,    49,    50,
      50,    50,    50,    50,    66,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    71,    71,    71,
      71,    72,    73,    74,    74,    75,    75,    75,    76,    77,
      78,    78,    78,    78,    79,    79,    80,    81,    81,    81,
      82,    83,    83,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    89,    89,    89,    89,    89,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     1,     1,     2,     3,
       5,     1,     3,     3,     5,     3,     1,     3,     5,     3,
       1,     6,     6,     3,     1,     3,     1,     3,     6,     1,
       7,     5,     2,     6,     1,     2,     7,     1,     1,     1,
       7,    11,    10,     8,     6,     6,     6,     1,     2,     2,
       6,     6,     6,     5,     1,     1,     1,     5,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  switch (yyn)
    {
  case 2: /* program: BEG statements END  */
#line 95 "app.y"
                               { printf("\nThe program starts\n"); }
#line 1603 "app.tab.c"
    break;

  case 8: /* statement: declaration SEMICOLON  */
#line 106 "app.y"
                                                                      {     printf("\nSuccessful Declaration\n");   }
#line 1609 "app.tab.c"
    break;

  case 9: /* statement: assignment SEMICOLON  */
#line 107 "app.y"
                                        {     printf("\nSuccessful Assignment\n");    }
#line 1615 "app.tab.c"
    break;

  case 12: /* statement: NEWLINE  */
#line 110 "app.y"
                                        {     printf("\n");                            }
#line 1621 "app.tab.c"
    break;

  case 14: /* declaration: INT writeINT  */
#line 116 "app.y"
                                              {     printf("\nSuccessfully Declared Integer.\n");       }
#line 1627 "app.tab.c"
    break;

  case 15: /* declaration: DECI writeReal  */
#line 117 "app.y"
                                                        {     printf("\nSuccessfully Declared Real Number.\n");   }
#line 1633 "app.tab.c"
    break;

  case 16: /* declaration: array_int  */
#line 118 "app.y"
                                {     printf("\nSuccessfully Declared Integer Array.\n"); }
#line 1639 "app.tab.c"
    break;

  case 17: /* declaration: array_real  */
#line 119 "app.y"
                                {     printf("\nSuccessfully Declared Real Array.\n");    }
#line 1645 "app.tab.c"
    break;

  case 18: /* declaration: STR writeString  */
#line 120 "app.y"
                                   {     printf("\nSuccessfully Declared Text.\n");          }
#line 1651 "app.tab.c"
    break;

  case 19: /* writeINT: writeINT COMMA VAR  */
#line 125 "app.y"
                             {
int varID = check_the_variable((yyvsp[0].text)); 
//$3 means VAR
if(varID!=-1)
{
    printf("\n%s is declared before.\n", (yyvsp[0].text));
}
else{
    strcpy(variable[tmp],(yyvsp[0].text));
    DeclaredBefore[tmp]=1;
    tmp++;
}
}
#line 1669 "app.tab.c"
    break;

  case 20: /* writeINT: writeINT COMMA VAR ASSIGN expression  */
#line 138 "app.y"
                                                {
//
	        int varID = check_the_variable((yyvsp[-2].text));

	if(varID!=-1)
  {
          printf("\n%s is declared before.\n" , (yyvsp[-2].text));
  }
  else{
          int x = (int)(yyvsp[0].real) ;
          strcpy( variable[tmp] , (yyvsp[-2].text) ); // storing the variable name
          DeclaredBefore[tmp] = 1;    //storing that it's successfully assigned
          recordTheInteger[tmp] = x ; // storing the value
          tmp++;
    }

	}
#line 1691 "app.tab.c"
    break;

  case 21: /* writeINT: VAR  */
#line 155 "app.y"
      {
        int varID = check_the_variable((yyvsp[0].text));
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",(yyvsp[0].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[0].text));
        DeclaredBefore[tmp]=1;
        tmp++;
    }
}
#line 1709 "app.tab.c"
    break;

  case 22: /* writeINT: VAR ASSIGN expression  */
#line 168 "app.y"
                                                        {
        int varID = check_the_variable((yyvsp[-2].text));
  if(varID!=-1)
  {
        printf("%s is declared before.\n", (yyvsp[-2].text));
  }
  else{

        int x = (int)(yyvsp[0].real) ;
        strcpy( variable[tmp] , (yyvsp[-2].text)) ;
        DeclaredBefore[tmp] = 1; // 1 for the integer
        recordTheInteger[tmp] = x ;
        tmp++;

   }

	}
#line 1731 "app.tab.c"
    break;

  case 23: /* writeReal: writeReal COMMA VAR  */
#line 187 "app.y"
                               {
    int varID = check_the_variable((yyvsp[0].text));
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",(yyvsp[0].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[0].text));
        DeclaredBefore[tmp]=2; // 2 for the double
        tmp++;
    }
}
#line 1749 "app.tab.c"
    break;

  case 24: /* writeReal: writeReal COMMA VAR ASSIGN expression  */
#line 200 "app.y"
                                          {

        int varID = check_the_variable((yyvsp[-2].text));
  if(varID!=-1)
  {
   printf("\n%s is declared before.\n" , (yyvsp[-2].text));
  }
  else{
        double x = (yyvsp[0].real) ; // storing the variable
        strcpy( variable[tmp] , (yyvsp[-2].text) );
        DeclaredBefore[tmp] = 2;
        recordTheDecimal[tmp] = x ;
        tmp++;
  }
}
#line 1769 "app.tab.c"
    break;

  case 25: /* writeReal: VAR ASSIGN expression  */
#line 215 "app.y"
                                {

        int varID = check_the_variable((yyvsp[-2].text));
  if(varID!=-1)
  {
        printf("%s is declared before.\n", (yyvsp[-2].text));
  }   
  else{

        double x = (yyvsp[0].real) ;
        strcpy( variable[tmp] , (yyvsp[-2].text)) ;
        DeclaredBefore[tmp] = 2;
        recordTheDecimal[tmp] = x ;
        tmp++;
      }

  }
#line 1791 "app.tab.c"
    break;

  case 26: /* writeReal: VAR  */
#line 232 "app.y"
      {
    int varID = check_the_variable((yyvsp[0].text));
    if(varID!=-1)
    {
        printf("%s is declared before.\n",(yyvsp[0].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[0].text));
        DeclaredBefore[tmp]=2;
        tmp++;
    }
}
#line 1809 "app.tab.c"
    break;

  case 27: /* writeString: writeString COMMA VAR  */
#line 247 "app.y"
                                   {
    int varID = check_the_variable((yyvsp[0].text));
 if(varID!=-1)
    {
        printf("\n%s is declared before.",(yyvsp[0].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[0].text));
        DeclaredBefore[tmp]=3; // 3 for the char
        tmp++;
    }
}
#line 1827 "app.tab.c"
    break;

  case 28: /* writeString: writeString COMMA VAR ASSIGN STRING  */
#line 260 "app.y"
                                         {

        int varID = check_the_variable((yyvsp[-2].text));
  if(varID!=-1)
  {
         printf("\n%s is declared before.\n" , (yyvsp[-2].text));
  }
  else{

        strcpy( variable[tmp] , (yyvsp[-2].text) );
        DeclaredBefore[tmp] = 3;

        recordString[tmp] = (char *) malloc (sizeof(char)*(strlen((yyvsp[0].text)) + 1) );
      
        strcpy(recordString[tmp] , (yyvsp[0].text));
        tmp++;

   }

  }
#line 1852 "app.tab.c"
    break;

  case 29: /* writeString: VAR ASSIGN STRING  */
#line 280 "app.y"
                            {

        int varID = check_the_variable((yyvsp[-2].text));
  if(varID!=-1)
  {
        printf("\n%s is already declared!\n", (yyvsp[-2].text));
  }
  else{
        strcpy( variable[tmp] , (yyvsp[-2].text)) ;
        DeclaredBefore[tmp] = 3;
        recordString[tmp] = (char*) malloc (sizeof(char)*(strlen((yyvsp[0].text)) ) );
        strcpy(recordString[tmp] , (yyvsp[0].text));
        tmp++;

   }}
#line 1872 "app.tab.c"
    break;

  case 30: /* writeString: VAR  */
#line 296 "app.y"
      {
        int varID = check_the_variable((yyvsp[0].text));
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",(yyvsp[0].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[0].text));
        DeclaredBefore[tmp]=3;
        tmp++;
    }
}
#line 1890 "app.tab.c"
    break;

  case 31: /* array_int: INT ARR VAR LTB INTNUMBER RTB  */
#line 311 "app.y"
                                            {
  
  int varID = check_the_variable((yyvsp[-3].text));
  
  if(varID!=-1)
  {
      printf("\n%s is declared before.\n" , (yyvsp[-3].text));
  }
  else{

      strcpy( variable[tmp] , (yyvsp[-3].text)) ;
      DeclaredBefore[tmp]=10; // 10 for the int type array
      recordTheInteger[tmp]= intArrSize;
      intArrSize+=(yyvsp[-1].integer);
      tmp++;
   }
}
#line 1912 "app.tab.c"
    break;

  case 32: /* array_real: DECI ARR VAR LTB INTNUMBER RTB  */
#line 330 "app.y"
                                                  {
  int varID = check_the_variable((yyvsp[-3].text));
  if(varID!=-1)
  {
      printf("\n%s is declared before.\n" , (yyvsp[-3].text));
  }
  else{

    strcpy( variable[tmp] , (yyvsp[-3].text)) ;
    DeclaredBefore[tmp]=11; //11 for the double type array
    recordTheInteger[tmp]= doubleArrSize;
    doubleArrSize+=(yyvsp[-1].integer);
    tmp++;
   }
}
#line 1932 "app.tab.c"
    break;

  case 35: /* assigTheVal: VAR ASSIGN STRING  */
#line 350 "app.y"
                               {
  int varID = check_the_variable((yyvsp[-2].text));
  if(varID==-1){
    printf("\nVariable %s has not been Declared Yet\n", (yyvsp[-2].text));
  }
  else {
    recordString[varID] = (char*)malloc(sizeof(char)*(strlen((yyvsp[0].text))));
    strcpy(recordString[varID] , (yyvsp[0].text));
    }
}
#line 1947 "app.tab.c"
    break;

  case 37: /* assigTheVal: VAR ASSIGN expression  */
#line 361 "app.y"
                        {
  
  int varID = check_the_variable((yyvsp[-2].text));

  if(varID==-1){
    printf("\nVariable %s not declared.\n", (yyvsp[-2].text));
  }
  else {
    if(DeclaredBefore[varID]==1){
       int x = (int)(yyvsp[0].real); //type casting
      recordTheInteger[varID]=x;
  
    }
    else if(DeclaredBefore[varID]==2){
       double x = (yyvsp[0].real) ;
      recordTheDecimal[varID]=x;
      
    }
    
  }
}
#line 1973 "app.tab.c"
    break;

  case 38: /* assign_array: VAR LTB INTNUMBER RTB ASSIGN expression  */
#line 384 "app.y"
                                                      {
    int varID = check_the_variable((yyvsp[-5].text));
    if(varID==-1)
    {
        printf("\nVariable %s not declared\n",(yyvsp[-5].text));
    }
    else{
        if(DeclaredBefore[varID]==10) // int array
        {
            int x = recordTheInteger[varID];
            x+= (yyvsp[-3].integer);
            int y= (int) (yyvsp[0].real);
            arr_int[x]=y;
        }
        else if(DeclaredBefore[varID]==11) // double array
        {
            int x= recordTheInteger[varID];
            x+= (yyvsp[-3].integer);
            double y =(yyvsp[0].real);
            arr_real[x]=y;
        }
        else{
            printf("\nNot array\n");
        }
    }
}
#line 2004 "app.tab.c"
    break;

  case 40: /* if_stmt: IF LTB expression RTB LB statements RB  */
#line 414 "app.y"
                                                {
  if( (int)(yyvsp[-4].real) ){
    printf("\nInside If Block\n");
  }
}
#line 2014 "app.tab.c"
    break;

  case 41: /* if_stmt: if_stmt ELSE LB statements RB  */
#line 419 "app.y"
                                {
     printf("\nInside if else Block\n");
}
#line 2022 "app.tab.c"
    break;

  case 46: /* elif_stmt: ELIF LTB expression RTB LB statements RB  */
#line 431 "app.y"
                                                    {
  printf("\nInside elseif Block\n"); 
}
#line 2030 "app.tab.c"
    break;

  case 50: /* whileLoop: WHILE LTB expression RTB LB statements RB  */
#line 443 "app.y"
                                                     {
  if((yyvsp[-4].real))
  {
    printf("while loop will be executed\n");
  }
  else {
    printf("while loop wont be executed\n");
  }

}
#line 2045 "app.tab.c"
    break;

  case 51: /* forLoop: FROM LTB assignment DIVIDER expression DIVIDER expression RTB LB statements RB  */
#line 455 "app.y"
                                                                                        {
  int count = 0;
  printf("\ninside for loop\n");
}
#line 2054 "app.tab.c"
    break;

  case 52: /* forLoop: FROM LTB RANGE INTNUMBER DIVIDER INTNUMBER RTB LB statements RB  */
#line 459 "app.y"
                                                                 {
  printf("\nFor loop with range\n");
  int lower=(int)(yyvsp[-6].integer);
  int upper=(int)(yyvsp[-4].integer);
  int index,count=0;
  for(index=lower;index<=upper;index++)
  {
    count++;
    printf("\nIteration Number %d \n",count);
  }
  printf("\nrange for loop ran %d times \n",count);
}
#line 2071 "app.tab.c"
    break;

  case 53: /* dowhileLoop: DO LB statements RB WHILE LTB expression RTB  */
#line 475 "app.y"
{
  if((yyvsp[-1].real))
  {
    printf("\nDo while loop\n");
  }
  else {
    printf("\nDo while loop\n");
  }
}
#line 2085 "app.tab.c"
    break;

  case 54: /* switchStmt: SWITCH INTNUMBER COLON LB caseStmt RB  */
#line 486 "app.y"
                                                  {
   maincase =(int)(yyvsp[-4].integer); //type casting
   printf("\nInside switch statement (integer)\n");
}
#line 2094 "app.tab.c"
    break;

  case 55: /* switchStmt: SWITCH STRING COLON LB caseStmt RB  */
#line 490 "app.y"
                                     {
   recordString[450]=(char*)malloc(sizeof(char)*(strlen((yyvsp[-4].text))));
   strcpy(recordString[450] , (yyvsp[-4].text));
   printf ("Inside switch statement string");

}
#line 2105 "app.tab.c"
    break;

  case 56: /* switchStmt: SWITCH REALNUMBER COLON LB caseStmt RB  */
#line 496 "app.y"
                                         {
   dmaincase=(yyvsp[-4].real);
   printf ("\nInside switch statement (double)\n");

}
#line 2115 "app.tab.c"
    break;

  case 60: /* case_stmt: CASE INTNUMBER COLON LB statements RB  */
#line 507 "app.y"
                                                {
 subcase =(int)(yyvsp[-4].integer);
 int vall = maincase-subcase;
 if(vall==0)
 {
   printf("\n%d integer matched\n",(yyvsp[-4].integer));
 }
  
}
#line 2129 "app.tab.c"
    break;

  case 61: /* case_stmt: CASE REALNUMBER COLON LB statements RB  */
#line 516 "app.y"
                                       {
 dsubcase = (yyvsp[-4].real);
 if(dmaincase==dsubcase)
 {
  printf("\n%lf double matched\n",(yyvsp[-4].real));
 }
  
}
#line 2142 "app.tab.c"
    break;

  case 62: /* case_stmt: CASE STRING COLON LB statements RB  */
#line 524 "app.y"
                                   {
 
  printf("\nstring matched\n");

}
#line 2152 "app.tab.c"
    break;

  case 63: /* defaultStmt: DEFAULT COLON LB statements RB  */
#line 530 "app.y"
                                           {
  printf("\ndefault case\n");
}
#line 2160 "app.tab.c"
    break;

  case 67: /* special: PRINT LP all RP SEMICOLON  */
#line 540 "app.y"
                            {
    
}
#line 2168 "app.tab.c"
    break;

  case 68: /* special: SCAN LP VAR RP SEMICOLON  */
#line 543 "app.y"
                           {
    int varID = check_the_variable((yyvsp[-2].text));
    if(DeclaredBefore[varID]==-1)
    {
        printf("variable not declared yet\n");
    }
    else if(DeclaredBefore[varID]==1)
    {
        int value;
        scanf("%d", &value);
        recordTheInteger[varID]=value;
         printf("Integer Variable, %s = %d\n", (yyvsp[-2].text), recordTheInteger[varID]);
    }
    else if(DeclaredBefore[varID] == 2)  { 
         double value;
        scanf("%lf", &value);
        recordTheDecimal[varID]=value;
         printf("Integer Variable, %s = %lf\n", (yyvsp[-2].text), recordTheDecimal[varID]);

}
    else if(DeclaredBefore[varID] == 3)  { 
      char str[100];
      scanf("%c",str);
      int length = strlen(str);
      char* strr = malloc( length + 1 );
    strcpy(recordString[varID],strr);

    printf("Text Variable, %s = %s\n", (yyvsp[-2].text),str);
    
}
}
#line 2204 "app.tab.c"
    break;

  case 71: /* printtype: expression  */
#line 579 "app.y"
           {
    printf("%lf",(yyvsp[0].real));
}
#line 2212 "app.tab.c"
    break;

  case 72: /* printtype: STRING  */
#line 582 "app.y"
         {
    int length = strlen((yyvsp[0].text));
    char* str = malloc(length+1);
    strcpy(str,(yyvsp[0].text));
    printf("%s \n",str);
    free(str);
}
#line 2224 "app.tab.c"
    break;

  case 73: /* printtype: VAR  */
#line 590 "app.y"
{
    int varID = check_the_variable((yyvsp[0].text));
    if(DeclaredBefore[varID]==-1)
    {
        printf("variable not declared yet");
    }
    else if(DeclaredBefore[varID]==1)
    {
        int value = recordTheInteger[varID];
        int valll = (int)value;
         printf("Integer Variable, %s = %d", (yyvsp[0].text), valll);
    }
    else if(DeclaredBefore[varID] == 2)  { 

    printf("Real Variable, %s = %lf",(yyvsp[0].text), recordTheDecimal[varID]);
}
    else if(DeclaredBefore[varID] == 3)  { 

    int length = strlen(recordString[varID]);
    char* str = malloc( length + 1 );
    strcpy(str, recordString[varID]);

    printf("Text Variable, %s = %s\n", (yyvsp[0].text),str);
    free(str);
}

}
#line 2256 "app.tab.c"
    break;

  case 74: /* expression: INTNUMBER  */
#line 622 "app.y"
                                  { (yyval.real) = (int)(yyvsp[0].integer); }
#line 2262 "app.tab.c"
    break;

  case 75: /* expression: REALNUMBER  */
#line 623 "app.y"
                                  { (yyval.real) = (yyvsp[0].real)*1.0; }
#line 2268 "app.tab.c"
    break;

  case 76: /* expression: VAR  */
#line 624 "app.y"
                                  { 

  int varID = check_the_variable((yyvsp[0].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");
  }

  else if(DeclaredBefore[varID] == 1)  { (yyval.real) = recordTheInteger[varID]*1.00; }
  else if(DeclaredBefore[varID] == 2)  { (yyval.real) = recordTheDecimal[varID]*1.00 ; }


 }
#line 2285 "app.tab.c"
    break;

  case 77: /* expression: VAR LTB INTNUMBER RTB  */
#line 636 "app.y"
                          {

  int varID = check_the_variable((yyvsp[-3].text));
  
  if(varID==-1)
  {
   printf("\n%s is not declared.\n" , (yyvsp[-3].text));
  }
  else{
  if(DeclaredBefore[varID]==10){
      int x = recordTheInteger[varID];
      x+=(yyvsp[-1].integer);
      (yyval.real) = arr_int[x]*1.0 ;
    }
  else if(DeclaredBefore[varID]==11){
      int x = recordTheInteger[varID];
      x+=(yyvsp[-1].integer);
      (yyval.real) = arr_real[x];
    }
  else {
      printf("\nNot Array\n");
    }
  }
}
#line 2314 "app.tab.c"
    break;

  case 78: /* expression: VAR LTB VAR RTB  */
#line 660 "app.y"
                    {

  int varID = check_the_variable((yyvsp[-3].text));
  
  if(varID==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[-3].text));
  }
  else{
  if(DeclaredBefore[varID]==10){
      int x = recordTheInteger[varID];
      int idx1 = check_the_variable((yyvsp[-1].text));
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[-1].text));
      }
      else {
        if(DeclaredBefore[idx1]==1){
          x+=recordTheInteger[idx1];
        }
      }
      (yyval.real) = arr_int[x]*1.0 ;
    }
  else if(DeclaredBefore[varID]==11){
      int x = recordTheInteger[varID];
      int idx1 = check_the_variable((yyvsp[-1].text));
      if(idx1==-1)
      {
        printf("\n%s is not declared yet!\n" , (yyvsp[-1].text));
      }
      else {
        if(DeclaredBefore[idx1]==1){
          x+=recordTheInteger[idx1];
        }
      }
      (yyval.real) = arr_real[x]*1.0 ;
    }
  else {
      printf("Not Array\n");
    }
  }
}
#line 2361 "app.tab.c"
    break;

  case 79: /* expression: ABSOLUTE expression  */
#line 703 "app.y"
                                 { (yyval.real) = fabs((yyvsp[0].real))*1.0 ; }
#line 2367 "app.tab.c"
    break;

  case 80: /* expression: FACTORIAL expression  */
#line 704 "app.y"
                                 {
  int x = (int)(yyvsp[0].real) ;
  if(!x){ (yyval.real) = 1.0 ; }
  else if(x<0){ printf("\nInvalid Factorial\n"); (yyval.real) = 0.0 ; }
  else{
  long long int factor = 1;
  for(i=2; i<=x; i++)
  {
    factor*=i;
  }
  (yyval.real) = factor;
  printf("\nFactorial is %lf",(yyval.real));
  (yyval.real) = factor*1.0;
  }
 }
#line 2387 "app.tab.c"
    break;

  case 81: /* expression: expression PLUS expression  */
#line 719 "app.y"
                                    { (yyval.real) = (yyvsp[-2].real) + (yyvsp[0].real); }
#line 2393 "app.tab.c"
    break;

  case 82: /* expression: expression MINUS expression  */
#line 720 "app.y"
                                    { (yyval.real) = (yyvsp[-2].real) - (yyvsp[0].real); }
#line 2399 "app.tab.c"
    break;

  case 83: /* expression: expression MUL expression  */
#line 721 "app.y"
                                    { (yyval.real) = (yyvsp[-2].real) * (yyvsp[0].real); }
#line 2405 "app.tab.c"
    break;

  case 84: /* expression: expression DIV expression  */
#line 722 "app.y"
                                    {
  if((yyvsp[0].real))
    {
     (yyval.real) = ((yyvsp[-2].real) / (yyvsp[0].real))*1.0 ;
    }
  else
    {
     (yyval.real) = 0;
     printf("\n Division by 0 is not Allowed.\n");
    }
 }
#line 2421 "app.tab.c"
    break;

  case 85: /* expression: expression MOD expression  */
#line 733 "app.y"
                                    { (yyval.real) = ((int)(yyvsp[-2].real) % (int)(yyvsp[0].real))*1.0 ; }
#line 2427 "app.tab.c"
    break;

  case 86: /* expression: expression POWER expression  */
#line 734 "app.y"
                                      { (yyval.real) = pow( (int)(yyvsp[-2].real) , (int)(yyvsp[0].real) )*1.0 ; }
#line 2433 "app.tab.c"
    break;

  case 87: /* expression: INCRE VAR  */
#line 736 "app.y"
                        {
  
  int varID = check_the_variable((yyvsp[0].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(DeclaredBefore[varID] == 1) {

    recordTheInteger[varID] = recordTheInteger[varID] + 1 ;
    (yyval.real) = recordTheInteger[varID]*1.0;
     }
  else if(DeclaredBefore[varID] == 2) { 

    recordTheDecimal[varID] = recordTheDecimal[varID] + 1 ;
    (yyval.real) = recordTheDecimal[varID];
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
#line 2457 "app.tab.c"
    break;

  case 88: /* expression: DECRE VAR  */
#line 755 "app.y"
                        {

  int varID = check_the_variable((yyvsp[0].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(DeclaredBefore[varID] == 1) {

    recordTheInteger[varID] = recordTheInteger[varID] - 1 ;
    (yyval.real) = recordTheInteger[varID]*1.0;
     }
  else if(DeclaredBefore[varID] == 2) { 

    recordTheDecimal[varID] = recordTheDecimal[varID] - 1 ;
    (yyval.real) = recordTheDecimal[varID];
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
#line 2481 "app.tab.c"
    break;

  case 89: /* expression: VAR INCRE  */
#line 775 "app.y"
                        {

  int varID = check_the_variable((yyvsp[-1].text));
  
  if(DeclaredBefore[varID] == 0) 
  {
    printf("\nVaribale not Declared Before.\n");
  }
  else if(DeclaredBefore[varID] == 1) {

    (yyval.real) = recordTheInteger[varID]*1.0;
    recordTheInteger[varID] = recordTheInteger[varID] + 1 ;
     }
  else if(DeclaredBefore[varID] == 2) { 

    (yyval.real) = recordTheDecimal[varID];
    recordTheDecimal[varID] = recordTheDecimal[varID] + 1 ;
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
#line 2508 "app.tab.c"
    break;

  case 90: /* expression: VAR DECRE  */
#line 797 "app.y"
                        {

  int varID = check_the_variable((yyvsp[-1].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared.\n");}
  else if(DeclaredBefore[varID] == 1) {

    (yyval.real) = recordTheInteger[varID]*1.0;
    recordTheInteger[varID] = recordTheInteger[varID] - 1 ;
     }
  else if(DeclaredBefore[varID] == 2) { 

    (yyval.real) = recordTheDecimal[varID];
    recordTheDecimal[varID] = recordTheDecimal[varID] - 1 ;
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
#line 2532 "app.tab.c"
    break;

  case 91: /* expression: NOT expression  */
#line 816 "app.y"
                               {
    (yyval.real) = (!((yyvsp[0].real)))*1.0 ;
}
#line 2540 "app.tab.c"
    break;

  case 92: /* expression: expression LESS expression  */
#line 819 "app.y"
                               { 
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x < y)*1.0 ; 
}
#line 2551 "app.tab.c"
    break;

  case 93: /* expression: expression GREATER expression  */
#line 825 "app.y"
                                        { 
    
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x > y)*1.0 ; 
}
#line 2563 "app.tab.c"
    break;

  case 94: /* expression: expression LESSEQUAL expression  */
#line 832 "app.y"
                                        { 
    
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x <= y)*1.0 ; 
}
#line 2575 "app.tab.c"
    break;

  case 95: /* expression: expression GRTEQUAL expression  */
#line 839 "app.y"
                                       { 
    
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x >= y)*1.0 ; 
}
#line 2587 "app.tab.c"
    break;

  case 96: /* expression: expression EQUAL expression  */
#line 846 "app.y"
                                      { 
    
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x == y)*1.0 ; 
}
#line 2599 "app.tab.c"
    break;

  case 97: /* expression: expression NOTEQUAL expression  */
#line 853 "app.y"
                                       { 
    
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x != y)*1.0 ; 
}
#line 2611 "app.tab.c"
    break;

  case 98: /* expression: expression OR expression  */
#line 860 "app.y"
                                    { 
    
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x || y)*1.0 ; 
}
#line 2623 "app.tab.c"
    break;

  case 99: /* expression: expression AND expression  */
#line 867 "app.y"
                                    { 
    
    int x = (int)(yyvsp[-2].real) ;
    int y = (int)(yyvsp[0].real) ;

    (yyval.real) = (x && y)*1.0 ; 
}
#line 2635 "app.tab.c"
    break;

  case 100: /* expression: LP expression RP  */
#line 874 "app.y"
                               { 
  (yyval.real) = (yyvsp[-1].real); }
#line 2642 "app.tab.c"
    break;

  case 101: /* expression: SIN LP expression RP  */
#line 877 "app.y"
                        {
        (yyval.real) = sin((yyvsp[-1].real));
    }
#line 2650 "app.tab.c"
    break;

  case 102: /* expression: COS LP expression RP  */
#line 880 "app.y"
                          {
        (yyval.real) = cos((yyvsp[-1].real));
    }
#line 2658 "app.tab.c"
    break;

  case 103: /* expression: TAN LP expression RP  */
#line 883 "app.y"
                           {
        (yyval.real) = tan((yyvsp[-1].real));
    }
#line 2666 "app.tab.c"
    break;

  case 104: /* expression: LOG10 LP expression RP  */
#line 886 "app.y"
                             {
        (yyval.real) = log10((yyvsp[-1].real));
    }
#line 2674 "app.tab.c"
    break;

  case 105: /* expression: LOG2 LP expression RP  */
#line 889 "app.y"
                            {
        (yyval.real) = log2((yyvsp[-1].real));
    }
#line 2682 "app.tab.c"
    break;

  case 106: /* expression: FUNC VAR LTB INT VAR RTB  */
#line 894 "app.y"
    {
      printf("function declared");
    }
#line 2690 "app.tab.c"
    break;


#line 2694 "app.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 899 "app.y"


int yywrap()
{
	return 1;
}

void yyerror(char *s)
{
	fprintf(stderr," error %s\n",s);
}

int main()
{
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
	yyparse();
  return 0;
}
