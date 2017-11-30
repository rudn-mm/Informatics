#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char filename[256];
    int n = 10;
    
    printf("Введите имя открываемого файла: ");
    scanf("%255s", filename);

    FILE *file = fopen(filename, "r+b");
    if (file == NULL)
    {
        printf("Файл не найден\nБудет создан новый файл\n");
        file = fopen(filename, "w+b");
        if (file == NULL)
        {
            printf("Ошибка создания файла!\n");
            return -1;
        }
        
        int value = 0;
        for (int i = 0; i < n; i++)
        {
            fwrite(&value, sizeof(int), 1, file);
        }
        
        printf("Файл создан и заполнен нулевыми значениями\n");
    }
        
    do {
        fseek(file, 0, SEEK_SET);
        
        for (int i = 0; i < n; i++)
        {
            int value;
            fread(&value, sizeof(int), 1, file);
            printf("%i\t", value);
        }
        printf("\n");
        
        int pos;
        printf("Введите позицию записи [0..9]: ");
        scanf("%d", &pos);
        if (pos < 0 || pos >= n)
        {
            break;
        }
        
        while(fgetc(stdin) != '\n')
            continue;
        
        int value;
        fseek(file, pos*sizeof(int), SEEK_SET);
        fpos_t cur_pos;
        fgetpos(file, &cur_pos);
        
        fread(&value, sizeof(int), 1, file);
        printf("Текущее значение: %i\nИзменить значение? (Y / N): ", value);

        char answer;
        scanf("%c", &answer);
    
        if (answer == 'Y' || answer == 'y')
        {
            printf("Введите новое значение: ");
            scanf("%i", &value);
            
            fsetpos(file, &cur_pos);
            //fseek(file, pos*sizeof(int), SEEK_SET);
            
            fwrite(&value, sizeof(int), 1, file);
        }    
        
    } while(true);
 
    fclose(file);
    return 0;
}