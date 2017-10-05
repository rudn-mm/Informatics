#include <stdio.h>

int main(void)
{
    int a = 7;
    float b = 2.5;
    
    float c = a / b; // Неявное приведение переменной а к типу float
    printf("c = %f\n", c);
}
    