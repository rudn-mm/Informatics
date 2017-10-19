#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = rand() % 100; // генерация чисел в диапазоне от 0 до 99
    printf("Число: %i\n", i);
    
    i = rand() % 100 + 1; // генерация чисел в диапазоне от 1 до 100
    printf("Число: %i\n", i);
    
    i = rand() % 5 + 1941; // генерация чисел в диапазоне от 1941 до 1945
    printf("Число: %i\n", i);
}