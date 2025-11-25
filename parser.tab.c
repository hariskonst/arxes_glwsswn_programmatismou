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
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_MEGALYTERO = 25,                /* MEGALYTERO  */
  YYSYMBOL_ISON = 26,                      /* ISON  */
  YYSYMBOL_AUTAKIA = 27,                   /* AUTAKIA  */
  YYSYMBOL_ID = 28,                        /* ID  */
  YYSYMBOL_CHARSET = 29,                   /* CHARSET  */
  YYSYMBOL_NAME = 30,                      /* NAME  */
  YYSYMBOL_CONTENT = 31,                   /* CONTENT  */
  YYSYMBOL_STYLE = 32,                     /* STYLE  */
  YYSYMBOL_HREF = 33,                      /* HREF  */
  YYSYMBOL_SRC = 34,                       /* SRC  */
  YYSYMBOL_ALT = 35,                       /* ALT  */
  YYSYMBOL_WIDTH = 36,                     /* WIDTH  */
  YYSYMBOL_HEIGHT = 37,                    /* HEIGHT  */
  YYSYMBOL_VALUE = 38,                     /* VALUE  */
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_FOR = 40,                       /* FOR  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_head_opt = 43,                  /* head_opt  */
  YYSYMBOL_head_block = 44,                /* head_block  */
  YYSYMBOL_meta_list = 45,                 /* meta_list  */
  YYSYMBOL_meta_block = 46,                /* meta_block  */
  YYSYMBOL_meta_attr_list = 47,            /* meta_attr_list  */
  YYSYMBOL_body_opt = 48,                  /* body_opt  */
  YYSYMBOL_body_elements = 49,             /* body_elements  */
  YYSYMBOL_p_block = 50,                   /* p_block  */
  YYSYMBOL_p_attr_list = 51,               /* p_attr_list  */
  YYSYMBOL_p_content = 52,                 /* p_content  */
  YYSYMBOL_div_block = 53,                 /* div_block  */
  YYSYMBOL_div_attr_list = 54,             /* div_attr_list  */
  YYSYMBOL_div_opt = 55,                   /* div_opt  */
  YYSYMBOL_div_elements = 56,              /* div_elements  */
  YYSYMBOL_a_block = 57,                   /* a_block  */
  YYSYMBOL_a_attr_list = 58,               /* a_attr_list  */
  YYSYMBOL_a_opt = 59,                     /* a_opt  */
  YYSYMBOL_img_block = 60,                 /* img_block  */
  YYSYMBOL_img_attr_list = 61,             /* img_attr_list  */
  YYSYMBOL_K = 62,                         /* K  */
  YYSYMBOL_form_block = 63,                /* form_block  */
  YYSYMBOL_form_attr_list = 64,            /* form_attr_list  */
  YYSYMBOL_form_opt = 65,                  /* form_opt  */
  YYSYMBOL_form_elements = 66,             /* form_elements  */
  YYSYMBOL_input_block = 67,               /* input_block  */
  YYSYMBOL_input_attr_list = 68,           /* input_attr_list  */
  YYSYMBOL_label_block = 69,               /* label_block  */
  YYSYMBOL_lbl_attr_list = 70,             /* lbl_attr_list  */
  YYSYMBOL_text = 71                       /* text  */
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
#define YYLAST   931

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  936

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    44,    45,    49,    53,    54,    58,    62,
      62,    66,    67,    71,    72,    73,    74,    75,    79,    83,
      83,    83,    87,    87,    90,    93,    93,    93,    97,    97,
     101,   102,   103,   104,   108,   111,   111,   115,   116,   117,
     118,   122,   126,   126,   126,   126,   126,   127,   127,   127,
     127,   127,   128,   128,   128,   128,   128,   129,   129,   129,
     129,   129,   130,   130,   130,   130,   130,   131,   131,   131,
     131,   131,   132,   132,   132,   132,   132,   133,   133,   133,
     133,   133,   134,   134,   134,   134,   134,   135,   135,   135,
     135,   135,   136,   136,   136,   136,   136,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   140,   140,   140,   140,   140,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   145,   145,   145,
     145,   145,   146,   146,   146,   146,   146,   147,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   151,   151,   151,   151,
     152,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154,   155,   155,   155,   155,   156,   156,   156,   156,
     157,   157,   157,   157,   158,   158,   158,   158,   159,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   161,   161,
     162,   162,   163,   163,   164,   164,   168,   172,   175,   175,
     175,   179,   180,   184,   185,   189,   193,   193,   194,   194,
     194,   195,   195,   195,   196,   196,   196,   197,   197,   197,
     198,   198,   198,   198,   199,   199,   199,   199,   200,   200,
     200,   200,   201,   201,   201,   201,   202,   202,   202,   202,
     203,   203,   203,   203,   207,   210,   210,   211,   211,   211,
     212,   212,   212,   216,   217
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
  "LABEL_OPEN", "LABEL_CLOSE", "INPUT", "STRING", "MEGALYTERO", "ISON",
  "AUTAKIA", "ID", "CHARSET", "NAME", "CONTENT", "STYLE", "HREF", "SRC",
  "ALT", "WIDTH", "HEIGHT", "VALUE", "TYPE", "FOR", "$accept", "program",
  "head_opt", "head_block", "meta_list", "meta_block", "meta_attr_list",
  "body_opt", "body_elements", "p_block", "p_attr_list", "p_content",
  "div_block", "div_attr_list", "div_opt", "div_elements", "a_block",
  "a_attr_list", "a_opt", "img_block", "img_attr_list", "K", "form_block",
  "form_attr_list", "form_opt", "form_elements", "input_block",
  "input_attr_list", "label_block", "lbl_attr_list", "text", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,    46,   117,   275,   285,   -38,   -38,   414,   -38,   -38,
      -6,   118,   -38,   -38,   463,     6,   103,    86,    19,   200,
     -38,   -38,   -38,   -38,   -38,   -38,   447,   -38,   456,   488,
     516,   518,   518,   520,   521,   522,   524,   518,   518,   518,
     518,   518,   525,   526,   527,   529,   -38,   399,   -38,   477,
     519,   414,   528,   674,   523,   226,   680,   681,   242,   407,
      49,    53,    60,   171,   -38,   682,   683,   416,   685,   686,
     688,   684,   687,   701,   693,   -38,   518,   518,   -38,   221,
     -38,   -38,   -38,   -38,   689,   690,   702,   -38,   249,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   691,
     692,   -17,    -8,    59,   -38,   -38,   -38,   694,   697,   -38,
     699,   700,   -38,   -38,   -38,   -38,   -38,   703,   704,   -38,
     -38,   194,   166,   411,   435,   437,    13,    63,   173,   413,
      65,    71,   176,   417,    75,    79,     5,   441,   183,   186,
     213,   705,   706,   518,   518,   518,   708,   518,   518,   518,
     518,   709,   -38,   -38,   -38,   696,   710,   711,   712,   713,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     714,   715,    64,   -24,   402,   414,   211,   -11,    -3,    14,
     -38,   717,   -38,   -38,   -38,   -38,   234,   443,   385,   470,
     421,   445,   448,   423,   474,   475,   450,   478,   479,   452,
     482,   483,   -18,   185,   453,    55,   218,   486,   187,   223,
     487,   425,   457,   489,    78,   188,   427,    81,   240,   458,
     189,   241,   460,   429,   493,   461,    83,   224,   431,    96,
     388,   495,   227,   389,   496,   465,   499,   500,   198,   228,
     466,   199,   390,   503,   229,   391,   -38,   -38,   518,   518,
     518,   518,   518,   518,   481,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   718,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   695,   716,
     707,   721,   719,   722,   -38,   501,   222,   394,   504,    -2,
     -25,   233,     4,   403,   395,   -16,   408,   -38,   720,   723,
     724,   725,   726,   728,   727,   729,   730,   732,   733,   734,
     735,   736,   737,   739,   740,   742,   741,   743,   744,   745,
     746,   748,   747,   749,   750,   751,   752,   754,   753,   755,
     756,   764,   758,   767,   759,   762,   761,   771,   765,   773,
     766,   768,   769,   776,   772,   778,   774,   777,   775,   780,
     779,   782,   781,   783,   784,   789,   786,   792,   787,   791,
     790,   795,   794,   798,   793,   796,   797,   803,   800,   804,
     799,   802,   801,   805,   806,   808,   807,   810,   809,   812,
     813,   815,   814,   816,   817,   819,   818,   821,   820,   846,
     847,   825,   849,   853,   848,   850,   851,   852,   854,   856,
     855,   857,   858,   860,   861,   865,   859,   863,   862,   871,
     866,   873,   867,   869,   870,   876,   872,   879,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   -38,   -38,
     -38,   -38,   -38,   -38,   731,   698,   770,   877,   874,   878,
     875,   880,   881,   883,   884,   885,   882,   887,   886,   888,
     891,   889,   890,   892,   893,   898,   895,   901,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     4,     0,     0,     0,     3,     1,     0,    12,   274,
       0,     0,     7,   273,     0,     0,     0,     0,     0,     0,
      11,    13,    14,    15,    17,    16,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     6,     0,
       0,    23,     0,    25,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,    19,     0,     0,    22,   216,     0,     0,    30,     0,
      29,    31,    33,    32,     0,     0,     0,    38,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,     0,     0,   222,   223,   224,     0,     0,     8,
       0,     0,    18,    26,    27,    24,    28,     0,     0,    34,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   221,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,    20,    21,    35,    36,   210,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,   213,     0,
       0,   212,     0,     0,     0,     0,     0,     0,     0,     0,
     215,     0,     0,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,   220,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,   266,     0,   264,     0,     0,   227,     0,     0,
       0,     0,     0,     0,   226,     0,     0,    10,   165,   189,
     164,     0,   188,     0,   169,   193,   168,     0,   192,     0,
     163,     0,   167,     0,     0,     0,   187,     0,   191,     0,
       0,     0,   177,   201,   176,     0,   200,     0,   173,   197,
     172,     0,   196,     0,   175,     0,   171,     0,     0,     0,
     199,     0,   195,     0,     0,     0,   185,   209,   184,     0,
     208,     0,   181,   205,   180,     0,   204,     0,   183,     0,
     179,     0,     0,     0,   207,     0,   203,     0,     0,     0,
     162,     0,   166,     0,     0,     0,   174,     0,   170,     0,
       0,     0,   182,     0,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,     0,   190,     0,     0,     0,
     198,     0,   194,     0,     0,     0,   206,     0,   202,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   268,   269,
     267,   270,   272,   271,     0,   238,     0,   232,   239,   233,
       0,   237,     0,     0,   234,     0,     0,   231,     0,     0,
     228,     0,   236,   230,   235,     0,   229,     0,    61,    60,
      56,    55,    59,    54,    81,    80,    76,    75,    79,    74,
      51,    50,    71,    70,    49,    69,    58,    53,    78,    73,
      48,    68,   101,   100,    96,    95,    99,    94,   121,   120,
     116,   115,   119,   114,    91,    90,   111,   110,    89,   109,
      98,    93,   118,   113,    88,   108,   161,   160,   156,   155,
     159,   154,   141,   140,   136,   135,   139,   134,   151,   150,
     131,   130,   149,   129,   158,   153,   138,   133,   148,   128,
      46,    45,    66,    65,    44,    64,    86,    85,   106,   105,
      84,   104,   146,   145,   126,   125,   144,   124,    43,    63,
      83,   103,   143,   123,    57,    52,    77,    72,    47,    67,
      97,    92,   117,   112,    87,   107,   157,   152,   137,   132,
     147,   127,    42,    62,    82,   102,   142,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,   259,   257,   261,   263,   262,   254,   255,
     253,   241,   243,   242,   256,   260,   252,   240,   248,   244,
     251,   250,   247,   246,   249,   245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   824,
     -38,   -38,   -38,   -38,   -38,   649,   897,   -38,   -38,   -10,
     -38,   -32,   904,   -38,   -38,   631,   -38,   -38,   -38,   -38,
     -37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     4,     5,    26,    48,    70,    11,    20,    78,
      30,    73,    22,    33,    79,    80,    81,    36,    86,    82,
      42,    53,    83,    45,   113,   114,   115,   161,   116,   156,
      10
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    24,    12,   604,   310,    59,    60,    61,    62,    63,
     360,   153,   614,   605,    74,   154,   311,   318,    13,   361,
     157,    88,   615,   155,   158,   321,   602,   319,   320,   322,
     159,   160,   608,   215,    28,     1,   323,   603,    29,   216,
     217,   185,   324,   609,   123,   124,   325,    37,    87,   186,
     187,     3,   326,    38,    39,    40,    41,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    93,   130,   162,
     111,    97,   112,   366,    94,    95,    96,    98,   101,    99,
     100,   188,   367,   197,   102,   103,   308,   104,   189,   200,
     190,   198,   199,   209,   309,   201,   384,   212,   202,   390,
     210,   408,   211,   213,    34,   385,   214,     6,   391,    35,
     409,   232,   233,   234,   414,   236,   237,   238,   239,    14,
      15,    31,    16,   415,    17,    32,    18,    19,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   314,   105,
     173,   191,   174,   175,   203,   106,   107,   108,   192,   193,
     204,   221,   205,   362,   224,   372,   386,   396,   222,   223,
     225,   363,   226,   373,   387,   397,   432,   438,    43,   170,
     171,   172,    44,    15,   433,   439,   125,    17,    15,    18,
      19,   227,    17,   315,    18,    19,   368,   228,   229,   316,
     317,   374,   410,   369,   596,   420,   434,   444,   375,   411,
      18,   597,   421,   435,   445,   606,     9,    18,   392,   398,
     328,   329,   607,    13,   393,   399,   448,   449,   450,   451,
     452,   453,     7,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     8,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   587,   416,   422,   440,   446,
     332,   333,   417,   423,   441,   447,   598,   612,    68,    69,
     312,   610,   599,   613,   313,   611,   616,   111,     9,   112,
     617,    89,    90,    91,    92,   176,   177,   194,   178,   195,
     196,   206,   207,    46,   208,   336,    47,   342,   337,   378,
     343,   388,   379,   402,   389,   412,   403,    27,   413,   179,
     180,   181,   182,   183,   184,   218,   219,   220,   330,   338,
     331,   339,    49,   340,   348,   341,   349,   354,   364,   355,
     365,   380,   394,   381,   395,   400,   406,   401,   407,   426,
     436,   427,   437,   454,    71,    13,   334,   335,   344,   345,
     346,   347,   350,   351,    50,   352,   353,   356,   357,   358,
     359,   370,   371,   376,   377,   382,   383,   404,   405,   418,
     419,   424,   425,   428,   429,   430,   431,   442,   443,   594,
     595,    51,   600,   601,    52,    55,    72,    56,    57,    58,
      64,    77,    65,    66,    67,    75,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,   854,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
     882,   883,   884,   885,   886,   887,    76,    84,    85,   109,
     110,   117,   118,   119,   122,   121,   120,    13,   128,   129,
     152,   164,   127,   151,   165,   166,   167,   241,   126,   168,
     169,   230,   231,   235,   240,   588,   889,   242,   243,   244,
     245,   306,   307,   327,   163,   467,     0,   590,   589,   591,
     593,   592,     0,     0,     0,     0,     0,   618,     0,   619,
     621,   620,   622,   623,   624,   625,   627,   626,   629,   628,
     888,   631,   630,   633,   632,   634,   635,   636,   637,   639,
     638,   640,   641,     0,   642,   643,   645,   644,   646,   647,
     648,   649,   651,   650,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   663,   662,   665,   664,     0,   890,
       0,   666,   668,   667,   669,   670,   671,   675,   672,   673,
     677,   674,   676,   681,   678,   679,   683,   680,   682,   684,
     685,   687,   689,   686,   688,    21,   690,   691,   692,   693,
     699,   694,   695,   701,   696,   697,   698,   705,   700,   707,
     703,   702,   706,   711,   704,   708,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     709,   713,   710,   712,   714,   715,   717,   716,   723,   718,
     719,   720,   721,   725,   722,   726,   724,   727,   728,   729,
     730,   731,   732,   733,   735,   734,   736,   737,    23,   891,
     893,   897,   892,   899,   894,    25,   903,   905,   895,   901,
     896,   900,   898,   904,   907,   902,   909,   910,   906,   911,
       0,   908
};

static const yytype_int16 yycheck[] =
{
      32,    11,     8,    28,    28,    37,    38,    39,    40,    41,
      28,    28,    28,    38,    51,    32,    40,    28,    24,    37,
      28,    58,    38,    40,    32,    28,    28,    38,    39,    32,
      38,    39,    28,    28,    28,     3,    39,    39,    32,    34,
      35,    28,    28,    39,    76,    77,    32,    28,    58,    36,
      37,     5,    38,    34,    35,    36,    37,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    28,    88,    20,
      21,    28,    23,    28,    35,    36,    37,    34,    28,    36,
      37,    28,    37,    28,    34,    35,    32,    37,    35,    28,
      37,    36,    37,    28,    40,    34,    28,    28,    37,    28,
      35,    28,    37,    34,    28,    37,    37,     0,    37,    33,
      37,   153,   154,   155,    28,   157,   158,   159,   160,    11,
      12,    28,    14,    37,    16,    32,    18,    19,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   235,    28,
      34,    28,    36,    37,    28,    34,    35,    36,    35,    36,
      34,    28,    36,    28,    28,    28,    28,    28,    35,    36,
      34,    36,    36,    36,    36,    36,    28,    28,    28,    35,
      36,    37,    32,    12,    36,    36,    15,    16,    12,    18,
      19,    28,    16,    32,    18,    19,    28,    34,    35,    38,
      39,    28,    28,    35,    32,    28,    28,    28,    35,    35,
      18,    39,    35,    35,    35,    32,    24,    18,    28,    28,
      36,    37,    39,    24,    34,    34,   308,   309,   310,   311,
     312,   313,     7,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,    10,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,    28,    28,    28,    28,
      35,    36,    34,    34,    34,    34,    32,    32,    29,    30,
      28,    28,    38,    38,    32,    32,    28,    21,    24,    23,
      32,    34,    35,    36,    37,    34,    35,    34,    37,    36,
      37,    34,    35,     6,    37,    34,     9,    34,    37,    34,
      37,    34,    37,    34,    37,    34,    37,     4,    37,    34,
      35,    36,    35,    36,    37,    34,    35,    36,    35,    34,
      37,    36,    26,    35,    34,    37,    36,    35,    35,    37,
      37,    34,    34,    36,    36,    35,    35,    37,    37,    34,
      34,    36,    36,    22,    27,    24,    36,    37,    34,    35,
      35,    36,    34,    35,    26,    36,    37,    35,    36,    36,
      37,    35,    36,    36,    37,    36,    37,    34,    35,    34,
      35,    35,    36,    34,    35,    35,    36,    34,    35,    38,
      39,    25,    38,    39,    26,    25,    27,    26,    26,    25,
      25,    28,    26,    26,    25,    27,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,    32,    27,    27,    27,
      27,    26,    26,    25,    13,    28,    32,    24,    28,    17,
      28,    27,    33,    32,    27,    26,    26,    31,    79,    26,
      26,    26,    26,    25,    25,    40,    38,    27,    27,    27,
      27,    27,    27,    26,   113,    27,    -1,    40,    32,    28,
      28,    32,    -1,    -1,    -1,    -1,    -1,    37,    -1,    36,
      35,    37,    36,    35,    37,    36,    34,    37,    34,    36,
      39,    35,    37,    34,    37,    35,    34,    36,    35,    34,
      36,    35,    34,    -1,    37,    36,    35,    37,    36,    35,
      37,    36,    28,    37,    36,    28,    37,    35,    37,    28,
      35,    28,    36,    35,    28,    36,    28,    35,    -1,    39,
      -1,    37,    37,    36,    34,    36,    34,    28,    37,    36,
      28,    37,    36,    28,    37,    34,    28,    37,    34,    36,
      34,    28,    28,    36,    34,    11,    37,    35,    37,    34,
      28,    35,    34,    28,    37,    35,    37,    28,    35,    28,
      34,    37,    34,    28,    37,    35,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
      34,    28,    35,    34,    36,    35,    34,    36,    28,    35,
      34,    36,    35,    28,    36,    36,    35,    34,    36,    28,
      34,    28,    35,    34,    28,    35,    34,    28,    11,    32,
      32,    28,    38,    28,    39,    11,    28,    28,    38,    32,
      39,    39,    38,    32,    32,    39,    28,    32,    38,    28,
      -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    42,     5,    43,    44,     0,     7,    10,    24,
      71,    48,     8,    24,    11,    12,    14,    16,    18,    19,
      49,    50,    53,    57,    60,    63,    45,     4,    28,    32,
      51,    28,    32,    54,    28,    33,    58,    28,    34,    35,
      36,    37,    61,    28,    32,    64,     6,     9,    46,    26,
      26,    25,    26,    62,    62,    25,    26,    26,    25,    62,
      62,    62,    62,    62,    25,    26,    26,    25,    29,    30,
      47,    27,    27,    52,    71,    27,    32,    28,    50,    55,
      56,    57,    60,    63,    27,    27,    59,    60,    71,    34,
      35,    36,    37,    28,    35,    36,    37,    28,    34,    36,
      37,    28,    34,    35,    37,    28,    34,    35,    36,    27,
      27,    21,    23,    65,    66,    67,    69,    26,    26,    25,
      32,    28,    13,    62,    62,    15,    56,    33,    28,    17,
      60,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    32,    28,    28,    32,    40,    70,    28,    32,    38,
      39,    68,    20,    66,    27,    27,    26,    26,    26,    26,
      35,    36,    37,    34,    36,    37,    34,    35,    37,    34,
      35,    36,    35,    36,    37,    28,    36,    37,    28,    35,
      37,    28,    35,    36,    34,    36,    37,    28,    36,    37,
      28,    34,    37,    28,    34,    36,    34,    35,    37,    28,
      35,    37,    28,    34,    37,    28,    34,    35,    34,    35,
      36,    28,    35,    36,    28,    34,    36,    28,    34,    35,
      26,    26,    62,    62,    62,    25,    62,    62,    62,    62,
      25,    31,    27,    27,    27,    27,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    27,    27,    32,    40,
      28,    40,    28,    32,    71,    32,    38,    39,    28,    38,
      39,    28,    32,    39,    28,    32,    38,    26,    36,    37,
      35,    37,    35,    36,    36,    37,    34,    37,    34,    36,
      35,    37,    34,    37,    34,    35,    35,    36,    34,    36,
      34,    35,    36,    37,    35,    37,    35,    36,    36,    37,
      28,    37,    28,    36,    35,    37,    28,    37,    28,    35,
      35,    36,    28,    36,    28,    35,    36,    37,    34,    37,
      34,    36,    36,    37,    28,    37,    28,    36,    34,    37,
      28,    37,    28,    34,    34,    36,    28,    36,    28,    34,
      35,    37,    34,    37,    34,    35,    35,    37,    28,    37,
      28,    35,    34,    37,    28,    37,    28,    34,    34,    35,
      28,    35,    28,    34,    35,    36,    34,    36,    34,    35,
      35,    36,    28,    36,    28,    35,    34,    36,    28,    36,
      28,    34,    34,    35,    28,    35,    28,    34,    62,    62,
      62,    62,    62,    62,    22,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    27,    62,    62,
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
      62,    62,    62,    62,    62,    62,    62,    62,    40,    32,
      40,    28,    32,    28,    38,    39,    32,    39,    32,    38,
      38,    39,    28,    39,    28,    38,    32,    39,    28,    39,
      28,    32,    32,    38,    28,    38,    28,    32,    37,    36,
      37,    35,    36,    35,    37,    36,    37,    34,    36,    34,
      37,    35,    37,    34,    35,    34,    36,    35,    36,    34,
      35,    34,    37,    36,    37,    35,    36,    35,    37,    36,
      37,    28,    36,    28,    37,    35,    37,    28,    35,    28,
      36,    35,    36,    28,    35,    28,    37,    36,    37,    34,
      36,    34,    37,    36,    37,    28,    36,    28,    37,    34,
      37,    28,    34,    28,    36,    34,    36,    28,    34,    28,
      37,    35,    37,    34,    35,    34,    37,    35,    37,    28,
      35,    28,    37,    34,    37,    28,    34,    28,    35,    34,
      35,    28,    34,    28,    36,    35,    36,    34,    35,    34,
      36,    35,    36,    28,    35,    28,    36,    34,    36,    28,
      34,    28,    35,    34,    35,    28,    34,    28,    62,    62,
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
      62,    62,    62,    62,    62,    62,    62,    62,    39,    38,
      39,    32,    38,    32,    39,    38,    39,    28,    38,    28,
      39,    32,    39,    28,    32,    28,    38,    32,    38,    28,
      32,    28,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    45,    45,    46,    47,
      47,    48,    48,    49,    49,    49,    49,    49,    50,    51,
      51,    51,    52,    52,    53,    54,    54,    54,    55,    55,
      56,    56,    56,    56,    57,    58,    58,    59,    59,    59,
      59,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    63,    64,    64,
      64,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71
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
       6,     6,     6,     6,     6,     6,     2,     5,     3,     6,
       6,     2,     1,     1,     1,     3,     4,     4,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     5,     4,     4,     6,     6,     6,
       6,     6,     6,     2,     1
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
#line 38 "parser.y"
    { 
        printf("\n\n> Επιτυχία!\n"); 
    }
#line 1694 "parser.tab.c"
    break;


#line 1698 "parser.tab.c"

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

#line 220 "parser.y"


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
