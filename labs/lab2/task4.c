#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Написать программу, которая в качестве аргумента принимает размер произвольного массива, 
создает его, заполняет случайными числами с плавающей точкой в интервале (arg1, arg2), 
где arg1 и arg2 - также аргументы, вводимые при запуске программы, 
и выводит массив в консоль. Далее программа записывает массив в файл в отсортированном виде.
*/

void swap(float array[], int i, int j) {
    float tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

void sortBubble(float array[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j+1]) {
                swap(array, j, j+1);
            }
        }
    }
}

void main(int argc, char* argv[])
{
    char* fname = argv[1];
    FILE* fp;
    
    int size = atoi(argv[2]);
    float arg1 = atof(argv[3]);
    float arg2 = atof(argv[4]);
    
    float array[size];
    float sorted_array[size];
    
    srand(time(NULL)); //устанавливает текущее время в качестве базы для получения псевдослучайных чисел
    
    //RAND_MAX постоянная, которая равна максимальному числу, возвращаемому из функции rand()
    for (int i = 0; i < size; i++) {
        array[i] = (float)rand() / (float)RAND_MAX * (arg2 - arg1) + arg1; // результаты в диапазоне от 0 до 1
    }
    
    for (int i = 0; i < size; i++) {
        printf("%.2f\t",array[i]);
    }
    
    sortBubble(array, size);
    
    fp = fopen(fname, "w");
    
    for (int i = 0; i < size; i++) {
        fprintf(fp, "%.2f\t",array[i]);
    }
    fclose(fp);
}
