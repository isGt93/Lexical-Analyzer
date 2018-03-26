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
    O_LOGICAL2 = 274,
    T_INTEGER = 275,
    T_FLOAT = 276,
    T_STRING = 277,
    IDENTIFIER = 278,
    S_QUOTES = 279,
    T_BOOLEAN = 280,
    T_NULL = 281,
    ECHO = 282,
    EQUALS = 283,
    GLOBAL_STATIC = 284,
    S_COMA = 285,
    C_PRINT = 286,
    W_CONSTANT = 287,
    W_CONSTANT2 = 288,
    S_OPARENTESIS = 289,
    S_CPARENTESIS = 290,
    W_IF = 291,
    W_ELSEIF = 292,
    W_ELSE = 293,
    S_OBRACKETS = 294,
    S_CBRACKETS = 295,
    S_OSBRACKETS = 296,
    S_CSBRACKETS = 297,
    W_SWITCH = 298,
    S_DOUBLEP = 299,
    W_CASE = 300,
    W_BREAK = 301,
    W_DEFAULT = 302,
    W_ENDSWITCH = 303,
    W_ENDIF = 304,
    W_ENDWHILE = 305,
    W_WHILE = 306,
    W_DO = 307,
    W_FOR = 308,
    W_ENDFOR = 309,
    W_FOREACH = 310,
    W_ENDFOREACH = 311,
    S_FOREACH = 312,
    W_AS = 313,
    S_AND = 314,
    W_INCLUDE = 315,
    W_CONTINUE = 316,
    W_RETURN = 317,
    W_FUNCTION = 318,
    P_VARIABLE = 319,
    DB_RECORDSET = 320
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
#define O_LOGICAL2 274
#define T_INTEGER 275
#define T_FLOAT 276
#define T_STRING 277
#define IDENTIFIER 278
#define S_QUOTES 279
#define T_BOOLEAN 280
#define T_NULL 281
#define ECHO 282
#define EQUALS 283
#define GLOBAL_STATIC 284
#define S_COMA 285
#define C_PRINT 286
#define W_CONSTANT 287
#define W_CONSTANT2 288
#define S_OPARENTESIS 289
#define S_CPARENTESIS 290
#define W_IF 291
#define W_ELSEIF 292
#define W_ELSE 293
#define S_OBRACKETS 294
#define S_CBRACKETS 295
#define S_OSBRACKETS 296
#define S_CSBRACKETS 297
#define W_SWITCH 298
#define S_DOUBLEP 299
#define W_CASE 300
#define W_BREAK 301
#define W_DEFAULT 302
#define W_ENDSWITCH 303
#define W_ENDIF 304
#define W_ENDWHILE 305
#define W_WHILE 306
#define W_DO 307
#define W_FOR 308
#define W_ENDFOR 309
#define W_FOREACH 310
#define W_ENDFOREACH 311
#define S_FOREACH 312
#define W_AS 313
#define S_AND 314
#define W_INCLUDE 315
#define W_CONTINUE 316
#define W_RETURN 317
#define W_FUNCTION 318
#define P_VARIABLE 319
#define DB_RECORDSET 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
