#include <stdio.h>
#include <math.h>

int main(void)
{
    //int n;
    // Временно назначим n вручную
    int n = 100;

/*    do {
        printf("Введите n от 0 до 100: ");
        scanf("%i", &n);
    } while (n < 0 || n > 101);
*/    
    float b = sqrt(n);
                         
    printf("Результат: %g\n", b);
}