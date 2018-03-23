%{

%}
DIGIT [0-9]+
LETTER[a-zA-Z]+
%%
"<?"							{return START;}
"?>"							{return END;}
"//"							{return S_COMMENT1;}
"#"							{return S_COMMENT2;}
"/*"							{return S_STARTCOMMENT;}
"*/"							{return S_ENDCOMMENT;}
"$"							{return S_VARIABLE;}
"_"							{return S_UNDERSCORE;}
"."							{return O_CONCATENATION;}
".="							{return O_CONCATENATIONA;}
"echo"|"function"|"global"|"static"|"print"|"array"|"new"|"define" {return W_RESERVED;}
"+"|"-"|"*"|"/"|"%"|"**"				{return O_ARITHMETIC;}
"="|"+="|"-="|"*="|"/="|"%="				{return O_ASSIGNMENT;}
"=="|"==="|"!="|"<>"|"!=="|"<"|">"|"<="|">="		{return O_COMPARISON;}
"++"|"--"						{return O_INC_DEC;}
"and"|"or"|"xor"|"&&"|"\|\|"|"!"
{DIGIT}+						{return T_INTEGER;}
{DIGIT}+\.{DIGIT}+					{return T_FLOAT;}
({LETTER}|"_")({LETTER}|{DIGIT}|"_")*			{return IDENTIFIER;}
"\""|"\'"						{return S_QUOTES;}
"true"|"false"						{return T_BOOLEAN;}
"null"							{return T_NULL;}





