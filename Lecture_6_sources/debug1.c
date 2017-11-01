//debug1.c
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m;
    
    for (int i=0; i<=10; i++)
    {
        m = 1/sqrt(i);
        printf("1/sqrt(%i) = %i\n", i, m);
    }
}