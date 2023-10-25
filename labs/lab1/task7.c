#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/*
Написать программу, которая дописывает в конец текстового файла указанную в программе строку.
*/

void main(int argc, char* argv[])
{
    FILE *fp;
    char buffer[256]; //буфер для записи строки в него

    char* line = (char*)malloc(14 * sizeof(char));

    strcpy(line, "line to end!\n"); //копируем строку в ячейку памяти line

    char* fname = argv[1];

    if (access(fname, F_OK) == 0) {
        fp = fopen(fname, "a");

        fputs(line, fp);

        fclose(fp);
    } else {
        printf("Файл %s не существует\n", fname);
    }
    free(line);  // освободили память после использования
}



