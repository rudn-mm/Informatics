#include <stdio.h>

int main(void)
{
    char c[100];
    
    printf("Введите строку: ");
    scanf("%[0-9a-zA-Z ,.!?]", c); // Массив передаётся без знака &

    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c\n", c[i]);
        i++;
    }
}