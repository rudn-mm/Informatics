// Считывание массива случаных значений из файла
#include <stdio.h>

int main(void)
{
    int a[100] = {0};
    
    FILE *file = fopen("file9.txt", "r");
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
}