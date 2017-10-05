#include <stdio.h>

int main(void)
{
    int i;
    
    printf("Введите целое число: ");
    scanf("%i",&i);
    
    if (i%2 > 0)
    {
        printf("Введённое число нечётное\n");
    } else {
        printf("Введённое число чётное\n");
    }
}