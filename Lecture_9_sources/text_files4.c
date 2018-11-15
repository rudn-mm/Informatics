#include <stdio.h>
 
int main(void)
{
    char str[128];
 
    FILE *file = fopen("file4.txt", "r");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return -1;
    }
    
    fgets(str, 127, file);
    printf("%s\n", str);
    fclose(file);
}