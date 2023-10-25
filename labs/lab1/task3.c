#include <stdio.h>
/*
Написать программу, которая выводит в терминал набор аргументов вызова исполняемого файла, заданных в консоли.
*/

void main(int argc, char* argv[])
{
    for(int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}
