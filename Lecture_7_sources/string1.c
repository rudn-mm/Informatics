#include <stdio.h>

int main(void)
{
    char c[100];
    
    printf("Введите строку: ");
    scanf("%s", c); // Массив передаётся без знака &
    
    printf("Вы ввели: %s\n", c);
}