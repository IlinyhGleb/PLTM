#include "lab1.h"
#include <stdio.h>

int lab1(int a, int b)
{
	return a + b;
}

int lab2()
{
    int a;
    int b;
    int c;
    int x;

    a = 1;
    b = 2;
    c = 3;

    x = (c-b)/a;

    printf("x=%d\n", x);

	return 0;
}


int main()
{
    printf("Hello World");
    lab2();

    return 0;
}
