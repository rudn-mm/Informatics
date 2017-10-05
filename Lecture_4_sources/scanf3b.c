#include <stdio.h>

int main(void)
{
    unsigned int i;

    printf("Введите целое положительное число от 0 до 99: ");
    scanf("%2u", &i);
    printf("Вы ввели: %u\n", i);
}