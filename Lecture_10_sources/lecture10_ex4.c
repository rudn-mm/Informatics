#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 100;
    int y = 1;
    
    printf("До:\n");
    printf("x = %i\n", x);
    printf("y = %i\n", y);
    
    swap(x, y);
    
    printf("После:\n");
    printf("x = %i\n", x);
    printf("y = %i\n", y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
