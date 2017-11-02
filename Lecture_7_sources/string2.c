#include <stdio.h>

int main(void)
{
    char c[100];
    
    printf("Введите строку: ");
    scanf("%[0-9a-zA-Z ,.!?]", c); // Массив передаётся без знака &
    
    printf("Вы ввели: %s\n", c);
}