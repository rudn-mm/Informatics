#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 2;
    
    float c = (float)a / (float)b; 
    // Явное приведение переменных к типу float
    
    printf("c = %f\n", c);
}