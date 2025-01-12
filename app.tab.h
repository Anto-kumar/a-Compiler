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

#ifndef YY_YY_APP_TAB_H_INCLUDED
# define YY_YY_APP_TAB_H_INCLUDED
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
    INT = 258,                     /* INT  */
    DECI = 259,                    /* DECI  */
    STR = 260,                     /* STR  */
    BEG = 261,                     /* BEG  */
    END = 262,                     /* END  */
    NEWLINE = 263,                 /* NEWLINE  */
    ASSIGN = 264,                  /* ASSIGN  */
    INTNUMBER = 265,               /* INTNUMBER  */
    REALNUMBER = 266,              /* REALNUMBER  */
    singlecmnt = 267,              /* singlecmnt  */
    multicmnt = 268,               /* multicmnt  */
    VAR = 269,                     /* VAR  */
    STRING = 270,                  /* STRING  */
    DIVIDER = 271,                 /* DIVIDER  */
    SCAN = 272,                    /* SCAN  */
    FUNC = 273,                    /* FUNC  */
    ARR = 274,                     /* ARR  */
    LTB = 275,                     /* LTB  */
    RTB = 276,                     /* RTB  */
    LP = 277,                      /* LP  */
    RP = 278,                      /* RP  */
    PRINT = 279,                   /* PRINT  */
    SEMICOLON = 280,               /* SEMICOLON  */
    COMMA = 281,                   /* COMMA  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    MUL = 284,                     /* MUL  */
    DIV = 285,                     /* DIV  */
    MOD = 286,                     /* MOD  */
    POWER = 287,                   /* POWER  */
    ABSOLUTE = 288,                /* ABSOLUTE  */
    FACTORIAL = 289,               /* FACTORIAL  */
    INCRE = 290,                   /* INCRE  */
    DECRE = 291,                   /* DECRE  */
    EQUAL = 292,                   /* EQUAL  */
    GREATER = 293,                 /* GREATER  */
    LESS = 294,                    /* LESS  */
    GRTEQUAL = 295,                /* GRTEQUAL  */
    LESSEQUAL = 296,               /* LESSEQUAL  */
    NOTEQUAL = 297,                /* NOTEQUAL  */
    OR = 298,                      /* OR  */
    AND = 299,                     /* AND  */
    NOT = 300,                     /* NOT  */
    IF = 301,                      /* IF  */
    ELSE = 302,                    /* ELSE  */
    ELIF = 303,                    /* ELIF  */
    LB = 304,                      /* LB  */
    RB = 305,                      /* RB  */
    SWITCH = 306,                  /* SWITCH  */
    CASE = 307,                    /* CASE  */
    DEFAULT = 308,                 /* DEFAULT  */
    COLON = 309,                   /* COLON  */
    FROM = 310,                    /* FROM  */
    WHILE = 311,                   /* WHILE  */
    DO = 312,                      /* DO  */
    RANGE = 313,                   /* RANGE  */
    SIN = 314,                     /* SIN  */
    COS = 315,                     /* COS  */
    TAN = 316,                     /* TAN  */
    LOG10 = 317,                   /* LOG10  */
    LOG2 = 318                     /* LOG2  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "app.y"

  int integer;
  double real;
  char *text;

#line 133 "app.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_APP_TAB_H_INCLUDED  */
