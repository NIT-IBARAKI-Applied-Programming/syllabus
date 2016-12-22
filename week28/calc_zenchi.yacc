%token NL LP RP NUMBER
%token ADD SUB MUL DIV
%%
list : 
     | list expr NL { printf("%d\n", $2);}
     ;
expr : ADD expr expr { $$ = $2 + $3;}
     | SUB expr expr { $$ = $2 - $3;}
     | MUL expr expr { $$ = $2 * $3;}
     | DIV expr expr { $$ = $2 / $3;}
     | LP expr RP    { $$ = $2;}
     | NUMBER        { $$ = $1;}
     ;
%%
#include "lex.yy.c"
