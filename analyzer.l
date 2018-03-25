%{
	#include<stdio.h>
	#include "y.tab.h"
%}
DIGIT [0-9]+
LETTER[a-zA-Z]+
%option yylineno
%option noinput nounput

%%
"<?php"							{printf("START"); return START;}
"?>"							{printf("END"); return END;}
"//".*							{return S_COMMENT1;}
"#".*							{return S_COMMENT2;}
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]			{return MULTILINE;}
"$"							{return S_VARIABLE;}
"_"							{return S_UNDERSCORE;}
";"							{return S_SEMICOLON;}
","							{return S_COMA;}
":"							{return S_DOUBLEP;}
"("							{return S_OPARENTESIS;}
")"							{return S_CPARENTESIS;}
"{"							{return S_OBRACKETS;}
"}"							{return S_CBRACKETS;}
"."							{return O_CONCATENATION;}
".="							{return O_CONCATENATIONA;}
"echo"							{return ECHO;}
"print"							{return C_PRINT;}
"global"|"static"					{return GLOBAL_STATIC;}
"define"						{return W_CONSTANT;}
"const"							{return W_CONSTANT2;}
"if"							{return W_IF;}
"elseif"						{return W_ELSEIF;}
"else"							{return W_ELSE;}
"switch"						{return W_SWITCH;}
"case"							{return W_CASE;}
"break"							{return W_BREAK;}	
"default"						{return W_DEFAULT;}
"endswitch"						{return W_ENDSWITCH;}
"endif"							{return W_ENDIF;}
"while"							{return W_WHILE;}
"endwhile"						{return W_ENDWHILE;}
"do"							{return W_DO;}
"for"							{return W_FOR;}
"endfor"						{return W_ENDFOR;}
"foreach"						{return W_FOREACH;}
"endforeach"						{return W_ENDFOREACH;}
"=>"							{return S_FOREACH;}
"as"							{return W_AS;}
"__halt_compiler()"|"abstract"|"and"|"array()"|"as"|"callable"|"catch"|"class"|"clone"|"continue"|"declare"|"die()"|"empty()"|"enddeclare"|"eval()"|"exit()"|"extends"|"final"|"finally"|"function"|"goto"|"implements"|"include"|"include_once"|"instanceof"|"insteadof"|"interface"|"isset()"|"list()"|"namespace"|"new"|"or"|"private"|"protected"|"public"|"require"|"require_once"|"return"|"throw"|"trait"|"try"|"unset()"|"use"|"var"|"xor"|"yield" 			{printf("16");return W_RESERVED;}
"+"|"-"|"*"|"/"|"%"|"**"				{return O_ARITHMETIC;}
"==="|"=="|"!="|"<>"|"!=="|"<"|">"|"<="|">="		{return O_COMPARISON;}
"="							{return EQUALS;}
"+="|"-="|"*="|"/="|"%="				{return O_ASSIGNMENT;}
"++"|"--"						{return O_INC_DEC;}
"and"|"or"|"xor"|"&&"|"\|\|"|"!"			{return O_LOGICAL;}
"&"							{return S_AND;}
{DIGIT}+						{return T_INTEGER;}
{DIGIT}+\.{DIGIT}+					{return T_FLOAT;}
"true"|"false"						{return T_BOOLEAN;}
"null"							{return T_NULL;}
\"(\\.|[^"\\])*\"					{return T_STRING;}
({LETTER}|"_")({LETTER}|{DIGIT}|"_")*			{return IDENTIFIER;}
[ \t\n]							;
%%

int yywrap() {return 1;}
