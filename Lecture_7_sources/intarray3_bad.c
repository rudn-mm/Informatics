#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FindMaxElement(int arr[]);

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
    
    int max = FindMaxElement(a);
    
    printf("Максимальный элемент массива - %i\n", max);
}    
 
 
int FindMaxElement(int arr[])
{
    int max = 0;
    int n = sizeof(arr)/sizeof(int);
    
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    return max;
}