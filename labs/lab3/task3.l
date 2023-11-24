%{
#include <stdio.h>
#include "y.tab.h"
%}
/*
Описать грамматику, позволяющую проводить трансляцию арифметических выражений, состоящих из целых чисел, знаков «+», «-», «*», «/» и скобок из инфиксной записи в постфиксную.

Компиляция:
yacc -d task3.y && lex task3.l && cc lex.yy.c y.tab.c -o task3
Запуск:
./task3
*/
%%
[0-9]+          {yylval=atoi(yytext); return NUMBER;}
\n              {return END;}
[ \t]+          /* игнорируем пробелы и символы табуляции */;
.               {return yytext[0];}
%%
//вызывается при получении символа EOF
int yywrap(void) {
    return 1;
}
