#include <stdio.h>
/*
Написать программу, выполняющую операцию c = a + b, целые числа a, b заданы в программе. Реализовать вывод результата в виде строки, пример "с=8".
*/

int main()
{
    int a = 4.2;
    int b = 3.8;
    int c;

    c = a + b;

    printf("c=%d\n", c);

    return 0;
}
