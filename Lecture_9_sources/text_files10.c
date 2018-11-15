#include <stdio.h>

int main(void)
{
    int a[100] = {0};
    char filename[256];
    
    printf("Введите имя открываемого файла: ");
    scanf("%255s", filename);
    
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return -1;
    }
    
    int n = 0;
    
    while (!feof(file))
    {
        fscanf(file, "%i\n", &a[n]);
        printf("%i\t", a[n]);
        n++;
    }
    
    fclose(file);
    
    printf("\nЧисло элементов массива: %i\n", n);
    while(fgetc(stdin) != '\n')
        continue;
        
    printf("Записать результат в файл? (Y / N): ");
    
    char answer;
    scanf("%c", &answer);
    
    if (answer == 'Y' || answer == 'y')
    {
        printf("Введите имя сохраняемого файла: ");
        scanf("%255s", filename);
    
        file = fopen(filename, "w");
        if (file == NULL)
        {
            printf("Ошибка создания файла!\n");
            return -1;
        }
        
        fprintf(file, "Число элементов массива: %i\n", n);
        
        fclose(file);
    }
    else if (answer == 'N' || answer == 'n')
    {
        return 0;
    }
    else
    {
        return -1;
    }
    
    return 0;
}