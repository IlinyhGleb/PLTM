%{
#include <stdio.h>
%}
/*
Написать программу для генератора лексических анализаторов, выводящую в консоль переданный токен.

Компиляция:
lex task1.l
cc lex.yy.c -o task1 -lfl
Запуск:
./task1
*/
%%
stop    printf("Получена команда stop\n");
start   printf("Получена команда start\n");
%%
