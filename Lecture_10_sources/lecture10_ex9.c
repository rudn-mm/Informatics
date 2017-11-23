#include <stdio.h>
#include <malloc.h>

// ВНИМАНИЕ!
// ПРИМЕР С ОШИБКАМИ!!!

int main(void)
{
    int *ptrA = NULL;  // указатель на массив
    int n;
    
    printf("Введите размер массива: ");
    scanf("%i", &n);
  
    // Выделение памяти
    ptrA = malloc(n * sizeof(int));
    if (ptrA == NULL)
        return -1;
    
    // Ввод элементов массива
    for (int i = 0; i <= n; i++)
    {
        printf("a[%i] = ", i);
        scanf("%i", &ptrA[i]);
    }
    
    // Вывод элементов массива
    for (int i = 0; i <= n; i++)
        printf("%i\t", ptrA[i]);
    
    printf("\n");
    return 0;
}
       
// Утилита valgrind для поиска утечек памяти
// valgring ./prog_name