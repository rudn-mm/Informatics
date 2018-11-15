#include <stdio.h>
 
int main (void)
{
    char c;
    FILE *file = fopen("file6.txt", "r");
    printf("Текст из файла:\n");
    do {
      c = fgetc(file);
      putchar (c);
    } while (c != EOF);
    fclose(file);
    printf("\n");
}