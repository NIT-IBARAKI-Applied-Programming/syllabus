%%
"+" return ADD;
"-" return SUB;
"*" return MUL;
"/" return DIV;
"(" return LP;
")" return RP;
"\n" return NL;

[0-9]+ {
  yylval = atoi(yytext);
  return NUMBER;
}
%%
