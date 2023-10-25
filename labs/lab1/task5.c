#include <stdio.h>
#include <unistd.h>
/*
Написать программу, которая выводит в терминал содержимое текстового файла, название которого передается при вызове исполняемого файла. Программа работает аналогично программе cat.
*/

void main(int argc, char* argv[])
{
    FILE *fp;
    char buffer[256]; //буфер для записи строки в него

    char* fname = argv[1];

    if (access(fname, F_OK) == 0) {
        fp = fopen(fname, "r");
        while((fgets(buffer, 256, fp))!=NULL)
            {
                printf("%s", buffer);
            }
        fclose(fp);
    } else {
        printf("Файл %s не существует\n", fname);
    }

}


