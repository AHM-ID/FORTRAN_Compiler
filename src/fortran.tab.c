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
#line 1 "fortran.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
extern int yylineno;
extern char *yytext;
void free_string(char *str);

#line 83 "fortran.tab.c"

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

#include "fortran.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAM = 3,                    /* PROGRAM  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_SUBROUTINE = 5,                 /* SUBROUTINE  */
  YYSYMBOL_REAL = 6,                       /* REAL  */
  YYSYMBOL_INTEGER = 7,                    /* INTEGER  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_THEN = 9,                       /* THEN  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_ENDIF = 11,                     /* ENDIF  */
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_ENDDO = 13,                     /* ENDDO  */
  YYSYMBOL_CALL = 14,                      /* CALL  */
  YYSYMBOL_GOTO = 15,                      /* GOTO  */
  YYSYMBOL_IDENTIFIER = 16,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONST = 17,             /* INTEGER_CONST  */
  YYSYMBOL_REAL_CONST = 18,                /* REAL_CONST  */
  YYSYMBOL_CHARACTER = 19,                 /* CHARACTER  */
  YYSYMBOL_LOGICAL = 20,                   /* LOGICAL  */
  YYSYMBOL_STRING = 21,                    /* STRING  */
  YYSYMBOL_TRUE = 22,                      /* TRUE  */
  YYSYMBOL_FALSE = 23,                     /* FALSE  */
  YYSYMBOL_PLUS = 24,                      /* PLUS  */
  YYSYMBOL_MINUS = 25,                     /* MINUS  */
  YYSYMBOL_MUL = 26,                       /* MUL  */
  YYSYMBOL_DIV = 27,                       /* DIV  */
  YYSYMBOL_EQUALS = 28,                    /* EQUALS  */
  YYSYMBOL_COMMA = 29,                     /* COMMA  */
  YYSYMBOL_LPAREN = 30,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 31,                    /* RPAREN  */
  YYSYMBOL_DOUBLE_COLON = 32,              /* DOUBLE_COLON  */
  YYSYMBOL_ASTERISKCOMMA = 33,             /* ASTERISKCOMMA  */
  YYSYMBOL_GT = 34,                        /* GT  */
  YYSYMBOL_LT = 35,                        /* LT  */
  YYSYMBOL_GE = 36,                        /* GE  */
  YYSYMBOL_LE = 37,                        /* LE  */
  YYSYMBOL_EQ = 38,                        /* EQ  */
  YYSYMBOL_NE = 39,                        /* NE  */
  YYSYMBOL_AND = 40,                       /* AND  */
  YYSYMBOL_OR = 41,                        /* OR  */
  YYSYMBOL_NOT = 42,                       /* NOT  */
  YYSYMBOL_PRINT = 43,                     /* PRINT  */
  YYSYMBOL_ASSIGN = 44,                    /* ASSIGN  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_statements = 47,                /* statements  */
  YYSYMBOL_statement = 48,                 /* statement  */
  YYSYMBOL_variable_declaration = 49,      /* variable_declaration  */
  YYSYMBOL_variables = 50,                 /* variables  */
  YYSYMBOL_assignment = 51,                /* assignment  */
  YYSYMBOL_print_statement = 52,           /* print_statement  */
  YYSYMBOL_print_list = 53,                /* print_list  */
  YYSYMBOL_print_item = 54,                /* print_item  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_term = 56,                      /* term  */
  YYSYMBOL_factor = 57,                    /* factor  */
  YYSYMBOL_if_statement = 58,              /* if_statement  */
  YYSYMBOL_do_loop = 59,                   /* do_loop  */
  YYSYMBOL_subroutine_call = 60,           /* subroutine_call  */
  YYSYMBOL_arguments = 61,                 /* arguments  */
  YYSYMBOL_argument_list = 62              /* argument_list  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   236

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  119

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    57,    59,    65,    68,    71,    74,    77,
      80,    86,    89,    92,    95,    98,   101,   107,   111,   118,
     122,   130,   136,   139,   145,   148,   155,   159,   163,   167,
     171,   175,   179,   183,   187,   191,   195,   199,   203,   210,
     214,   218,   225,   229,   233,   237,   241,   248,   251,   257,
     260,   266,   272,   274,   280,   283
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
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAM", "END",
  "SUBROUTINE", "REAL", "INTEGER", "IF", "THEN", "ELSE", "ENDIF", "DO",
  "ENDDO", "CALL", "GOTO", "IDENTIFIER", "INTEGER_CONST", "REAL_CONST",
  "CHARACTER", "LOGICAL", "STRING", "TRUE", "FALSE", "PLUS", "MINUS",
  "MUL", "DIV", "EQUALS", "COMMA", "LPAREN", "RPAREN", "DOUBLE_COLON",
  "ASTERISKCOMMA", "GT", "LT", "GE", "LE", "EQ", "NE", "AND", "OR", "NOT",
  "PRINT", "ASSIGN", "$accept", "program", "statements", "statement",
  "variable_declaration", "variables", "assignment", "print_statement",
  "print_list", "print_item", "expression", "term", "factor",
  "if_statement", "do_loop", "subroutine_call", "arguments",
  "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    -7,    12,   -48,   -48,    -1,    11,     3,     9,    55,
      17,    27,    -3,   -22,    16,    22,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,    28,    33,    33,   -48,   -48,   -48,   -48,
     -48,    55,    29,    94,    -6,   -48,    32,    35,   132,     7,
      33,    33,   142,   -48,   -48,    39,    39,   151,    -6,   -48,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    55,    55,   -48,   195,    58,    52,    39,    39,
     -48,    62,   -48,   195,    78,   -48,    20,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,   -48,   -48,   169,
     195,    64,    67,    81,    72,   142,   -48,   -48,   -48,    55,
     -48,    55,    77,    33,   -48,    50,   187,   195,    82,    39,
     -48,    55,    68,    33,   195,   -48,    39,    93,   -48
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     6,    10,
       7,     8,     9,     0,     0,     0,    42,    43,    44,    45,
      46,     0,     0,     0,    26,    39,     0,     0,     0,     0,
       0,     0,     0,     2,    17,    11,    12,     0,    37,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    20,    19,     0,     0,    13,    16,
      25,    21,    22,    24,     0,    38,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    40,    41,     0,
      54,     0,    53,     0,     0,     0,    18,     3,    47,     0,
      51,     0,     0,     0,    23,     0,     3,    55,     0,    14,
      48,     0,     0,     0,     3,    50,    15,     0,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   -47,   -48,   -48,   -24,   -48,   -48,   -48,    15,
      -9,    88,   -23,   -48,   -48,   -48,   -48,   -48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,    16,    17,    45,    18,    19,    71,    72,
      73,    34,    35,    20,    21,    22,    91,    92
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      33,    46,    76,     6,     1,     7,     8,     9,    39,     3,
      40,    10,     4,    11,    23,    12,    68,    69,    13,    14,
      60,    61,    47,    66,    67,    38,     7,     8,     9,    65,
      97,    98,    10,    36,    11,    24,    12,    87,    88,    13,
      14,    25,    15,    37,    43,    26,    27,    28,    41,    44,
     105,    29,    30,    89,    90,    42,     7,     8,     9,   112,
      62,   110,    10,    15,    11,    63,    12,   117,    74,    13,
      14,    26,    27,    28,     7,     8,     9,    29,    30,   109,
      10,   115,    11,    94,    12,    31,    93,    13,    14,   116,
     106,    95,   107,    15,    96,   100,   101,    32,   102,     7,
       8,     9,   114,    49,   103,    10,   118,    11,   108,    12,
     104,    15,    13,    14,   113,     0,     0,     0,    50,    51,
      48,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    15,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    26,    27,
      28,     0,     0,    64,    29,    30,     0,     0,    26,    27,
      28,     0,    31,    70,    29,    30,     0,     0,     0,     0,
       0,     0,    31,     0,    32,    50,    51,     0,     0,     0,
       0,     0,    75,     0,    32,    52,    53,    54,    55,    56,
      57,    58,    59,    50,    51,     0,     0,     0,    99,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
      59,    50,    51,     0,     0,     0,   111,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    52,
      53,    54,    55,    56,    57,    58,    59
};

static const yytype_int8 yycheck[] =
{
       9,    25,    49,     4,     3,     6,     7,     8,    30,    16,
      32,    12,     0,    14,     3,    16,    40,    41,    19,    20,
      26,    27,    31,    16,    17,    28,     6,     7,     8,    38,
      10,    11,    12,    16,    14,    32,    16,    60,    61,    19,
      20,    32,    43,    16,    16,    16,    17,    18,    32,    16,
      97,    22,    23,    62,    63,    33,     6,     7,     8,   106,
      28,    11,    12,    43,    14,    30,    16,   114,    29,    19,
      20,    16,    17,    18,     6,     7,     8,    22,    23,   103,
      12,    13,    14,    31,    16,    30,    28,    19,    20,   113,
      99,    29,   101,    43,    16,    31,    29,    42,    17,     6,
       7,     8,   111,     9,    32,    12,    13,    14,    31,    16,
      95,    43,    19,    20,    32,    -1,    -1,    -1,    24,    25,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    43,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    -1,    16,    17,
      18,    -1,    30,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    42,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    42,    34,    35,    36,    37,    38,
      39,    40,    41,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    24,
      25,    34,    35,    36,    37,    38,    39,    40,    41,    34,
      35,    36,    37,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    46,    16,     0,    47,     4,     6,     7,     8,
      12,    14,    16,    19,    20,    43,    48,    49,    51,    52,
      58,    59,    60,     3,    32,    32,    16,    17,    18,    22,
      23,    30,    42,    55,    56,    57,    16,    16,    28,    30,
      32,    32,    33,    16,    16,    50,    50,    55,    56,     9,
      24,    25,    34,    35,    36,    37,    38,    39,    40,    41,
      26,    27,    28,    30,    21,    55,    16,    17,    50,    50,
      21,    53,    54,    55,    29,    31,    47,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    55,
      55,    61,    62,    28,    31,    29,    16,    10,    11,    29,
      31,    29,    17,    32,    54,    47,    55,    55,    31,    50,
      11,    29,    47,    32,    55,    13,    50,    47,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    49,    49,    49,    49,    49,    49,    50,    50,    51,
      51,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    58,    59,
      59,    60,    61,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     6,     8,     3,     1,     3,     3,
       3,     3,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     5,     7,    10,
       8,     5,     0,     1,     1,     3
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
  case 2: /* program: PROGRAM IDENTIFIER statements END PROGRAM IDENTIFIER  */
#line 46 "fortran.y"
                                                         {
        printf("Parsed program: %s\n", (yyvsp[-4].str));
        if (strcmp((yyvsp[-4].str), (yyvsp[0].str)) != 0) {
            yyerror("Program names do not match");
            YYABORT;
        }
        free_string((yyvsp[-4].str));
        free_string((yyvsp[0].str));
    }
#line 1235 "fortran.tab.c"
    break;

  case 4: /* statements: statements statement  */
#line 59 "fortran.y"
                           {
        printf("Parsed statement\n");
    }
#line 1243 "fortran.tab.c"
    break;

  case 5: /* statement: variable_declaration  */
#line 65 "fortran.y"
                         {
        printf("Parsed variable declaration\n");
    }
#line 1251 "fortran.tab.c"
    break;

  case 6: /* statement: assignment  */
#line 68 "fortran.y"
                 {
        printf("Parsed assignment\n");
    }
#line 1259 "fortran.tab.c"
    break;

  case 7: /* statement: if_statement  */
#line 71 "fortran.y"
                   {
        printf("Parsed if statement\n");
    }
#line 1267 "fortran.tab.c"
    break;

  case 8: /* statement: do_loop  */
#line 74 "fortran.y"
              {
        printf("Parsed do loop\n");
    }
#line 1275 "fortran.tab.c"
    break;

  case 9: /* statement: subroutine_call  */
#line 77 "fortran.y"
                      {
        printf("Parsed subroutine call\n");
    }
#line 1283 "fortran.tab.c"
    break;

  case 10: /* statement: print_statement  */
#line 80 "fortran.y"
                      {
        printf("Parsed print statement\n");
    }
#line 1291 "fortran.tab.c"
    break;

  case 11: /* variable_declaration: REAL DOUBLE_COLON variables  */
#line 86 "fortran.y"
                                {
        printf("Declared REAL variables\n");
    }
#line 1299 "fortran.tab.c"
    break;

  case 12: /* variable_declaration: INTEGER DOUBLE_COLON variables  */
#line 89 "fortran.y"
                                     {
        printf("Declared INTEGER variables\n");
    }
#line 1307 "fortran.tab.c"
    break;

  case 13: /* variable_declaration: CHARACTER DOUBLE_COLON variables  */
#line 92 "fortran.y"
                                       {
        printf("Declared CHARACTER variables\n");
    }
#line 1315 "fortran.tab.c"
    break;

  case 14: /* variable_declaration: CHARACTER LPAREN INTEGER_CONST RPAREN DOUBLE_COLON variables  */
#line 95 "fortran.y"
                                                                   {
        printf("Declared CHARACTER variables with length %d\n", (yyvsp[-3].ival));
    }
#line 1323 "fortran.tab.c"
    break;

  case 15: /* variable_declaration: CHARACTER LPAREN IDENTIFIER EQUALS INTEGER_CONST RPAREN DOUBLE_COLON variables  */
#line 98 "fortran.y"
                                                                                     {
        printf("Declared CHARACTER variables with length %d\n", (yyvsp[-3].ival));
    }
#line 1331 "fortran.tab.c"
    break;

  case 16: /* variable_declaration: LOGICAL DOUBLE_COLON variables  */
#line 101 "fortran.y"
                                     {
        printf("Declared LOGICAL variables\n");
    }
#line 1339 "fortran.tab.c"
    break;

  case 17: /* variables: IDENTIFIER  */
#line 107 "fortran.y"
               {
        printf("Parsed variable: %s\n", (yyvsp[0].str));
        free_string((yyvsp[0].str));
    }
#line 1348 "fortran.tab.c"
    break;

  case 18: /* variables: variables COMMA IDENTIFIER  */
#line 111 "fortran.y"
                                 {
        printf("Parsed variable: %3s\n", (yyvsp[0].str));
        free_string((yyvsp[0].str));
    }
#line 1357 "fortran.tab.c"
    break;

  case 19: /* assignment: IDENTIFIER EQUALS expression  */
#line 118 "fortran.y"
                                 {
        printf("Assigned value to variable: %s\n", (yyvsp[-2].str));
        free_string((yyvsp[-2].str));
    }
#line 1366 "fortran.tab.c"
    break;

  case 20: /* assignment: IDENTIFIER EQUALS STRING  */
#line 122 "fortran.y"
                               {
        printf("Assigned string to variable: %s\n", (yyvsp[-2].str));
        free_string((yyvsp[-2].str));
        free_string((yyvsp[0].str));
    }
#line 1376 "fortran.tab.c"
    break;

  case 21: /* print_statement: PRINT ASTERISKCOMMA print_list  */
#line 130 "fortran.y"
                                   {
        printf("Print statement with string\n");
    }
#line 1384 "fortran.tab.c"
    break;

  case 22: /* print_list: print_item  */
#line 136 "fortran.y"
               {
        printf("Parsed print item\n");
    }
#line 1392 "fortran.tab.c"
    break;

  case 23: /* print_list: print_list COMMA print_item  */
#line 139 "fortran.y"
                                  {
        printf("Parsed print item list\n");
    }
#line 1400 "fortran.tab.c"
    break;

  case 24: /* print_item: expression  */
#line 145 "fortran.y"
               {
        printf("Parsed expression in print statement\n");
    }
#line 1408 "fortran.tab.c"
    break;

  case 25: /* print_item: STRING  */
#line 148 "fortran.y"
             {
        printf("Parsed string in print statement\n");
        free_string((yyvsp[0].str));
    }
#line 1417 "fortran.tab.c"
    break;

  case 26: /* expression: term  */
#line 155 "fortran.y"
         { 
        printf("Parsed expression: term\n");
        (yyval.ival) = (yyvsp[0].ival); // Pass term result
    }
#line 1426 "fortran.tab.c"
    break;

  case 27: /* expression: expression PLUS term  */
#line 159 "fortran.y"
                           { 
        printf("Parsed addition\n");
        (yyval.ival) = (yyvsp[-2].ival) + (yyvsp[0].ival); // Addition operation
    }
#line 1435 "fortran.tab.c"
    break;

  case 28: /* expression: expression MINUS term  */
#line 163 "fortran.y"
                            { 
        printf("Parsed subtraction\n");
        (yyval.ival) = (yyvsp[-2].ival) - (yyvsp[0].ival); // Subtraction operation
    }
#line 1444 "fortran.tab.c"
    break;

  case 29: /* expression: expression GT term  */
#line 167 "fortran.y"
                         { 
        printf("Parsed greater than\n");
        (yyval.ival) = (yyvsp[-2].ival) > (yyvsp[0].ival); // Greater than operation
    }
#line 1453 "fortran.tab.c"
    break;

  case 30: /* expression: expression LT term  */
#line 171 "fortran.y"
                         { 
        printf("Parsed less than\n");
        (yyval.ival) = (yyvsp[-2].ival) < (yyvsp[0].ival); // Less than operation
    }
#line 1462 "fortran.tab.c"
    break;

  case 31: /* expression: expression GE term  */
#line 175 "fortran.y"
                         { 
        printf("Parsed greater than or equal\n");
        (yyval.ival) = (yyvsp[-2].ival) >= (yyvsp[0].ival); // Greater than or equal operation
    }
#line 1471 "fortran.tab.c"
    break;

  case 32: /* expression: expression LE term  */
#line 179 "fortran.y"
                         { 
        printf("Parsed less than or equal\n");
        (yyval.ival) = (yyvsp[-2].ival) <= (yyvsp[0].ival); // Less than or equal operation
    }
#line 1480 "fortran.tab.c"
    break;

  case 33: /* expression: expression EQ term  */
#line 183 "fortran.y"
                         { 
        printf("Parsed equal\n");
        (yyval.ival) = (yyvsp[-2].ival) == (yyvsp[0].ival); // Equal operation
    }
#line 1489 "fortran.tab.c"
    break;

  case 34: /* expression: expression NE term  */
#line 187 "fortran.y"
                         { 
        printf("Parsed not equal\n");
        (yyval.ival) = (yyvsp[-2].ival) != (yyvsp[0].ival); // Not equal operation
    }
#line 1498 "fortran.tab.c"
    break;

  case 35: /* expression: expression AND term  */
#line 191 "fortran.y"
                          { 
        printf("Parsed logical AND\n");
        (yyval.ival) = (yyvsp[-2].ival) && (yyvsp[0].ival); // Logical AND operation
    }
#line 1507 "fortran.tab.c"
    break;

  case 36: /* expression: expression OR term  */
#line 195 "fortran.y"
                         { 
        printf("Parsed logical OR\n");
        (yyval.ival) = (yyvsp[-2].ival) || (yyvsp[0].ival); // Logical OR operation
    }
#line 1516 "fortran.tab.c"
    break;

  case 37: /* expression: NOT term  */
#line 199 "fortran.y"
               { 
        printf("Parsed logical NOT\n");
        (yyval.ival) = !(yyvsp[0].ival); // Logical NOT operation
    }
#line 1525 "fortran.tab.c"
    break;

  case 38: /* expression: LPAREN expression RPAREN  */
#line 203 "fortran.y"
                               { 
        printf("Parsed parenthesized expression\n");
        (yyval.ival) = (yyvsp[-1].ival); // Return the value of the expression inside parentheses
    }
#line 1534 "fortran.tab.c"
    break;

  case 39: /* term: factor  */
#line 210 "fortran.y"
           { 
        printf("Parsed term: factor\n");
        (yyval.ival) = (yyvsp[0].ival); // Pass factor result
    }
#line 1543 "fortran.tab.c"
    break;

  case 40: /* term: term MUL factor  */
#line 214 "fortran.y"
                      { 
        printf("Parsed multiplication\n");
        (yyval.ival) = (yyvsp[-2].ival) * (yyvsp[0].ival); // Multiplication operation
    }
#line 1552 "fortran.tab.c"
    break;

  case 41: /* term: term DIV factor  */
#line 218 "fortran.y"
                      { 
        printf("Parsed division\n");
        (yyval.ival) = (yyvsp[-2].ival) / (yyvsp[0].ival); // Division operation
    }
#line 1561 "fortran.tab.c"
    break;

  case 42: /* factor: IDENTIFIER  */
#line 225 "fortran.y"
               { 
        printf("Parsed identifier: %s\n", (yyvsp[0].str));
        (yyval.ival) = 1; // Placeholder for identifier value (to be defined further)
    }
#line 1570 "fortran.tab.c"
    break;

  case 43: /* factor: INTEGER_CONST  */
#line 229 "fortran.y"
                    { 
        printf("Parsed integer constant: %d\n", (yyvsp[0].ival));
        (yyval.ival) = (yyvsp[0].ival); // Assign integer constant value
    }
#line 1579 "fortran.tab.c"
    break;

  case 44: /* factor: REAL_CONST  */
#line 233 "fortran.y"
                 { 
        printf("Parsed real constant: %f\n", (yyvsp[0].rval));
        (yyval.ival) = (yyvsp[0].rval); // Assign real constant value
    }
#line 1588 "fortran.tab.c"
    break;

  case 45: /* factor: TRUE  */
#line 237 "fortran.y"
           { 
        printf("Parsed TRUE\n");
        (yyval.ival) = 1; // TRUE is represented as 1
    }
#line 1597 "fortran.tab.c"
    break;

  case 46: /* factor: FALSE  */
#line 241 "fortran.y"
            { 
        printf("Parsed FALSE\n");
        (yyval.ival) = 0; // FALSE is represented as 0
    }
#line 1606 "fortran.tab.c"
    break;

  case 47: /* if_statement: IF expression THEN statements ENDIF  */
#line 248 "fortran.y"
                                        {
        printf("Parsed IF statement\n");
    }
#line 1614 "fortran.tab.c"
    break;

  case 48: /* if_statement: IF expression THEN statements ELSE statements ENDIF  */
#line 251 "fortran.y"
                                                          {
        printf("Parsed IF-ELSE statement\n");
    }
#line 1622 "fortran.tab.c"
    break;

  case 49: /* do_loop: DO IDENTIFIER EQUALS expression COMMA expression COMMA expression statements ENDDO  */
#line 257 "fortran.y"
                                                                                       {
        printf("Parsed DO loop with step: %s = %d, %d, %d\n", (yyvsp[-8].str), (yyvsp[-6].ival), (yyvsp[-4].ival), (yyvsp[-2].ival));
    }
#line 1630 "fortran.tab.c"
    break;

  case 50: /* do_loop: DO IDENTIFIER EQUALS expression COMMA expression statements ENDDO  */
#line 260 "fortran.y"
                                                                        {
        printf("Parsed DO loop without step: %s = %d, %d\n", (yyvsp[-6].str), (yyvsp[-4].ival), (yyvsp[-2].ival));
    }
#line 1638 "fortran.tab.c"
    break;

  case 51: /* subroutine_call: CALL IDENTIFIER LPAREN arguments RPAREN  */
#line 266 "fortran.y"
                                            {
        printf("Called subroutine: %s\n", (yyvsp[-3].str));
        free_string((yyvsp[-3].str));
    }
#line 1647 "fortran.tab.c"
    break;

  case 53: /* arguments: argument_list  */
#line 274 "fortran.y"
                    {
        printf("Parsed arguments\n");
    }
#line 1655 "fortran.tab.c"
    break;

  case 54: /* argument_list: expression  */
#line 280 "fortran.y"
               {
        printf("Parsed argument\n");
    }
#line 1663 "fortran.tab.c"
    break;

  case 55: /* argument_list: argument_list COMMA expression  */
#line 283 "fortran.y"
                                     {
        printf("Parsed argument\n");
    }
#line 1671 "fortran.tab.c"
    break;


#line 1675 "fortran.tab.c"

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

#line 288 "fortran.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, near '%s'\n", s, yylineno, yytext);
}

void free_string(char *str) {
    if (str) {
        free(str);
    }
}

int main(void) {
    return yyparse();
}
