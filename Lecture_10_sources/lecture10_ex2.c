#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int a[100] = {0};
    
    int n;
    printf("Введите число элементов массива: ");
    scanf("%i", &n);
    
    if (n <= 0 || n > 100)
    {
        printf("Число элементов должно быть от 1 до 100\n");
        n = 0;
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
    }
    printf("\n");
    
    int tmp = a[0];
    a[0] = a[n-1];
    a[n-1] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%i\t", a[i]);
    }
    printf("\n");
}