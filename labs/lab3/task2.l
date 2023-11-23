%{
#include <stdio.h>
#include "y.tab.h"
%}
/*
Описать грамматику, позволяющую вычислять значения арифметических выражений, состоящих из целых чисел и знаков «+» и «-»

Компиляция:
yacc -d task2.y
lex task2.l
cc lex.yy.c y.tab.c -o task2
Запуск:
./task2
*/
%%
^[+-]?[0-9]+    yylval=atoi(yytext); return NUMBER;
-               return MINUS;
\+              return PLUS;
\n              /* игнорируем символ конца строки */;
[ \t]+          /* игнорируем пробелы и символы табуляции */;
%%
