#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    printf("Введите число элементов массива: ");
    scanf("%i", &n);
    
    int a[n]; // Объявляем целочисленный массив размерностью n
    
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 1;
        printf("%i\t", a[i]);
    }
    printf("\n");
    
    int pos = 0;
    int max = 0;
    
    for (int i = 0; i < n; i++)
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
        
    printf("Максимальный элемент массива - %i на позиции %i\n", max, pos+1);
}