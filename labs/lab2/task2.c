#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
/*
Написать программу, которая генерирует массив из псевдослучайных целых чисел, выводит его в консоль и записывает в файл в обратном порядке.
*/
void main()
{
    int array[SIZE];
    FILE* fp;
    
    fp = fopen("resfile.txt", "w");
    srand(time(NULL)); //устанавливает текущее время в качестве базы для получения псевдослучайных чисел
    
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 20; // остаток от деления большого псевдослучайного числа на 20
    }
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t",array[i]);
        fprintf(fp, "%d\t", array[SIZE - 1 - i]);
    }
}
