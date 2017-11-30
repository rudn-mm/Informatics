#include <stdio.h>

int main(void)
{
    char filename[256];
    
    printf("Введите имя сохраняемого файла: ");
    scanf("%255s", filename);
    
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        printf("Ошибка создания файла!\n");
        return -1;
    }
    
    int num;
    printf("Введите целочисленное значение: ");
    scanf("%i", &num);
    fwrite(&num, sizeof(int), 1, file);
    printf("Значение %i записано в файл %s\n", num, filename);
    fclose(file);
        
    return 0;
}