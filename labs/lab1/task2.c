#include "task2.h"
#include <stdio.h>

float task2(float a, float b, float c)
{
	return (c-b)/a;
}

int main()
{
    float x;

    x = task2(4.3, 3, 8);

    printf("x=%f\n", x);
    return 0;
}
