%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex();
	void yyerror(const char *s);
	int counter;
%}

%token START
%token END
%token S_COMMENT1
%token S_COMMENT2
%token MULTILINE
%token P_VARIABLE
%token W_RESERVED
%token S_VARIABLE
%token S_UNDERSCORE
%token S_SEMICOLON
%token S_COMA
%token S_DOUBLEP
%token S_PARENTESIS
%token S_BRACKETS
%token S_SBRACKETS
%token O_CONCATENATION
%token O_CONCATENATIONA
%token W_CONSTANT
%token W_CONSTANT2
%token W_IF
%token W_ELSEIF
%token W_ELSE
%token W_SWITCH
%token W_CASE
%token W_BREAK
%token W_ENDSWITCH
%token W_ENDIF
%token W_WHILE
%token W_ENDWHILE
%token W_DO
%token W_FOR
%token W_ENDFOR
%token W_FOREACH
%token W_ENDFOREACH
%token S_FOREACH
%token W_INCLUDE
%token W_CONTINUE
%token W_RETURN
%token O_COMPARISON
%token EQUALS
%token O_ASSIGNMENT
%token O_INC_DEC
%token O_ARITHMETIC
%token O_LOGICAL
%token O_LOGICAL2
%token T_INTEGER
%token T_FLOAT
%token T_BOOLEAN
%token T_NULL
%token T_STRING
%token IDENTIFIER
%token DATABASE
%token P_VARIABLE2
%token S_INTERROGATION
%token SYMBOLS
%token CONSTANTS
%token HEXA
%token BINARY

%union{
	char *str;
}
%define parse.error verbose
%locations
%start INIT
%% 

	INIT:	CONTENT
		| error CONTENT;

	CONTENT: START
		| END
		| S_COMMENT1
		| S_COMMENT2
		| MULTILINE
		| P_VARIABLE
		| W_RESERVED
		| DATABASE
		| DATABASE CONTENT
		| S_VARIABLE
		| S_UNDERSCORE
		| S_SEMICOLON
		| S_COMA
		| S_DOUBLEP
		| S_PARENTESIS
		| S_BRACKETS
		| S_SBRACKETS
		| O_CONCATENATION
		| O_CONCATENATIONA
		| W_CONSTANT
		| W_CONSTANT2
		| W_ELSEIF
		| W_ELSE
		| W_SWITCH
		| W_BREAK
		| W_ENDSWITCH
		| W_ENDIF
		| W_WHILE
		| W_ENDWHILE
		| W_DO
		| W_FOR
		| W_ENDFOR
		| W_FOREACH
		| W_ENDFOREACH
		| S_FOREACH
		| W_INCLUDE
		| W_CONTINUE
		| W_RETURN
		| O_COMPARISON
		| EQUALS
		| O_ASSIGNMENT
		| O_INC_DEC
		| O_ARITHMETIC
		| O_LOGICAL
		| O_LOGICAL2
		| T_INTEGER
		| T_FLOAT
		| T_BOOLEAN
		| T_NULL
		| T_STRING
		| IDENTIFIER
		| START CONTENT
		| END CONTENT
		| S_COMMENT1 CONTENT
		| S_COMMENT2 CONTENT
		| MULTILINE CONTENT
		| P_VARIABLE CONTENT 
		| W_RESERVED CONTENT
		| S_VARIABLE CONTENT
		| S_UNDERSCORE CONTENT
		| S_SEMICOLON CONTENT
		| S_COMA CONTENT
		| S_DOUBLEP CONTENT
		| S_PARENTESIS CONTENT
		| S_BRACKETS CONTENT
		| S_SBRACKETS CONTENT
		| O_CONCATENATION CONTENT
		| O_CONCATENATIONA CONTENT
		| W_CONSTANT CONTENT
		| W_CONSTANT2 CONTENT
		| W_ELSEIF CONTENT
		| W_ELSE CONTENT
		| W_SWITCH CONTENT
		| W_BREAK CONTENT
		| W_ENDSWITCH CONTENT
		| W_ENDIF CONTENT
		| W_WHILE CONTENT
		| W_ENDWHILE CONTENT
		| W_DO CONTENT
		| W_FOR CONTENT
		| W_ENDFOR CONTENT
		| W_FOREACH CONTENT
		| W_ENDFOREACH CONTENT
		| S_FOREACH CONTENT
		| W_INCLUDE CONTENT
		| W_CONTINUE CONTENT
		| W_RETURN CONTENT
		| O_COMPARISON CONTENT
		| EQUALS CONTENT
		| O_ASSIGNMENT CONTENT
		| O_INC_DEC CONTENT
		| O_ARITHMETIC CONTENT
		| O_LOGICAL CONTENT
		| O_LOGICAL2 CONTENT
		| T_INTEGER CONTENT
		| T_FLOAT CONTENT
		| T_BOOLEAN CONTENT
		| T_NULL CONTENT
		| T_STRING CONTENT
		| IDENTIFIER CONTENT
		| W_IF
		| W_IF CONTENT
		| W_CASE 
		| W_CASE CONTENT
		| P_VARIABLE2
		| P_VARIABLE2 CONTENT
		| S_INTERROGATION
		| S_INTERROGATION CONTENT
		| SYMBOLS
		| SYMBOLS CONTENT
		| CONSTANTS
		| CONSTANTS CONTENT
		| HEXA
		| HEXA CONTENT
		| BINARY
		| BINARY CONTENT;

%%

int main(int argc, char *argv[])
{
	extern FILE *yyin;
	FILE *open;
	if(argc==2 && (open = fopen(argv[1], "r"))){
		yyin = open;
	}

	extern FILE *yyout;
	char *name=malloc(strlen(argv[1])+strlen(".out"));
	strcat(name, argv[1]);
	strcat(name, ".out");
	yyout = fopen(name, "a");

	if(yyparse()==0 && counter==0)
	{
		printf("\nAnalisis concluded. The file does belongs to the PHP Lenguage.\n");
	}
	else
	{
		printf("\nThe input file has some errors, they are stated in the file error.out\n");
		//Opcional, si se elimina creara el archivo sin los errores.
		remove(name);
	}

	fclose(yyout);
}
void yyerror(const char* mensaje)
{
	extern int yylineno;
	extern char yytext[];
	printf("\nMessage: %s Line: %d Text: %s\n",mensaje, yylineno, yytext);

	FILE *fp;
	fp = fopen("errors.out", "a");
	fprintf(fp, "Message: %s Line: %d Text: %s\n",mensaje, yylineno, yytext);
	fclose(fp);

	counter++;
}
