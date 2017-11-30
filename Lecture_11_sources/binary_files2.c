#include <stdio.h>

int main(void)
{
    char filename[256];
    
    printf("Введите имя открываемого файла: ");
    scanf("%255s", filename);
    
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return -1;
    }
    
    int num;
    fread(&num, sizeof(int), 1, file);
    
    printf("В файле %s записано значение: %i\n", filename, num);
 
    fclose(file);
        
    return 0;
}