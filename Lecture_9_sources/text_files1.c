#include <stdio.h>
 
int main(void)
{
    FILE *file = fopen("file1.txt", "w"); // открытие текстового файла с правами на запись
    fprintf(file, "Hello, World!");
    fclose(file);
}