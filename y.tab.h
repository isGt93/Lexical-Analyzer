/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    T_INTEGER = 274,
    T_FLOAT = 275,
    T_STRING = 276,
    IDENTIFIER = 277,
    S_QUOTES = 278,
    T_BOOLEAN = 279,
    T_NULL = 280,
    ECHO = 281,
    EQUALS = 282,
    GLOBAL_STATIC = 283,
    S_COMA = 284,
    C_PRINT = 285
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
#define T_INTEGER 274
#define T_FLOAT 275
#define T_STRING 276
#define IDENTIFIER 277
#define S_QUOTES 278
#define T_BOOLEAN 279
#define T_NULL 280
#define ECHO 281
#define EQUALS 282
#define GLOBAL_STATIC 283
#define S_COMA 284
#define C_PRINT 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
