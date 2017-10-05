#include <stdio.h>

int main(void)
{
    int i;
    
    printf("Введите целое число: ");
    scanf("%i",&i);
    
    if (i > 0)
    {
        printf("Введённое число положительное\n");
    } else if (i < 0) {
        printf("Введённое число отрицательное\n");
    } else {
        printf("Введённое число равно нулю\n");
    }
}