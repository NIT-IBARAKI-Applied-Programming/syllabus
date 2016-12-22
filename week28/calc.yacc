%token NL LP RP NUMBER
%token ADD SUB MUL DIV
%%
list : 
     | list expr NL { printf("%d\n", $2);}
     ;
expr : expr ADD expr { $$ = $1 + $3;}
     | expr SUB expr { $$ = $1 - $3;}
     | expr MUL expr { $$ = $1 * $3;}
     | expr DIV expr { $$ = $1 / $3;}
     | LP expr RP    { $$ = $2;}
     | NUMBER        { $$ = $1;}
     ;
%%
#include "lex.yy.c"
