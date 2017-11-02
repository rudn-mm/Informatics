#include <stdio.h>

int main(void)
{
    char c[5] = {'H', 'e', 'l', 'l', 'o'};
    
    for (int i = 0; i < 5; i++)
        printf("%c", c[i]);
    
    printf("\n");
}