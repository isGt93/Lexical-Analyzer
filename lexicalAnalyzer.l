%{
	#include<stdio.h>
	#include<ctype.h>
	#include "y.tab.h"
%}
DIGIT [0-9]+
LETTER[a-zA-Z]+
%option yylineno
%option caseless
%array yytext
%option noinput nounput

%%
"<?php"							{ECHO; return START;}
"?>"							{ECHO; return END;}
"//".*							{ECHO; return S_COMMENT1;}
"#".*							{ECHO; return S_COMMENT2;}
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]			{ECHO; return MULTILINE;}
(__)(LINE|FILE|DIR|FUNCTION|CLASS|TRAIT|METHOD|NAMESPACE)(__)	{ECHO; return CONSTANTS;}
"$GLOBALS"|"$_SERVER"|"$_GET"|"$_POST"|"$_FILES"|"$_REQUEST"|"$_SESSION"|"$_ENV"|"$_COOKIE"|"$HTTP_RAW_POST_DATA" {for(int i=0; yytext[i]; i++){yytext[i]=toupper(yytext[i]);} ECHO; return P_VARIABLE;}
"$php_errormsg"|"$http_response_header"|"$argc"|"$argv" {for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return P_VARIABLE2;}
"function"|"as"|"default"|"global"|"static"|"print"|"echo"|"__halt_compiler()"|"abstract"|"and"|"array()"|"as"|"callable"|"catch"|"class"|"clone"|"declare"|"die()"|"empty()"|"enddeclare"|"eval()"|"exit()"|"extends"|"final"|"finally"|"function"|"goto"|"implements"|"include_once"|"instanceof"|"insteadof"|"interface"|"isset()"|"list()"|"namespace"|"new"|"or"|"private"|"protected"|"public"|"require_once"|"throw"|"trait"|"try"|"unset()"|"use"|"var"|"xor"|"yield" {for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_RESERVED;}
"$"({LETTER}|"_")({LETTER}|{DIGIT}|"_")*		{ECHO; return S_VARIABLE;}
"_"							{ECHO; return S_UNDERSCORE;}
";"							{ECHO; return S_SEMICOLON;}
","							{ECHO; return S_COMA;}
":"							{ECHO; return S_DOUBLEP;}
"("|")"							{ECHO; return S_PARENTESIS;}
"{"|"}"							{ECHO; return S_BRACKETS;}
"["|"]"							{ECHO; return S_SBRACKETS;}
"."							{ECHO; return O_CONCATENATION;}
".="							{ECHO; return O_CONCATENATIONA;}
"?"							{ECHO; return S_INTERROGATION;}
"define"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_CONSTANT;}
"const"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_CONSTANT2;}
"if"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_IF;}
"elseif"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_ELSEIF;}
"else"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_ELSE;}
"switch"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_SWITCH;}
"case"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_CASE;}
"break"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_BREAK;}
"endswitch"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_ENDSWITCH;}
"endif"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_ENDIF;}
"while"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_WHILE;}
"endwhile"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_ENDWHILE;}
"do"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_DO;}
"for"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_FOR;}
"endfor"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_ENDFOR;}
"foreach"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_FOREACH;}
"endforeach"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_ENDFOREACH;}
"=>"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return S_FOREACH;}
"include"|"require"					{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_INCLUDE;}
"continue"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_CONTINUE;}	
"return"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return W_RETURN;}
"$recordset["('([^'\n\\]|\\.)*')|(\"([^?"\n\\]|\\.)*\")"]" {for(int i=11; yytext[i]; i++){yytext[i]=toupper(yytext[i]);} ECHO; return DATABASE;}
"==="|"=="|"!="|"<>"|"!=="|"<"|">"|"<="|">="		{ECHO; return O_COMPARISON;}
"="							{ECHO; return EQUALS;}
"+="|"-="|"*="|"/="|"%="				{ECHO; return O_ASSIGNMENT;}
"++"|"--"						{ECHO; return O_INC_DEC;}
"+"|"-"|"*"|"/"|"%"|"**"				{ECHO; return O_ARITHMETIC;}
"and"|"or"|"xor"|"&&"|"\|\|"				{ECHO; return O_LOGICAL;}
"!"							{ECHO; return O_LOGICAL2;}
"&"|"\|"|"^"|"<<"|">>"					{ECHO; return SYMBOLS;}
0[xX][0-9a-fA-F]+					{ECHO; return HEXA;}
0[bB][01]+						{ECHO; return BINARY;}
({DIGIT}+|{DIGIT}+\.{DIGIT}+)"$"({LETTER}|"_")({LETTER}|{DIGIT}|"_")*	{return yytext[0];}
{DIGIT}+						{ECHO; return T_INTEGER;}
{DIGIT}+\.{DIGIT}+					{ECHO; return T_FLOAT;}
"true"|"false"						{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return T_BOOLEAN;}
"null"							{for(int i=0; yytext[i]; i++){yytext[i]=tolower(yytext[i]);} ECHO; return T_NULL;}
('([^'\n\\]|\\.)*')|(\"([^?"\n\\]|\\.)*\")		{ECHO; return T_STRING;}
({LETTER}|"_")({LETTER}|{DIGIT}|"_")*			{ECHO; return IDENTIFIER;}
[ \t\n]+						{ECHO;}
\n|\r\n|""|\t|\s					{ECHO;}
.							{return yytext[0];}
%%

int yywrap() {return 1;}
