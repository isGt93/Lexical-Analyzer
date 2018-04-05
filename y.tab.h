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
    P_VARIABLE = 263,
    W_RESERVED = 264,
    S_VARIABLE = 265,
    S_UNDERSCORE = 266,
    S_SEMICOLON = 267,
    S_COMA = 268,
    S_DOUBLEP = 269,
    S_PARENTESIS = 270,
    S_BRACKETS = 271,
    S_SBRACKETS = 272,
    O_CONCATENATION = 273,
    O_CONCATENATIONA = 274,
    W_CONSTANT = 275,
    W_CONSTANT2 = 276,
    W_IF = 277,
    W_ELSEIF = 278,
    W_ELSE = 279,
    W_SWITCH = 280,
    W_CASE = 281,
    W_BREAK = 282,
    W_ENDSWITCH = 283,
    W_ENDIF = 284,
    W_WHILE = 285,
    W_ENDWHILE = 286,
    W_DO = 287,
    W_FOR = 288,
    W_ENDFOR = 289,
    W_FOREACH = 290,
    W_ENDFOREACH = 291,
    S_FOREACH = 292,
    W_INCLUDE = 293,
    W_CONTINUE = 294,
    W_RETURN = 295,
    O_COMPARISON = 296,
    EQUALS = 297,
    O_ASSIGNMENT = 298,
    O_INC_DEC = 299,
    O_ARITHMETIC = 300,
    O_LOGICAL = 301,
    O_LOGICAL2 = 302,
    T_INTEGER = 303,
    T_FLOAT = 304,
    T_BOOLEAN = 305,
    T_NULL = 306,
    T_STRING = 307,
    IDENTIFIER = 308,
    DATABASE = 309,
    P_VARIABLE2 = 310,
    S_INTERROGATION = 311,
    SYMBOLS = 312
  };
#endif
/* Tokens.  */
#define START 258
#define END 259
#define S_COMMENT1 260
#define S_COMMENT2 261
#define MULTILINE 262
#define P_VARIABLE 263
#define W_RESERVED 264
#define S_VARIABLE 265
#define S_UNDERSCORE 266
#define S_SEMICOLON 267
#define S_COMA 268
#define S_DOUBLEP 269
#define S_PARENTESIS 270
#define S_BRACKETS 271
#define S_SBRACKETS 272
#define O_CONCATENATION 273
#define O_CONCATENATIONA 274
#define W_CONSTANT 275
#define W_CONSTANT2 276
#define W_IF 277
#define W_ELSEIF 278
#define W_ELSE 279
#define W_SWITCH 280
#define W_CASE 281
#define W_BREAK 282
#define W_ENDSWITCH 283
#define W_ENDIF 284
#define W_WHILE 285
#define W_ENDWHILE 286
#define W_DO 287
#define W_FOR 288
#define W_ENDFOR 289
#define W_FOREACH 290
#define W_ENDFOREACH 291
#define S_FOREACH 292
#define W_INCLUDE 293
#define W_CONTINUE 294
#define W_RETURN 295
#define O_COMPARISON 296
#define EQUALS 297
#define O_ASSIGNMENT 298
#define O_INC_DEC 299
#define O_ARITHMETIC 300
#define O_LOGICAL 301
#define O_LOGICAL2 302
#define T_INTEGER 303
#define T_FLOAT 304
#define T_BOOLEAN 305
#define T_NULL 306
#define T_STRING 307
#define IDENTIFIER 308
#define DATABASE 309
#define P_VARIABLE2 310
#define S_INTERROGATION 311
#define SYMBOLS 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "lexicalAnalyzer.y" /* yacc.c:1909  */

	char *str;

#line 172 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
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
