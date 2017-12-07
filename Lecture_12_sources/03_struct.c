#include <stdio.h>
#include <math.h>

int main(void)
{
    struct
    {
        int x;
        int y;
    } A;
    
    float distance;
 
    A.x = 10;
    A.y = 20;

    distance = sqrt(pow(A.x,2) + pow(A.y,2));
 
    printf("Расстояние от начала координат = %f\n", distance);
}