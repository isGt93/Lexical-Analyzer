%{
	#include<stdio.h>
	#include "y.tab.h"
%}
DIGIT [0-9]+
LETTER[a-zA-Z]+

%%
"<?php"							{printf("START"); return START;}
"?>"							{printf("END"); return END;}
"//".*							{return S_COMMENT1;}
"#".*							{return S_COMMENT2;}
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]			{printf("MULT"); return MULTILINE;}
"$"							{return S_VARIABLE;}
"_"							{return S_UNDERSCORE;}
";"							{printf("SEMICOLON"); return S_SEMICOLON;}
","							{return S_COMA;}
"."							{return O_CONCATENATION;}
".="							{return O_CONCATENATIONA;}
"echo"							{return ECHO;}
"print"							{return C_PRINT;}
"global"|"static"					{return GLOBAL_STATIC;}
"__halt_compiler()"|"abstract"|"and"|"array()"|"as"|"break"|"callable"|"case"|"catch"|"class"|"clone"|"const"|"continue"|"declare"|"default"|"die()"|"do"|"else"|"elseif"|"empty()"|"enddeclare"|"endfor"|"endforeach"|"endif"|"endswitch"|"endwhile"|"eval()"|"exit()"|"extends"|"final"|"finally"|"for"|"foreach"|"function"|"goto"|"if"|"implements"|"include"|"include_once"|"instanceof"|"insteadof"|"interface"|"isset()"|"list()"|"namespace"|"new"|"or"|"private"|"protected"|"public"|"require"|"require_once"|"return"|"switch"|"throw"|"trait"|"try"|"unset()"|"use"|"var"|"while"|"xor"|"yield" 							{printf("W_RESERVED"); return W_RESERVED;}
"+"|"-"|"*"|"/"|"%"|"**"				{return O_ARITHMETIC;}
"==="|"=="|"!="|"<>"|"!=="|"<"|">"|"<="|">="		{return O_COMPARISON;}
"="							{return EQUALS;}
"+="|"-="|"*="|"/="|"%="				{return O_ASSIGNMENT;}
"++"|"--"						{return O_INC_DEC;}
"and"|"or"|"xor"|"&&"|"\|\|"|"!"			{return O_LOGICAL;}
{DIGIT}+						{return T_INTEGER;}
{DIGIT}+\.{DIGIT}+					{return T_FLOAT;}
"true"|"false"						{return T_BOOLEAN;}
"null"							{return T_NULL;}
\".*\"							{printf("STRING"); return T_STRING;}
({LETTER}|"_")({LETTER}|{DIGIT}|"_")*			{return IDENTIFIER;}
[ \t\n]							;
%%

int yywrap() {return 1;}
