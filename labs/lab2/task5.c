#include <stdio.h>
#include <stdlib.h>
/*
Создать структуру для хранения данных о названии и цене товара. Считать из входного файла данные о товарах. Написать функцию для сортировки товаров по цене. Вывести отсортированные данные в выходной файл.
*/

typedef struct {
    char name[7];
    float price;
} product;

void main()//int argc, char* argv[])
{
    int a;
    FILE *fp;

    char buffer[10];

    product prod;

    fp = fopen("input_task5.txt", "rb");

    //fgets(buffer, 10, fp);
    //printf("%s\n",buffer);

    //fread(&prod, sizeof(prod), 2, fp);

    fscanf(fp, "%s %f", prod.name, &prod.price);

    fclose(fp);
    //product prod = {"orange", 60};

    // char name[6] = "oratge";

    // printf("product : \n");
    // printf("%s\n", name);

    printf("product : %s \n", prod.name);

    printf("product : %f \n", prod.price);
}
