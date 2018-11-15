#include <stdio.h>

int main(void)
{
    char c;
 
    FILE *file = fopen("file8.txt", "r");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return -1;
    }
    
    while (!feof(file))
    {
        c = fgetc(file);
        printf("%c", c);
    }
 
    fclose(file);
    printf("\n");
}