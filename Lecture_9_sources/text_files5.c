#include <stdio.h>
 
int main(void)
{
    char str[128];
 
    FILE *targetFile = fopen("file5target.txt", "w");
    if (targetFile == NULL)
    {
        printf("Ошибка создания файла!\n");
        return -1;
    }
    
    FILE *sourceFile = fopen("file5source.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Ошибка открытия файла!\n");
        if (targetFile != NULL)
        {
            fclose(targetFile);
        }
        return -1;
    }
    
    fgets(str, 127, sourceFile);
    
    printf("%s\n", str);
    fprintf(targetFile, "%s", str);
    fclose(targetFile);
    fclose(sourceFile);
}