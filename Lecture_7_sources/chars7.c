#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c[5] = "Hello";
    
    int n = sizeof(c)/sizeof(char);
    printf("Размер массива: %i\n", n);
    
    for (int i = 0; i < n; i++)
    {
        c[i] = toupper(c[i]);
    }
    
    printf("%s\n", c);
}