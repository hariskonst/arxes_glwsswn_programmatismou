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
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>

    void yyerror(const char *s);
    int yylex();
    extern FILE *yyin;
    extern int yylineno; //pairnw ton metrhth grammwn apo to flex

#line 81 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MYHTML_OPEN = 3,                /* MYHTML_OPEN  */
  YYSYMBOL_MYHTML_CLOSE = 4,               /* MYHTML_CLOSE  */
  YYSYMBOL_HEAD_OPEN = 5,                  /* HEAD_OPEN  */
  YYSYMBOL_HEAD_CLOSE = 6,                 /* HEAD_CLOSE  */
  YYSYMBOL_TITLE_OPEN = 7,                 /* TITLE_OPEN  */
  YYSYMBOL_TITLE_CLOSE = 8,                /* TITLE_CLOSE  */
  YYSYMBOL_META = 9,                       /* META  */
  YYSYMBOL_BODY_OPEN = 10,                 /* BODY_OPEN  */
  YYSYMBOL_BODY_CLOSE = 11,                /* BODY_CLOSE  */
  YYSYMBOL_P_OPEN = 12,                    /* P_OPEN  */
  YYSYMBOL_P_CLOSE = 13,                   /* P_CLOSE  */
  YYSYMBOL_DIV_OPEN = 14,                  /* DIV_OPEN  */
  YYSYMBOL_DIV_CLOSE = 15,                 /* DIV_CLOSE  */
  YYSYMBOL_A_OPEN = 16,                    /* A_OPEN  */
  YYSYMBOL_A_CLOSE = 17,                   /* A_CLOSE  */
  YYSYMBOL_IMAGE = 18,                     /* IMAGE  */
  YYSYMBOL_FORM_OPEN = 19,                 /* FORM_OPEN  */
  YYSYMBOL_FORM_CLOSE = 20,                /* FORM_CLOSE  */
  YYSYMBOL_LABEL_OPEN = 21,                /* LABEL_OPEN  */
  YYSYMBOL_LABEL_CLOSE = 22,               /* LABEL_CLOSE  */
  YYSYMBOL_INPUT = 23,                     /* INPUT  */
  YYSYMBOL_INT = 24,                       /* INT  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_TEXT = 26,                      /* TEXT  */
  YYSYMBOL_MEGALYTERO = 27,                /* MEGALYTERO  */
  YYSYMBOL_ISON = 28,                      /* ISON  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_CHARSET = 30,                   /* CHARSET  */
  YYSYMBOL_NAME = 31,                      /* NAME  */
  YYSYMBOL_CONTENT = 32,                   /* CONTENT  */
  YYSYMBOL_STYLE = 33,                     /* STYLE  */
  YYSYMBOL_HREF = 34,                      /* HREF  */
  YYSYMBOL_SRC = 35,                       /* SRC  */
  YYSYMBOL_ALT = 36,                       /* ALT  */
  YYSYMBOL_WIDTH = 37,                     /* WIDTH  */
  YYSYMBOL_HEIGHT = 38,                    /* HEIGHT  */
  YYSYMBOL_VALUE = 39,                     /* VALUE  */
  YYSYMBOL_TYPE = 40,                      /* TYPE  */
  YYSYMBOL_FOR = 41,                       /* FOR  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_head_opt = 44,                  /* head_opt  */
  YYSYMBOL_head_block = 45,                /* head_block  */
  YYSYMBOL_meta_list = 46,                 /* meta_list  */
  YYSYMBOL_meta_block = 47,                /* meta_block  */
  YYSYMBOL_meta_attr_list = 48,            /* meta_attr_list  */
  YYSYMBOL_body_opt = 49,                  /* body_opt  */
  YYSYMBOL_body_elements = 50,             /* body_elements  */
  YYSYMBOL_p_block = 51,                   /* p_block  */
  YYSYMBOL_p_attr_list = 52,               /* p_attr_list  */
  YYSYMBOL_p_content = 53,                 /* p_content  */
  YYSYMBOL_div_block = 54,                 /* div_block  */
  YYSYMBOL_div_attr_list = 55,             /* div_attr_list  */
  YYSYMBOL_div_opt = 56,                   /* div_opt  */
  YYSYMBOL_div_elements = 57,              /* div_elements  */
  YYSYMBOL_a_block = 58,                   /* a_block  */
  YYSYMBOL_a_attr_list = 59,               /* a_attr_list  */
  YYSYMBOL_a_opt = 60,                     /* a_opt  */
  YYSYMBOL_img_block = 61,                 /* img_block  */
  YYSYMBOL_img_attr_list = 62,             /* img_attr_list  */
  YYSYMBOL_I = 63,                         /* I  */
  YYSYMBOL_K = 64,                         /* K  */
  YYSYMBOL_form_block = 65,                /* form_block  */
  YYSYMBOL_form_attr_list = 66,            /* form_attr_list  */
  YYSYMBOL_form_opt = 67,                  /* form_opt  */
  YYSYMBOL_form_elements = 68,             /* form_elements  */
  YYSYMBOL_input_block = 69,               /* input_block  */
  YYSYMBOL_input_attr_list = 70,           /* input_attr_list  */
  YYSYMBOL_label_block = 71,               /* label_block  */
  YYSYMBOL_lbl_attr_list = 72,             /* lbl_attr_list  */
  YYSYMBOL_text = 73                       /* text  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1349

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  938

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    45,    46,    50,    54,    55,    59,    63,
      63,    67,    68,    72,    73,    74,    75,    76,    80,    84,
      84,    84,    88,    88,    91,    94,    94,    94,    98,    98,
     102,   103,   104,   105,   109,   112,   112,   116,   117,   118,
     119,   123,   127,   127,   127,   127,   127,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   131,   131,   131,   131,   131,   132,   132,   132,
     132,   132,   133,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   135,   135,   135,   135,   135,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   140,   141,   141,   141,   141,   141,   142,   142,   142,
     142,   142,   143,   143,   143,   143,   143,   144,   144,   144,
     144,   144,   145,   145,   145,   145,   145,   146,   146,   146,
     146,   146,   147,   147,   147,   147,   147,   148,   148,   148,
     148,   148,   149,   149,   149,   149,   149,   150,   150,   150,
     150,   150,   151,   151,   151,   151,   152,   152,   152,   152,
     153,   153,   153,   153,   154,   154,   154,   154,   155,   155,
     155,   155,   156,   156,   156,   156,   157,   157,   157,   157,
     158,   158,   158,   158,   159,   159,   159,   159,   160,   160,
     160,   160,   161,   161,   161,   161,   162,   162,   162,   162,
     163,   163,   164,   164,   165,   165,   169,   173,   177,   180,
     180,   180,   184,   185,   189,   190,   194,   198,   198,   199,
     199,   199,   200,   200,   200,   201,   201,   201,   202,   202,
     202,   203,   203,   203,   203,   204,   204,   204,   204,   205,
     205,   205,   205,   206,   206,   206,   206,   207,   207,   207,
     207,   208,   208,   208,   208,   212,   215,   215,   216,   216,
     216,   217,   217,   217,   221,   222
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
  "\"end of file\"", "error", "\"invalid token\"", "MYHTML_OPEN",
  "MYHTML_CLOSE", "HEAD_OPEN", "HEAD_CLOSE", "TITLE_OPEN", "TITLE_CLOSE",
  "META", "BODY_OPEN", "BODY_CLOSE", "P_OPEN", "P_CLOSE", "DIV_OPEN",
  "DIV_CLOSE", "A_OPEN", "A_CLOSE", "IMAGE", "FORM_OPEN", "FORM_CLOSE",
  "LABEL_OPEN", "LABEL_CLOSE", "INPUT", "INT", "STRING", "TEXT",
  "MEGALYTERO", "ISON", "ID", "CHARSET", "NAME", "CONTENT", "STYLE",
  "HREF", "SRC", "ALT", "WIDTH", "HEIGHT", "VALUE", "TYPE", "FOR",
  "$accept", "program", "head_opt", "head_block", "meta_list",
  "meta_block", "meta_attr_list", "body_opt", "body_elements", "p_block",
  "p_attr_list", "p_content", "div_block", "div_attr_list", "div_opt",
  "div_elements", "a_block", "a_attr_list", "a_opt", "img_block",
  "img_attr_list", "I", "K", "form_block", "form_attr_list", "form_opt",
  "form_elements", "input_block", "input_attr_list", "label_block",
  "lbl_attr_list", "text", YY_NULLPTR
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
       7,    48,    23,   110,    94,   -48,   -48,   112,   -48,   -48,
      -6,    95,   -48,   -48,   225,    87,   216,   218,    14,   222,
     -48,   -48,   -48,   -48,   -48,   -48,   145,   -48,   256,   285,
     249,   309,   309,   320,   313,   373,   376,   309,   309,   309,
     379,   379,   382,   439,   442,   413,   -48,   231,   -48,   446,
     447,   112,   448,   441,   449,   200,   450,   451,   127,   229,
      18,    45,   453,    49,    97,   -48,   454,   455,   284,   456,
     457,   459,   458,   452,   469,   461,   -48,   309,   309,   -48,
     103,   -48,   -48,   -48,   -48,   460,   463,   466,   -48,   130,
     309,   309,   379,   379,   309,   309,   379,   379,   309,   309,
     379,   379,   -48,   309,   309,   309,   379,   309,   309,   309,
     379,   462,   464,   -20,   -21,   248,   -48,   -48,   -48,   465,
     471,   -48,   470,   472,   -48,   -48,   -48,   -48,   -48,   473,
     474,   -48,   -48,   171,   235,   239,   262,   388,    31,     6,
      28,   266,    52,    57,   102,   287,    62,    59,   186,   392,
     164,   107,   188,   475,   476,   309,   309,   309,   478,   309,
     309,   309,   309,   479,   -48,   -48,   -48,   467,   482,   483,
     484,   485,   309,   379,   379,   309,   379,   379,   309,   309,
     379,   309,   309,   379,   309,   379,   379,   309,   379,   379,
     309,   309,   379,   309,   309,   379,   309,   379,   379,   309,
     379,   379,   309,   309,   379,   309,   309,   379,   309,   309,
     379,   309,   309,   379,   309,   309,   379,   309,   309,   309,
     309,   309,   379,   309,   309,   379,   309,   309,   379,   309,
     309,   309,   486,   487,   124,   -26,   224,   112,   187,   -15,
      -7,     1,   -48,   488,   -48,   -48,   -48,   -48,    -1,   273,
     394,   395,   293,   282,   291,   308,   399,   400,   298,   403,
     404,   315,   407,   408,    32,   131,   319,    64,   196,   411,
     167,   199,   412,   314,   324,   414,    67,   173,   383,    70,
       3,   330,   174,   106,   335,   384,   418,   341,    72,   201,
     385,    74,   134,   420,   202,   137,   421,   348,   424,   425,
     176,   204,   360,   177,   146,   428,   205,   149,   -48,   -48,
     309,   309,   309,   309,   309,   309,   232,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   489,
     379,   379,   309,   379,   309,   379,   379,   379,   309,   379,
     309,   379,   309,   379,   309,   379,   309,   309,   309,   379,
     309,   379,   309,   309,   379,   379,   309,   379,   309,   379,
     379,   379,   309,   379,   309,   379,   309,   379,   309,   379,
     309,   309,   309,   379,   309,   379,   309,   309,   379,   379,
     309,   379,   309,   379,   379,   379,   309,   379,   309,   379,
     309,   379,   309,   379,   309,   309,   309,   379,   309,   379,
     309,   309,   309,   379,   309,   379,   309,   309,   309,   379,
     309,   379,   309,   309,   309,   379,   309,   379,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   379,   309,   379,
     309,   309,   309,   379,   309,   379,   309,   309,   309,   379,
     309,   379,   309,   309,   309,   309,   309,   309,   309,   309,
     477,   480,   481,   468,   490,   491,   -48,   426,   203,   209,
     429,   -13,     0,   206,   -12,   227,   211,     2,   230,   -48,
     492,   494,   495,   493,   497,   496,   498,   500,   501,   503,
     504,   505,   506,   499,   507,   508,   510,   512,   511,   513,
     514,   515,   516,   518,   517,   519,   550,   521,   552,   554,
     556,   555,   557,   525,   559,   569,   562,   566,   568,   579,
     576,   584,   577,   580,   581,   590,   586,   591,   588,   587,
     592,   597,   599,   602,   600,   603,   604,   614,   607,   617,
     610,   615,   616,   627,   631,   633,   635,   639,   647,   657,
     655,   663,   630,   660,   670,   674,   662,   675,   676,   677,
     679,   689,   685,   693,   686,   688,   690,   697,   692,   701,
     695,   698,   696,   705,   700,   707,   702,   704,   706,   703,
     708,   710,   709,   711,   712,   713,   714,   719,   715,   716,
     717,   724,   720,   727,   721,   723,   725,   730,   728,   731,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     379,   379,   379,   309,   379,   309,   379,   379,   379,   309,
     379,   309,   379,   309,   379,   309,   309,   309,   379,   309,
     379,   309,   309,   309,   379,   379,   379,   309,   379,   309,
     379,   379,   379,   309,   379,   309,   379,   309,   379,   309,
     309,   309,   379,   309,   379,   309,   309,   309,   379,   379,
     379,   309,   379,   309,   379,   379,   379,   309,   379,   309,
     379,   309,   379,   309,   309,   309,   379,   309,   379,   309,
     309,   309,   379,   309,   379,   309,   309,   309,   379,   309,
     379,   309,   309,   309,   379,   309,   379,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   379,   309,   379,   309,
     309,   309,   379,   309,   379,   309,   309,   309,   379,   309,
     379,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     -48,   -48,   -48,   -48,   -48,   -48,   502,   726,   722,   733,
     729,   734,   732,   735,   736,   740,   738,   741,   739,   742,
     743,   744,   745,   751,   746,   748,   747,   753,   754,   755,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     4,     0,     0,     0,     3,     1,     0,    12,   275,
       0,     0,     7,   274,     0,     0,     0,     0,     0,     0,
      11,    13,    14,    15,    17,    16,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     6,     0,
       0,    23,     0,    25,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,    19,     0,     0,    22,   217,     0,     0,    30,
       0,    29,    31,    33,    32,     0,     0,     0,    38,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,   223,   224,   225,     0,
       0,     8,     0,     0,    18,    26,    27,    24,    28,     0,
       0,    34,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   222,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   226,     0,    20,    21,    35,    36,   210,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,   215,     0,     0,   214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,   267,     0,   265,     0,     0,   228,
       0,     0,     0,     0,     0,     0,   227,     0,     0,    10,
     165,   189,   164,     0,   188,     0,   169,   193,   168,     0,
     192,     0,   163,     0,   167,     0,     0,     0,   187,     0,
     191,     0,     0,     0,   177,   201,   176,     0,   200,     0,
     173,   197,   172,     0,   196,     0,   175,     0,   171,     0,
       0,     0,   199,     0,   195,     0,     0,     0,   185,   209,
     184,     0,   208,     0,   181,   205,   180,     0,   204,     0,
     183,     0,   179,     0,     0,     0,   207,     0,   203,     0,
       0,     0,   162,     0,   166,     0,     0,     0,   174,     0,
     170,     0,     0,     0,   182,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,   190,     0,
       0,     0,   198,     0,   194,     0,     0,     0,   206,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     269,   270,   268,   271,   273,   272,     0,   239,     0,   233,
     240,   234,     0,   238,     0,     0,   235,     0,     0,   232,
       0,     0,   229,     0,   237,   231,   236,     0,   230,     0,
      61,    60,    56,    55,    59,    54,    81,    80,    76,    75,
      79,    74,    51,    50,    71,    70,    49,    69,    58,    53,
      78,    73,    48,    68,   101,   100,    96,    95,    99,    94,
     121,   120,   116,   115,   119,   114,    91,    90,   111,   110,
      89,   109,    98,    93,   118,   113,    88,   108,   161,   160,
     156,   155,   159,   154,   141,   140,   136,   135,   139,   134,
     151,   150,   131,   130,   149,   129,   158,   153,   138,   133,
     148,   128,    46,    45,    66,    65,    44,    64,    86,    85,
     106,   105,    84,   104,   146,   145,   126,   125,   144,   124,
      43,    63,    83,   103,   143,   123,    57,    52,    77,    72,
      47,    67,    97,    92,   117,   112,    87,   107,   157,   152,
     137,   132,   147,   127,    42,    62,    82,   102,   142,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   260,   258,   262,   264,   263,
     255,   256,   254,   242,   244,   243,   257,   261,   253,   241,
     249,   245,   252,   251,   248,   247,   250,   246
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   760,
     -48,   -48,   -48,   -48,   -48,   409,   777,   -48,   -48,   -10,
     -48,   619,   -32,   778,   -48,   -48,   402,   -48,   -48,   -48,
     -48,   -47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     4,     5,    26,    48,    71,    11,    20,    79,
      30,    74,    22,    33,    80,    81,    82,    36,    87,    83,
      42,    63,    53,    84,    45,   115,   116,   117,   163,   118,
     158,    10
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    24,    12,   312,    75,    59,    60,    61,   159,   155,
       1,    89,   160,   156,   320,   313,   604,   610,   161,   162,
      13,   157,   323,     6,   321,   322,   324,   605,   611,   606,
     326,   616,   394,   325,   327,   190,   330,   331,   395,   607,
     328,   617,   191,    37,   192,   125,   126,    94,    88,    38,
      39,    40,    41,     3,    95,    96,    97,   193,   133,   134,
     187,   362,   137,   138,   194,   195,   141,   142,   188,   189,
     363,   145,   146,   147,    98,   149,   150,   151,   103,   132,
      99,   199,   100,   101,   104,   105,   202,   106,   214,   200,
     201,   211,   203,   368,   215,   204,   386,   216,   212,   392,
     213,   410,   369,   416,     8,   387,    14,    15,   393,    16,
     411,    17,   417,    18,    19,    15,    28,     7,   127,    17,
      29,    18,    19,   234,   235,   236,   107,   238,   239,   240,
     241,   205,   108,   109,   110,   400,   226,   206,     9,   207,
     248,   401,   227,   251,   228,    18,   254,   255,    18,   257,
     258,    46,   260,     9,    47,   263,    13,   310,   266,   267,
     364,   269,   270,   418,   272,   311,   424,   275,   365,   419,
     278,   279,   425,   281,   282,   442,   284,   285,   448,   287,
     288,   443,   290,   291,   449,   293,   294,   295,   296,   297,
     316,   299,   300,   223,   302,   303,   374,   305,   306,   307,
     224,   225,   388,   398,   375,   434,   440,   172,   173,   174,
     389,   399,    15,   435,   441,   217,    17,   229,    18,    19,
     317,   218,   219,   230,   231,   370,   318,   319,   376,    27,
     412,   422,   371,   436,   446,   377,   598,   413,   423,   608,
     437,   447,   600,   599,   614,    31,   609,    34,   601,    32,
     615,    43,    35,   314,   456,    44,   612,   315,    13,   618,
     613,    69,    70,   619,    90,    91,    92,    93,   164,   113,
     175,   114,   176,   177,   178,   179,    51,   180,   450,   451,
     452,   453,   454,   455,    49,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   181,   182,   183,
     472,   196,   474,   197,   198,   113,   478,   114,   480,   332,
     482,   333,   484,    50,   486,   487,   488,   340,   490,   341,
     492,   493,   208,   209,   496,   210,   498,   342,   338,   343,
     502,   339,   504,   350,   506,   351,   508,    52,   510,   511,
     512,    56,   514,   344,   516,   517,   345,    55,   520,   380,
     522,   356,   381,   357,   526,   366,   528,   367,   530,   382,
     532,   383,   534,   535,   536,   396,   538,   397,   540,   541,
     542,   402,   544,   403,   546,   547,   548,   408,   550,   409,
     552,   553,   554,   428,   556,   429,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   438,   568,   439,   570,   571,
     572,    57,   574,    58,   576,   577,   578,    62,   580,    65,
     582,   583,   584,   585,   586,   587,   588,   589,   390,   404,
     414,   391,   405,   415,   184,   185,   186,   220,   221,   222,
     334,   335,   336,   337,   346,   347,   348,   349,   352,   353,
      68,   354,   355,   358,   359,   360,   361,   372,   373,   378,
     379,   384,   385,   406,   407,   420,   421,   426,   427,   430,
     431,   432,   433,   444,   445,   596,   597,    66,   602,   603,
      67,    72,    73,    76,    77,    85,    86,   102,    78,   111,
     112,   123,   124,   131,   119,   120,   121,    13,     0,   128,
     166,   122,   130,   154,   129,   153,   167,   593,   168,   243,
     169,   170,   171,   232,   233,   237,   242,   244,   245,   246,
     247,   308,   309,   591,   469,     0,   329,   165,   590,     0,
     595,     0,   592,   594,     0,     0,     0,     0,     0,   623,
     620,   621,   625,   622,   624,   633,   626,   627,   629,   628,
     631,   630,   890,   635,   632,   634,   636,   637,   638,   639,
     641,   640,   642,   643,   653,   644,   645,   647,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   769,   646,   648,
     649,   773,   651,   775,   650,   652,   654,   779,   655,   781,
     656,   783,   657,   785,   786,   787,   658,   789,   659,   791,
     792,   793,   660,   661,   662,   797,   663,   799,   664,   665,
     667,   803,   666,   805,   669,   807,   668,   809,   810,   811,
     670,   813,   671,   815,   816,   817,   672,   673,   674,   821,
     675,   823,   676,   677,   678,   827,   679,   829,   680,   831,
     681,   833,   834,   835,   682,   837,   683,   839,   840,   841,
      64,   843,   685,   845,   846,   847,   684,   849,   692,   851,
     852,   853,   686,   855,   687,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   688,   867,   689,   869,   870,   871,
     690,   873,   691,   875,   876,   877,   693,   879,   696,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   694,   695,
     697,   135,   136,   699,   698,   139,   140,   700,   701,   143,
     144,   702,   703,   705,   704,   148,   707,   708,   706,   152,
     709,   710,   712,   711,   713,   714,   715,     0,   719,   716,
     717,     0,   725,   718,   720,   721,   722,   723,   727,   724,
     726,   729,   728,   731,   730,   732,   733,   734,   735,   737,
     739,   736,   892,   738,     0,   891,   893,   895,   894,   899,
     901,    21,   896,   905,   897,   903,   898,   900,   906,   902,
     907,   909,   911,   904,   913,   908,   910,   912,    23,    25,
       0,     0,   249,   250,     0,   252,   253,     0,     0,   256,
       0,     0,   259,     0,   261,   262,     0,   264,   265,     0,
       0,   268,     0,     0,   271,     0,   273,   274,     0,   276,
     277,     0,     0,   280,     0,     0,   283,     0,     0,   286,
       0,     0,   289,     0,     0,   292,     0,     0,     0,     0,
       0,   298,     0,     0,   301,     0,     0,   304,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     936,   937,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
     471,     0,   473,     0,   475,   476,   477,     0,   479,     0,
     481,     0,   483,     0,   485,     0,     0,     0,   489,     0,
     491,     0,     0,   494,   495,     0,   497,     0,   499,   500,
     501,     0,   503,     0,   505,     0,   507,     0,   509,     0,
       0,     0,   513,     0,   515,     0,     0,   518,   519,     0,
     521,     0,   523,   524,   525,     0,   527,     0,   529,     0,
     531,     0,   533,     0,     0,     0,   537,     0,   539,     0,
       0,     0,   543,     0,   545,     0,     0,     0,   549,     0,
     551,     0,     0,     0,   555,     0,   557,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   567,     0,   569,     0,
       0,     0,   573,     0,   575,     0,     0,     0,   579,     0,
     581,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   770,
     771,   772,     0,   774,     0,   776,   777,   778,     0,   780,
       0,   782,     0,   784,     0,     0,     0,   788,     0,   790,
       0,     0,     0,   794,   795,   796,     0,   798,     0,   800,
     801,   802,     0,   804,     0,   806,     0,   808,     0,     0,
       0,   812,     0,   814,     0,     0,     0,   818,   819,   820,
       0,   822,     0,   824,   825,   826,     0,   828,     0,   830,
       0,   832,     0,     0,     0,   836,     0,   838,     0,     0,
       0,   842,     0,   844,     0,     0,     0,   848,     0,   850,
       0,     0,     0,   854,     0,   856,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   866,     0,   868,     0,     0,
       0,   872,     0,   874,     0,     0,     0,   878,     0,   880
};

static const yytype_int16 yycheck[] =
{
      32,    11,     8,    29,    51,    37,    38,    39,    29,    29,
       3,    58,    33,    33,    29,    41,    29,    29,    39,    40,
      26,    41,    29,     0,    39,    40,    33,    40,    40,    29,
      29,    29,    29,    40,    33,    29,    37,    38,    35,    39,
      39,    39,    36,    29,    38,    77,    78,    29,    58,    35,
      36,    37,    38,     5,    36,    37,    38,    29,    90,    91,
      29,    29,    94,    95,    36,    37,    98,    99,    37,    38,
      38,   103,   104,   105,    29,   107,   108,   109,    29,    89,
      35,    29,    37,    38,    35,    36,    29,    38,    29,    37,
      38,    29,    35,    29,    35,    38,    29,    38,    36,    29,
      38,    29,    38,    29,    10,    38,    11,    12,    38,    14,
      38,    16,    38,    18,    19,    12,    29,     7,    15,    16,
      33,    18,    19,   155,   156,   157,    29,   159,   160,   161,
     162,    29,    35,    36,    37,    29,    29,    35,    26,    37,
     172,    35,    35,   175,    37,    18,   178,   179,    18,   181,
     182,     6,   184,    26,     9,   187,    26,    33,   190,   191,
      29,   193,   194,    29,   196,    41,    29,   199,    37,    35,
     202,   203,    35,   205,   206,    29,   208,   209,    29,   211,
     212,    35,   214,   215,    35,   217,   218,   219,   220,   221,
     237,   223,   224,    29,   226,   227,    29,   229,   230,   231,
      36,    37,    29,    29,    37,    29,    29,    36,    37,    38,
      37,    37,    12,    37,    37,    29,    16,    29,    18,    19,
      33,    35,    36,    35,    36,    29,    39,    40,    29,     4,
      29,    29,    36,    29,    29,    36,    33,    36,    36,    33,
      36,    36,    33,    40,    33,    29,    40,    29,    39,    33,
      39,    29,    34,    29,    22,    33,    29,    33,    26,    29,
      33,    30,    31,    33,    35,    36,    37,    38,    20,    21,
      35,    23,    37,    38,    35,    36,    27,    38,   310,   311,
     312,   313,   314,   315,    28,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,    35,    36,    37,
     332,    35,   334,    37,    38,    21,   338,    23,   340,    36,
     342,    38,   344,    28,   346,   347,   348,    35,   350,    37,
     352,   353,    35,    36,   356,    38,   358,    36,    35,    38,
     362,    38,   364,    35,   366,    37,   368,    28,   370,   371,
     372,    28,   374,    35,   376,   377,    38,    27,   380,    35,
     382,    36,    38,    38,   386,    36,   388,    38,   390,    35,
     392,    37,   394,   395,   396,    35,   398,    37,   400,   401,
     402,    36,   404,    38,   406,   407,   408,    36,   410,    38,
     412,   413,   414,    35,   416,    37,   418,   419,   420,   421,
     422,   423,   424,   425,   426,    35,   428,    37,   430,   431,
     432,    28,   434,    27,   436,   437,   438,    28,   440,    27,
     442,   443,   444,   445,   446,   447,   448,   449,    35,    35,
      35,    38,    38,    38,    36,    37,    38,    35,    36,    37,
      36,    37,    37,    38,    35,    36,    36,    37,    35,    36,
      27,    37,    38,    36,    37,    37,    38,    36,    37,    37,
      38,    37,    38,    35,    36,    35,    36,    36,    37,    35,
      36,    36,    37,    35,    36,    39,    40,    28,    39,    40,
      28,    25,    25,    25,    33,    25,    25,    24,    29,    25,
      25,    29,    13,    17,    28,    28,    27,    26,    -1,    80,
      25,    33,    29,    29,    34,    33,    25,    29,    28,    32,
      28,    28,    28,    28,    28,    27,    27,    25,    25,    25,
      25,    25,    25,    33,    25,    -1,    28,   115,    41,    -1,
      29,    -1,    41,    33,    -1,    -1,    -1,    -1,    -1,    36,
      38,    37,    36,    38,    37,    36,    38,    37,    35,    38,
      35,    37,    40,    35,    38,    38,    36,    35,    37,    36,
      35,    37,    36,    35,    29,    38,    37,    36,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,    38,    37,
      36,   623,    37,   625,    38,    38,    37,   629,    29,   631,
      38,   633,    36,   635,   636,   637,    38,   639,    29,   641,
     642,   643,    36,    29,    37,   647,    36,   649,    37,    29,
      29,   653,    36,   655,    37,   657,    38,   659,   660,   661,
      38,   663,    35,   665,   666,   667,    37,    35,    38,   671,
      37,   673,    38,    29,    37,   677,    29,   679,    38,   681,
      35,   683,   684,   685,    38,   687,    29,   689,   690,   691,
      41,   693,    29,   695,   696,   697,    35,   699,    38,   701,
     702,   703,    37,   705,    35,   707,   708,   709,   710,   711,
     712,   713,   714,   715,    37,   717,    29,   719,   720,   721,
      35,   723,    29,   725,   726,   727,    36,   729,    36,   731,
     732,   733,   734,   735,   736,   737,   738,   739,    38,    35,
      35,    92,    93,    36,    38,    96,    97,    38,    29,   100,
     101,    36,    29,    35,    38,   106,    29,    35,    38,   110,
      29,    36,    36,    35,    29,    35,    29,    -1,    35,    37,
      36,    -1,    29,    37,    36,    35,    37,    36,    29,    37,
      36,    35,    37,    29,    37,    35,    29,    36,    35,    29,
      29,    36,    40,    35,    -1,    39,    33,    33,    39,    29,
      29,    11,    40,    29,    39,    33,    40,    39,    33,    40,
      29,    33,    29,    40,    29,    39,    39,    33,    11,    11,
      -1,    -1,   173,   174,    -1,   176,   177,    -1,    -1,   180,
      -1,    -1,   183,    -1,   185,   186,    -1,   188,   189,    -1,
      -1,   192,    -1,    -1,   195,    -1,   197,   198,    -1,   200,
     201,    -1,    -1,   204,    -1,    -1,   207,    -1,    -1,   210,
      -1,    -1,   213,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,   222,    -1,    -1,   225,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
     331,    -1,   333,    -1,   335,   336,   337,    -1,   339,    -1,
     341,    -1,   343,    -1,   345,    -1,    -1,    -1,   349,    -1,
     351,    -1,    -1,   354,   355,    -1,   357,    -1,   359,   360,
     361,    -1,   363,    -1,   365,    -1,   367,    -1,   369,    -1,
      -1,    -1,   373,    -1,   375,    -1,    -1,   378,   379,    -1,
     381,    -1,   383,   384,   385,    -1,   387,    -1,   389,    -1,
     391,    -1,   393,    -1,    -1,    -1,   397,    -1,   399,    -1,
      -1,    -1,   403,    -1,   405,    -1,    -1,    -1,   409,    -1,
     411,    -1,    -1,    -1,   415,    -1,   417,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,   429,    -1,
      -1,    -1,   433,    -1,   435,    -1,    -1,    -1,   439,    -1,
     441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   620,
     621,   622,    -1,   624,    -1,   626,   627,   628,    -1,   630,
      -1,   632,    -1,   634,    -1,    -1,    -1,   638,    -1,   640,
      -1,    -1,    -1,   644,   645,   646,    -1,   648,    -1,   650,
     651,   652,    -1,   654,    -1,   656,    -1,   658,    -1,    -1,
      -1,   662,    -1,   664,    -1,    -1,    -1,   668,   669,   670,
      -1,   672,    -1,   674,   675,   676,    -1,   678,    -1,   680,
      -1,   682,    -1,    -1,    -1,   686,    -1,   688,    -1,    -1,
      -1,   692,    -1,   694,    -1,    -1,    -1,   698,    -1,   700,
      -1,    -1,    -1,   704,    -1,   706,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   716,    -1,   718,    -1,    -1,
      -1,   722,    -1,   724,    -1,    -1,    -1,   728,    -1,   730
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    43,     5,    44,    45,     0,     7,    10,    26,
      73,    49,     8,    26,    11,    12,    14,    16,    18,    19,
      50,    51,    54,    58,    61,    65,    46,     4,    29,    33,
      52,    29,    33,    55,    29,    34,    59,    29,    35,    36,
      37,    38,    62,    29,    33,    66,     6,     9,    47,    28,
      28,    27,    28,    64,    64,    27,    28,    28,    27,    64,
      64,    64,    28,    63,    63,    27,    28,    28,    27,    30,
      31,    48,    25,    25,    53,    73,    25,    33,    29,    51,
      56,    57,    58,    61,    65,    25,    25,    60,    61,    73,
      35,    36,    37,    38,    29,    36,    37,    38,    29,    35,
      37,    38,    24,    29,    35,    36,    38,    29,    35,    36,
      37,    25,    25,    21,    23,    67,    68,    69,    71,    28,
      28,    27,    33,    29,    13,    64,    64,    15,    57,    34,
      29,    17,    61,    64,    64,    63,    63,    64,    64,    63,
      63,    64,    64,    63,    63,    64,    64,    64,    63,    64,
      64,    64,    63,    33,    29,    29,    33,    41,    72,    29,
      33,    39,    40,    70,    20,    68,    25,    25,    28,    28,
      28,    28,    36,    37,    38,    35,    37,    38,    35,    36,
      38,    35,    36,    37,    36,    37,    38,    29,    37,    38,
      29,    36,    38,    29,    36,    37,    35,    37,    38,    29,
      37,    38,    29,    35,    38,    29,    35,    37,    35,    36,
      38,    29,    36,    38,    29,    35,    38,    29,    35,    36,
      35,    36,    37,    29,    36,    37,    29,    35,    37,    29,
      35,    36,    28,    28,    64,    64,    64,    27,    64,    64,
      64,    64,    27,    32,    25,    25,    25,    25,    64,    63,
      63,    64,    63,    63,    64,    64,    63,    64,    64,    63,
      64,    63,    63,    64,    63,    63,    64,    64,    63,    64,
      64,    63,    64,    63,    63,    64,    63,    63,    64,    64,
      63,    64,    64,    63,    64,    64,    63,    64,    64,    63,
      64,    64,    63,    64,    64,    64,    64,    64,    63,    64,
      64,    63,    64,    64,    63,    64,    64,    64,    25,    25,
      33,    41,    29,    41,    29,    33,    73,    33,    39,    40,
      29,    39,    40,    29,    33,    40,    29,    33,    39,    28,
      37,    38,    36,    38,    36,    37,    37,    38,    35,    38,
      35,    37,    36,    38,    35,    38,    35,    36,    36,    37,
      35,    37,    35,    36,    37,    38,    36,    38,    36,    37,
      37,    38,    29,    38,    29,    37,    36,    38,    29,    38,
      29,    36,    36,    37,    29,    37,    29,    36,    37,    38,
      35,    38,    35,    37,    37,    38,    29,    38,    29,    37,
      35,    38,    29,    38,    29,    35,    35,    37,    29,    37,
      29,    35,    36,    38,    35,    38,    35,    36,    36,    38,
      29,    38,    29,    36,    35,    38,    29,    38,    29,    35,
      35,    36,    29,    36,    29,    35,    36,    37,    35,    37,
      35,    36,    36,    37,    29,    37,    29,    36,    35,    37,
      29,    37,    29,    35,    35,    36,    29,    36,    29,    35,
      64,    64,    64,    64,    64,    64,    22,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    25,
      63,    63,    64,    63,    64,    63,    63,    63,    64,    63,
      64,    63,    64,    63,    64,    63,    64,    64,    64,    63,
      64,    63,    64,    64,    63,    63,    64,    63,    64,    63,
      63,    63,    64,    63,    64,    63,    64,    63,    64,    63,
      64,    64,    64,    63,    64,    63,    64,    64,    63,    63,
      64,    63,    64,    63,    63,    63,    64,    63,    64,    63,
      64,    63,    64,    63,    64,    64,    64,    63,    64,    63,
      64,    64,    64,    63,    64,    63,    64,    64,    64,    63,
      64,    63,    64,    64,    64,    63,    64,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    63,    64,    63,
      64,    64,    64,    63,    64,    63,    64,    64,    64,    63,
      64,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      41,    33,    41,    29,    33,    29,    39,    40,    33,    40,
      33,    39,    39,    40,    29,    40,    29,    39,    33,    40,
      29,    40,    29,    33,    33,    39,    29,    39,    29,    33,
      38,    37,    38,    36,    37,    36,    38,    37,    38,    35,
      37,    35,    38,    36,    38,    35,    36,    35,    37,    36,
      37,    35,    36,    35,    38,    37,    38,    36,    37,    36,
      38,    37,    38,    29,    37,    29,    38,    36,    38,    29,
      36,    29,    37,    36,    37,    29,    36,    29,    38,    37,
      38,    35,    37,    35,    38,    37,    38,    29,    37,    29,
      38,    35,    38,    29,    35,    29,    37,    35,    37,    29,
      35,    29,    38,    36,    38,    35,    36,    35,    38,    36,
      38,    29,    36,    29,    38,    35,    38,    29,    35,    29,
      36,    35,    36,    29,    35,    29,    37,    36,    37,    35,
      36,    35,    37,    36,    37,    29,    36,    29,    37,    35,
      37,    29,    35,    29,    36,    35,    36,    29,    35,    29,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      63,    63,    63,    64,    63,    64,    63,    63,    63,    64,
      63,    64,    63,    64,    63,    64,    64,    64,    63,    64,
      63,    64,    64,    64,    63,    63,    63,    64,    63,    64,
      63,    63,    63,    64,    63,    64,    63,    64,    63,    64,
      64,    64,    63,    64,    63,    64,    64,    64,    63,    63,
      63,    64,    63,    64,    63,    63,    63,    64,    63,    64,
      63,    64,    63,    64,    64,    64,    63,    64,    63,    64,
      64,    64,    63,    64,    63,    64,    64,    64,    63,    64,
      63,    64,    64,    64,    63,    64,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    63,    64,    63,    64,
      64,    64,    63,    64,    63,    64,    64,    64,    63,    64,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      40,    39,    40,    33,    39,    33,    40,    39,    40,    29,
      39,    29,    40,    33,    40,    29,    33,    29,    39,    33,
      39,    29,    33,    29,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    46,    47,    48,
      48,    49,    49,    50,    50,    50,    50,    50,    51,    52,
      52,    52,    53,    53,    54,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    58,    59,    59,    60,    60,    60,
      60,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    64,    65,    66,
      66,    66,    67,    67,    68,    68,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     1,     0,     6,     2,     0,     3,     3,
       6,     2,     0,     1,     1,     1,     1,     1,     5,     3,
       6,     6,     1,     0,     5,     2,     4,     4,     2,     1,
       1,     1,     1,     1,     5,     6,     6,     1,     1,     2,
       0,     3,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       6,     6,     6,     6,     6,     6,     2,     2,     5,     3,
       6,     6,     2,     1,     1,     1,     3,     4,     4,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     5,     4,     4,     6,     6,
       6,     6,     6,     6,     2,     1
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
  case 2: /* program: MYHTML_OPEN head_opt BODY_OPEN body_opt BODY_CLOSE MYHTML_CLOSE  */
#line 39 "parser.y"
    { 
        printf("\n\n**Επιτυχία!**\n"); 
    }
#line 1779 "parser.tab.c"
    break;


#line 1783 "parser.tab.c"

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

#line 225 "parser.y"


int main(int argc, char **argv){

    //elegxos an dothike arxeio ws orisma
    if(argc>1){
        //anoigma tou arxeiou pou dwsame
        if(!(yyin = fopen(argv[1], "r"))){
            perror("Error opening file");
            return 1;
        }
    }

    /* to yyparse tha diavasei apo to yyin (to arxeio eisodou)*/
    yyparse();
    return 0;
}

void yyerror(const char *s){
    /*αδειαζουμε τον μπαφερ της πριντφ για να εμφανιστουν ολα τα ταγκς που βρηκαμε μεχρι τωρα σωστα*/
    fflush(stdout);

    /*τυπωνουμε το σφαλμα και τη γραμμη */
    fprintf(stderr,"\n\n***Σφαλμα στην γραμμη %d:%s ***\n", yylineno, s );

    /*διακόπτουμε την αναλυση οπως μας ζηταει η εκφωνηση */
    exit(1);
}
