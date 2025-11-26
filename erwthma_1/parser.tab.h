/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MYHTML_OPEN = 258,             /* MYHTML_OPEN  */
    MYHTML_CLOSE = 259,            /* MYHTML_CLOSE  */
    HEAD_OPEN = 260,               /* HEAD_OPEN  */
    HEAD_CLOSE = 261,              /* HEAD_CLOSE  */
    TITLE_OPEN = 262,              /* TITLE_OPEN  */
    TITLE_CLOSE = 263,             /* TITLE_CLOSE  */
    META = 264,                    /* META  */
    BODY_OPEN = 265,               /* BODY_OPEN  */
    BODY_CLOSE = 266,              /* BODY_CLOSE  */
    P_OPEN = 267,                  /* P_OPEN  */
    P_CLOSE = 268,                 /* P_CLOSE  */
    DIV_OPEN = 269,                /* DIV_OPEN  */
    DIV_CLOSE = 270,               /* DIV_CLOSE  */
    A_OPEN = 271,                  /* A_OPEN  */
    A_CLOSE = 272,                 /* A_CLOSE  */
    IMAGE = 273,                   /* IMAGE  */
    FORM_OPEN = 274,               /* FORM_OPEN  */
    FORM_CLOSE = 275,              /* FORM_CLOSE  */
    LABEL_OPEN = 276,              /* LABEL_OPEN  */
    LABEL_CLOSE = 277,             /* LABEL_CLOSE  */
    INPUT = 278,                   /* INPUT  */
    INT = 279,                     /* INT  */
    STRING = 280,                  /* STRING  */
    TEXT = 281,                    /* TEXT  */
    MEGALYTERO = 282,              /* MEGALYTERO  */
    ISON = 283,                    /* ISON  */
    ID = 284,                      /* ID  */
    CHARSET = 285,                 /* CHARSET  */
    NAME = 286,                    /* NAME  */
    CONTENT = 287,                 /* CONTENT  */
    STYLE = 288,                   /* STYLE  */
    HREF = 289,                    /* HREF  */
    SRC = 290,                     /* SRC  */
    ALT = 291,                     /* ALT  */
    WIDTH = 292,                   /* WIDTH  */
    HEIGHT = 293,                  /* HEIGHT  */
    VALUE = 294,                   /* VALUE  */
    TYPE = 295,                    /* TYPE  */
    FOR = 296                      /* FOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
