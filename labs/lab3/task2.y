%{
#include <stdio.h>
#include <string.h>
void yyerror(const char *str);
int yylex();
%}

//На основе этой строки генерируется файл y.tab.h, если YACC вызван с ключом '-d'.
%token NUMBER PLUS MINUS

%%

command: sum {printf("%d\n", $1);}
       | difference {printf("%d\n", $1);}
       ;

sum: NUMBER PLUS NUMBER {$$=$1+$3;}
   ;

difference: NUMBER MINUS NUMBER {$$=$1-$3;}
          ;
%%

//запускается при обнаружении ошибки
void yyerror(const char *str)
{
        fprintf(stderr,"ошибка: %s\n",str);
}
//вызывается при получении символа EOF
int yywrap()
{
        return 1; //1 - конец, 0 - можно открыть другой файл
}

int main()
{
        yyparse();
        return 0;
}
