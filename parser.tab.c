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
  YYSYMBOL_div_opt = 54,                   /* div_opt  */
  YYSYMBOL_div_elements = 55,              /* div_elements  */
  YYSYMBOL_a_block = 56,                   /* a_block  */
  YYSYMBOL_a_attr_list = 57,               /* a_attr_list  */
  YYSYMBOL_a_opt = 58,                     /* a_opt  */
  YYSYMBOL_img_block = 59,                 /* img_block  */
  YYSYMBOL_img_attr_list = 60,             /* img_attr_list  */
  YYSYMBOL_K = 61,                         /* K  */
  YYSYMBOL_form_block = 62,                /* form_block  */
  YYSYMBOL_form_opt = 63,                  /* form_opt  */
  YYSYMBOL_form_elements = 64,             /* form_elements  */
  YYSYMBOL_input_block = 65,               /* input_block  */
  YYSYMBOL_label_block = 66,               /* label_block  */
  YYSYMBOL_text = 67,                      /* text  */
  YYSYMBOL_attr_list = 68,                 /* attr_list  */
  YYSYMBOL_attr_item = 69,                 /* attr_item  */
  YYSYMBOL_attr_name = 70                  /* attr_name  */
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
#define YYLAST   814

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  190
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  775

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
      83,    83,    87,    87,    90,    93,    93,    97,    98,    99,
     100,   104,   107,   107,   111,   112,   113,   114,   118,   122,
     122,   122,   122,   122,   123,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   125,   125,   125,   125,   125,   126,
     126,   126,   126,   126,   127,   127,   127,   127,   127,   128,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   136,
     136,   136,   136,   136,   137,   137,   137,   137,   137,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   143,   143,   143,   143,   143,   144,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   152,   156,   159,   160,   164,
     165,   169,   173,   176,   177,   181,   182,   186,   190,   190,
     190,   190,   190,   191,   191,   191,   191,   191,   191,   192,
     192
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
  "div_block", "div_opt", "div_elements", "a_block", "a_attr_list",
  "a_opt", "img_block", "img_attr_list", "K", "form_block", "form_opt",
  "form_elements", "input_block", "label_block", "text", "attr_list",
  "attr_item", "attr_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     118,   185,   209,   225,   374,   -37,   -37,   402,   -37,   -37,
      -3,   224,   -37,   -37,   388,    -5,   -37,    69,   -21,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,    41,   -37,   421,   425,
     410,     4,   465,   617,   414,   618,   618,   618,   618,   618,
     443,    55,   -37,    -4,   -37,   619,   620,   402,   379,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   622,   623,   624,    28,   625,   395,   -18,
      17,    21,   211,   -37,   442,   627,   628,   630,   613,   621,
     643,   633,   -37,   108,   -37,   -37,   -37,   -37,   631,   626,
     632,   644,   -37,   232,   -37,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   -37,   -37,   413,   -37,   -37,
     -37,   635,   636,   -37,   638,   639,   -37,   -37,   -37,   -37,
     640,   641,   -37,   -37,   218,   -28,   403,   420,   422,   176,
      68,   213,   171,   178,   182,    -6,   407,   183,   189,   365,
     426,   216,   349,   368,    79,   163,   -37,   -37,   -37,   637,
     642,   645,   646,   647,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   402,   -37,   649,   -37,   -37,   -37,
     -37,    45,   429,    63,   191,    88,   433,   435,   373,   459,
     460,   437,   463,   583,   439,   586,   587,   -17,   201,   440,
      20,   366,   590,   350,   376,   591,   409,   444,   593,   193,
     351,   411,   194,   386,   445,   352,   389,   447,   415,   597,
     448,   196,   377,   416,   197,   390,   599,   378,   391,   600,
     452,   603,   604,   353,   380,   453,   354,   393,   607,   381,
     394,   468,   650,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   -37,   -37,   634,   648,   651,   652,   653,
     655,   654,   656,   657,   659,   660,   661,   662,   663,   664,
     666,   667,   669,   668,   670,   671,   672,   673,   675,   674,
     676,   677,   678,   679,   681,   680,   682,   683,   658,   685,
     691,   686,   687,   688,   696,   692,   698,   693,   695,   697,
     700,   699,   703,   701,   704,   702,   707,   706,   709,   708,
     710,   711,   716,   713,   719,   714,   718,   717,   722,   721,
     725,   720,   723,   724,   730,   727,   731,   726,   729,   728,
     732,   733,   735,   734,   737,   736,   739,   740,   742,   741,
     743,   744,   746,   745,   748,   747,   749,   750,   752,   753,
     756,   754,   751,   755,   758,   759,   761,   757,   762,   760,
     770,   764,   772,   765,   768,   767,   776,   771,   778,   773,
     775,   777,   779,   780,   782,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     3,     1,     0,    12,   174,
       0,     0,     7,   173,     0,     0,   176,     0,     0,   176,
      11,    13,    14,    15,    17,    16,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     6,     0,     0,    23,     0,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   175,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,    19,     0,
       0,    22,    27,     0,    26,    28,    30,    29,     0,     0,
       0,     0,    35,    34,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   176,     0,   168,   169,
     170,     0,     0,     8,     0,     0,    18,    24,    25,   177,
       0,     0,    31,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,     0,    20,    21,    32,
      33,   159,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,     0,   162,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,     0,   164,     0,     0,   163,     0,
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
       0,     0,     0,   172,    10,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    57,    53,    52,    56,
      51,    78,    77,    73,    72,    76,    71,    48,    47,    68,
      67,    46,    66,    55,    50,    75,    70,    45,    65,    98,
      97,    93,    92,    96,    91,   118,   117,   113,   112,   116,
     111,    88,    87,   108,   107,    86,   106,    95,    90,   115,
     110,    85,   105,   158,   157,   153,   152,   156,   151,   138,
     137,   133,   132,   136,   131,   148,   147,   128,   127,   146,
     126,   155,   150,   135,   130,   145,   125,    43,    42,    63,
      62,    41,    61,    83,    82,   103,   102,    81,   101,   143,
     142,   123,   122,   141,   121,    40,    60,    80,   100,   140,
     120,    54,    49,    74,    69,    44,    64,    94,    89,   114,
     109,    84,   104,   154,   149,   134,   129,   144,   124,    39,
      59,    79,    99,   139,   119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   665,
     -37,   -37,   -37,   -37,   595,   800,   -37,   -37,    13,   -37,
     -36,   802,   -37,   553,   -37,   -37,   -35,   -15,   -37,   -37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     4,     5,    26,    44,    77,    11,    20,    82,
      30,    80,    22,    83,    84,    85,    34,    91,    86,    40,
      68,    87,   117,   118,   119,   120,    10,    31,    62,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    70,    71,    72,    41,    12,   167,    35,   168,   169,
      99,   325,    81,    36,    37,    38,    39,   100,   101,   102,
     326,    13,   197,    28,    24,    75,    76,    29,   198,    48,
     199,    93,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   103,    18,    42,   331,   107,
      43,   104,     9,   105,   106,   108,   109,   332,   110,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    92,
      74,   293,   294,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,   182,    32,   297,   298,
     154,   155,    33,   183,   224,   184,   133,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      15,     1,   301,   127,    17,   302,    18,    19,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   225,   291,
       3,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,   179,   188,   191,   189,   190,     6,
     194,   203,   180,   181,   192,   193,   195,   206,   204,   196,
     205,   349,   355,   207,   373,   379,   208,   299,   300,   327,
     350,   356,     7,   374,   380,    14,    15,   328,    16,   111,
      17,   185,    18,    19,   215,   112,   113,   114,   186,   187,
      18,   216,   217,   164,   165,   166,    13,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   218,   337,   351,
     361,   397,   403,   219,     8,   220,   338,   352,   362,   398,
     404,    15,    27,   209,   333,    17,   221,    18,    19,   210,
     211,   334,   222,   223,   339,   375,   385,   307,   399,   409,
     308,   340,   376,   386,   357,   400,   410,   363,   381,   387,
     358,   405,   411,   364,   382,   388,     9,   406,   412,    95,
      96,    97,    98,   156,   115,    47,   116,   170,   171,    66,
     172,   200,   201,   343,   202,   353,   344,    45,   354,   367,
     377,    46,   368,   378,   173,   174,   175,   176,   177,   178,
     212,   213,   214,   115,   295,   116,   296,   303,    73,   304,
     305,   313,   306,   314,   319,   329,   320,   330,   345,   359,
     346,   360,   365,   371,   366,   372,   391,   401,   392,   402,
     413,    64,    13,   309,   310,   311,   312,   315,   316,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   761,   762,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   317,
     318,   321,   322,   323,   324,   335,   336,   341,   342,   347,
     348,   369,   370,   383,   384,   389,   390,   393,   394,   395,
     396,   407,   408,    65,    67,   124,    78,    79,    88,   125,
      89,    90,    94,   121,   122,   123,   126,    13,   129,   130,
     131,   132,   158,   159,   160,   161,   162,   163,   226,   227,
     157,   535,   228,   229,   230,   292,    21,   414,   128,     0,
       0,     0,     0,     0,   536,     0,   568,   538,   537,   539,
     540,   541,   542,   544,   543,   546,   545,     0,   548,   547,
     550,   549,   551,   552,   553,   554,   556,   555,   557,   558,
       0,   559,   560,   562,   561,   563,   564,   565,   566,   570,
     567,   569,   572,   571,   574,   573,   576,   575,   580,   577,
     578,   582,     0,   579,   581,     0,     0,     0,   583,   585,
     584,   586,   587,   588,   592,   589,   590,   594,   591,   593,
     598,   595,   596,   600,   597,   599,   601,   602,   604,   606,
     603,   605,     0,   607,   608,   609,   610,   616,   611,   612,
     618,   613,   614,   615,   622,   617,   624,   620,   619,   623,
     628,   621,   625,   626,   630,   627,   632,   629,     0,     0,
     631,   633,   634,   637,   635,   636,   639,   638,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   652,   649,   650,
     654,    23,   651,    25,   653
};

static const yytype_int16 yycheck[] =
{
      36,    37,    38,    39,    19,     8,    34,    28,    36,    37,
      28,    28,    47,    34,    35,    36,    37,    35,    36,    37,
      37,    24,    28,    28,    11,    29,    30,    32,    34,    25,
      36,    66,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    28,    18,     6,    28,    28,
       9,    34,    24,    36,    37,    34,    35,    37,    37,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    66,
      25,    36,    37,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    28,    28,    35,    36,
     115,   116,    33,    35,    25,    37,    93,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      12,     3,    34,    15,    16,    37,    18,    19,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    25,   224,
       5,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    28,    34,    28,    36,    37,     0,
      28,    28,    36,    37,    36,    37,    34,    28,    35,    37,
      37,    28,    28,    34,    28,    28,    37,    36,    37,    28,
      37,    37,     7,    37,    37,    11,    12,    36,    14,    28,
      16,    28,    18,    19,    28,    34,    35,    36,    35,    36,
      18,    35,    36,    35,    36,    37,    24,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,    28,    28,    28,
      28,    28,    28,    34,    10,    36,    36,    36,    36,    36,
      36,    12,     4,    28,    28,    16,    28,    18,    19,    34,
      35,    35,    34,    35,    28,    28,    28,    34,    28,    28,
      37,    35,    35,    35,    28,    35,    35,    28,    28,    28,
      34,    28,    28,    34,    34,    34,    24,    34,    34,    34,
      35,    36,    37,    20,    21,    25,    23,    34,    35,    25,
      37,    34,    35,    34,    37,    34,    37,    26,    37,    34,
      34,    26,    37,    37,    34,    35,    36,    35,    36,    37,
      34,    35,    36,    21,    35,    23,    37,    34,    25,    36,
      35,    34,    37,    36,    35,    35,    37,    37,    34,    34,
      36,    36,    35,    35,    37,    37,    34,    34,    36,    36,
      22,    26,    24,    34,    35,    35,    36,    34,    35,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,    36,
      37,    35,    36,    36,    37,    35,    36,    36,    37,    36,
      37,    34,    35,    34,    35,    35,    36,    34,    35,    35,
      36,    34,    35,    26,    26,    32,    27,    27,    26,    28,
      27,    27,    27,    26,    26,    25,    13,    24,    27,    33,
      28,    17,    27,    27,    26,    26,    26,    26,    31,    27,
     117,    37,    27,    27,    27,    26,    11,    27,    83,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    28,    35,    37,    36,
      35,    37,    36,    34,    37,    34,    36,    -1,    35,    37,
      34,    37,    35,    34,    36,    35,    34,    36,    35,    34,
      -1,    37,    36,    35,    37,    36,    35,    37,    36,    28,
      37,    36,    35,    37,    28,    37,    28,    35,    28,    36,
      35,    28,    -1,    36,    35,    -1,    -1,    -1,    37,    37,
      36,    34,    36,    34,    28,    37,    36,    28,    37,    36,
      28,    37,    34,    28,    37,    34,    36,    34,    28,    28,
      36,    34,    -1,    37,    35,    37,    34,    28,    35,    34,
      28,    37,    35,    37,    28,    35,    28,    34,    37,    34,
      28,    37,    35,    34,    28,    35,    35,    34,    -1,    -1,
      36,    36,    34,    36,    35,    34,    36,    35,    28,    35,
      28,    36,    34,    36,    28,    34,    28,    28,    35,    34,
      28,    11,    35,    11,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    42,     5,    43,    44,     0,     7,    10,    24,
      67,    48,     8,    24,    11,    12,    14,    16,    18,    19,
      49,    50,    53,    56,    59,    62,    45,     4,    28,    32,
      51,    68,    28,    33,    57,    28,    34,    35,    36,    37,
      60,    68,     6,     9,    46,    26,    26,    25,    25,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    69,    70,    26,    26,    25,    26,    61,    61,
      61,    61,    61,    25,    25,    29,    30,    47,    27,    27,
      52,    67,    50,    54,    55,    56,    59,    62,    26,    27,
      27,    58,    59,    67,    27,    34,    35,    36,    37,    28,
      35,    36,    37,    28,    34,    36,    37,    28,    34,    35,
      37,    28,    34,    35,    36,    21,    23,    63,    64,    65,
      66,    26,    26,    25,    32,    28,    13,    15,    55,    27,
      33,    28,    17,    59,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    68,    68,    20,    64,    27,    27,
      26,    26,    26,    26,    35,    36,    37,    34,    36,    37,
      34,    35,    37,    34,    35,    36,    35,    36,    37,    28,
      36,    37,    28,    35,    37,    28,    35,    36,    34,    36,
      37,    28,    36,    37,    28,    34,    37,    28,    34,    36,
      34,    35,    37,    28,    35,    37,    28,    34,    37,    28,
      34,    35,    34,    35,    36,    28,    35,    36,    28,    34,
      36,    28,    34,    35,    25,    25,    31,    27,    27,    27,
      27,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    67,    26,    36,    37,    35,    37,    35,    36,    36,
      37,    34,    37,    34,    36,    35,    37,    34,    37,    34,
      35,    35,    36,    34,    36,    34,    35,    36,    37,    35,
      37,    35,    36,    36,    37,    28,    37,    28,    36,    35,
      37,    28,    37,    28,    35,    35,    36,    28,    36,    28,
      35,    36,    37,    34,    37,    34,    36,    36,    37,    28,
      37,    28,    36,    34,    37,    28,    37,    28,    34,    34,
      36,    28,    36,    28,    34,    35,    37,    34,    37,    34,
      35,    35,    37,    28,    37,    28,    35,    34,    37,    28,
      37,    28,    34,    34,    35,    28,    35,    28,    34,    35,
      36,    34,    36,    34,    35,    35,    36,    28,    36,    28,
      35,    34,    36,    28,    36,    28,    34,    34,    35,    28,
      35,    28,    34,    22,    27,    61,    61,    61,    61,    61,
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
      61,    61,    61,    61,    61,    37,    36,    37,    35,    36,
      35,    37,    36,    37,    34,    36,    34,    37,    35,    37,
      34,    35,    34,    36,    35,    36,    34,    35,    34,    37,
      36,    37,    35,    36,    35,    37,    36,    37,    28,    36,
      28,    37,    35,    37,    28,    35,    28,    36,    35,    36,
      28,    35,    28,    37,    36,    37,    34,    36,    34,    37,
      36,    37,    28,    36,    28,    37,    34,    37,    28,    34,
      28,    36,    34,    36,    28,    34,    28,    37,    35,    37,
      34,    35,    34,    37,    35,    37,    28,    35,    28,    37,
      34,    37,    28,    34,    28,    35,    34,    35,    28,    34,
      28,    36,    35,    36,    34,    35,    34,    36,    35,    36,
      28,    35,    28,    36,    34,    36,    28,    34,    28,    35,
      34,    35,    28,    34,    28,    61,    61,    61,    61,    61,
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
      61,    61,    61,    61,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    45,    45,    46,    47,
      47,    48,    48,    49,    49,    49,    49,    49,    50,    51,
      51,    51,    52,    52,    53,    54,    54,    55,    55,    55,
      55,    56,    57,    57,    58,    58,    58,    58,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    62,    63,    63,    64,
      64,    65,    66,    67,    67,    68,    68,    69,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     1,     0,     6,     2,     0,     3,     3,
       6,     2,     0,     1,     1,     1,     1,     1,     5,     3,
       6,     6,     1,     0,     5,     2,     1,     1,     1,     1,
       1,     5,     6,     6,     1,     1,     2,     0,     3,    10,
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
      10,    10,    10,    10,    10,    10,    10,    10,    10,     6,
       6,     6,     6,     6,     6,     2,     5,     2,     1,     1,
       1,     3,     5,     2,     1,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 1595 "parser.tab.c"
    break;


#line 1599 "parser.tab.c"

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

#line 196 "parser.y"


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
