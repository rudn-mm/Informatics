#include <stdio.h>
 
int main (void)
{
    char c;
    FILE *file = fopen("file6.txt", "w");
    printf("Введите текст. Для выхода используйте команду 'q'.\n");

    while ((c = getchar()) != 'q')
    {
        fputc(c, file);
    }
    
    fclose(file);
}