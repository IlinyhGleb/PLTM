#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
/*
Написать программу, которая генерирует массив из псевдослучайных целых чисел и выводит его в консоль.
*/
void main()
{
    int array[SIZE];
    
    srand(time(NULL));
    
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 20; // остаток от деления большого псевдослучайного числа на 20
    }
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n",array[i]);
    }
}
