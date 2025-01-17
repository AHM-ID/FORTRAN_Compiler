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

#ifndef YY_YY_FORTRAN_TAB_H_INCLUDED
# define YY_YY_FORTRAN_TAB_H_INCLUDED
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
    PROGRAM = 258,                 /* PROGRAM  */
    END = 259,                     /* END  */
    SUBROUTINE = 260,              /* SUBROUTINE  */
    REAL = 261,                    /* REAL  */
    INTEGER = 262,                 /* INTEGER  */
    IF = 263,                      /* IF  */
    THEN = 264,                    /* THEN  */
    ELSE = 265,                    /* ELSE  */
    ENDIF = 266,                   /* ENDIF  */
    DO = 267,                      /* DO  */
    ENDDO = 268,                   /* ENDDO  */
    CALL = 269,                    /* CALL  */
    GOTO = 270,                    /* GOTO  */
    IDENTIFIER = 271,              /* IDENTIFIER  */
    INTEGER_CONST = 272,           /* INTEGER_CONST  */
    REAL_CONST = 273,              /* REAL_CONST  */
    CHARACTER = 274,               /* CHARACTER  */
    LOGICAL = 275,                 /* LOGICAL  */
    STRING = 276,                  /* STRING  */
    TRUE = 277,                    /* TRUE  */
    FALSE = 278,                   /* FALSE  */
    PLUS = 279,                    /* PLUS  */
    MINUS = 280,                   /* MINUS  */
    MUL = 281,                     /* MUL  */
    DIV = 282,                     /* DIV  */
    EQUALS = 283,                  /* EQUALS  */
    COMMA = 284,                   /* COMMA  */
    LPAREN = 285,                  /* LPAREN  */
    RPAREN = 286,                  /* RPAREN  */
    DOUBLE_COLON = 287,            /* DOUBLE_COLON  */
    ASTERISKCOMMA = 288,           /* ASTERISKCOMMA  */
    GT = 289,                      /* GT  */
    LT = 290,                      /* LT  */
    GE = 291,                      /* GE  */
    LE = 292,                      /* LE  */
    EQ = 293,                      /* EQ  */
    NE = 294,                      /* NE  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    NOT = 297,                     /* NOT  */
    PRINT = 298,                   /* PRINT  */
    ASSIGN = 299                   /* ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "fortran.y"

    char *str;
    int ival;
    double rval;

#line 114 "fortran.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_FORTRAN_TAB_H_INCLUDED  */
