#include <stdio.h>
#include <unistd.h>
/*
Написать программу, которая читает текстовый файл, создаёт новый текстовый файл с заданным в программе названием и вносит в него только первые 3 строки исходного файла.
*/

void main(int argc, char* argv[])
{
    FILE *fp, *resfile;
    char buffer[256]; //буфер для записи строки в него
    char* resfile_name = "resfile.txt";

    char* fname = argv[1];

    if (access(fname, F_OK) == 0) {
        fp = fopen(fname, "r");
        resfile = fopen(resfile_name, "w");

        for(int i=0; i<3; i++)
        {
            fgets(buffer, 256, fp);
            fputs(buffer, resfile);
        }
        fclose(fp);
        fclose(resfile);
    } else {
        printf("Файл %s не существует\n", fname);
    }

}


