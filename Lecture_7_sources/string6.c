#include <stdio.h>

int main(void)
{
    char c[100];
    
    printf("Введите строку: ");
    scanf("%[0-9a-zA-Z ,.!?]", c); // Массив передаётся без знака &

    int i = 0;
    while (c[i] != '\0')
    {
        if (c[i] >= 97 && c[i] < 97 + 26)
        {
            c[i] -= 32;
        }
        i++;
    }
    printf("%s\n", c);
}