#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptrA = NULL;
    int i = 0, elem;
    char c;
    
    do {
        printf("a[%i]= ", i);
        scanf("%i", &elem);
        
        ptrA = realloc(ptrA, (i + 1) * sizeof(int));
        ptrA[i] = elem;
        i++;
        
        while (getchar() != '\n')
            continue;
        
        printf("Добавить элемент (Y / N)? ");
        c = getchar();
    } while (c == 'y' || c == 'Y');
    
    for (int j = 0; j < i; j++)
        printf("%i\t", ptrA[j]);
    
    free(ptrA);
    printf("\n");
}