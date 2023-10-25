#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/*
Написать программу, которая выводит в начало текстового файла запрошенную при работе программы информацию и после дописывает исходное содержимое файла.
*/

void main(int argc, char* argv[])
{
    FILE *fp;
    char buffer[256]; //буфер для записи строки в него

    char* line = (char*)malloc(16 * sizeof(char));

    strcpy(line, "line to start!\n"); //копируем строку в ячейку памяти line

    char* fname = argv[1];

    //printf("Введите текстовую информацию для записи в начало файла: ");
    //scanf("%s", &line);
    fp = fopen(fname, "r");

    while (fgets(buffer, 256, fp)!=NULL) {

        printf("%s", buffer);
    }


    /*
    if (access(fname, F_OK) == 0) {
        fp = fopen(fname, "a+");

        fseek(fp,0,SEEK_SET);
        fputs(line, fp);

        fclose(fp);
    } else {
        printf("Файл %s не существует\n", fname);
    }
    free(line);  // освободили память после использования
    */
}



