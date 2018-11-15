// Генерация массива случаных значений и сохранение его в файл
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a[100] = {0};
    
    FILE *file = fopen("file9.txt", "w");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return -1;
    }
    
    int n;
    printf("Введите число элементов массива: ");
    scanf("%i", &n);
    
    if (n <= 0 || n > 100)
    {
        printf("Число элементов должно быть от 1 до 100\n");
        n = 0;
        fclose(file);
        return -1;
    }
    
    int q;
    int p;
    printf("Введите нижний и верхний диапазон элементов массива: ");
    scanf("%i%*c%i", &q, &p);
    
    if (q > p)
    {
        int temp = q;
        q = p;
        p = temp;
    }
    
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % (p - q + 1) + q;
        printf("%i\t", a[i]);
        fprintf(file, "%i\n", a[i]);
    }
 
    fclose(file);
    printf("\n");
}