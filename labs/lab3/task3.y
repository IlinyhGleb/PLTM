%{
#include <stdio.h>
#include <string.h>
void yyerror(const char *str);
int yylex();
%}

%start command
//На основе этой строки генерируется файл y.tab.h, если YACC вызван с ключом '-d'.
%token NUMBER END

%%

command: exp END {printf("%d\n", $1);}
       | command exp END {printf("%d\n", $2);}
       | END {printf("%s\n","END");}
       ;

exp: NUMBER {$$=$1;}
   | exp '+' NUMBER {$$=$1+$3;}
   | exp '-' NUMBER {$$=$1-$3;}
   ;
%%

//запускается при обнаружении ошибки
void yyerror(const char *str)
{
        fprintf(stderr,"ошибка: %s\n",str);
}


int main()
{
        yyparse();
        return 0;
}
