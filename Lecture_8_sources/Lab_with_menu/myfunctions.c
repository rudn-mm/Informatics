#include "myfunctions.h"

int fill_array(int a[])
{
    int n;
    printf("Введите число элементов массива: ");
    scanf("%i", &n);
    
    if (n <= 0 || n > 100)
    {
        printf("Число элементов должно быть от 1 до 100\n");
        n = 0;
        return n;
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
    
    return n;
}

int find_max(int a[], int n)
{
    int max = 0;
    
    for (int i = 1; i < n; i++)
        if (a[i] > a[max])
        {
            max = i;
        }
        
    return max;
}


int find_min(int a[], int n)
{
    // TODO
}


int find_element(int a[], int n, int value)
{
    // TODO
}