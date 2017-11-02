#include <stdio.h>

int main(void)
{
    char c[5] = "Hello";
    
    for (int i = 0; i < 5; i++)
        printf("%c", c[i]);
    
    printf("\n");
}