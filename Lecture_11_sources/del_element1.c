#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int *a = NULL;
    int n;
    
    printf("Введите размер массива: ");
    scanf("%i", &n);
  
    a = malloc(n * sizeof(int));
    if (a == NULL)
        return -1;
    
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
    
    int element;
    printf("Введите индекс элемента, который нужно удалить из массива: ");
    scanf("%i", &element);

    if (element >= n || element < 0)
    {
        printf("Вы ввели неправильный индекс\n");
        free(a);
        return -1;
    }
    
    if (element != n-1)
    {
        for (int i = element; i < (n-1); i++)
        {
            a[i] = a[i+1];
        }
    }
    
    a[n-1] = 0;
    n = n - 1;
    // Выделенной памяти под массив при этом меньше не стало!
    
    for (int i = 0; i < n; i++)
    {
        printf("%i\t", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}