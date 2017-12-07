#include <stdio.h>
#include <math.h>

struct point_t
{
    int x;
    int y;
};
 
int main(void)
{
    struct point_t A;
    struct point_t B;
    float distance;
 
    A.x = 10;
    A.y = 20;
    
    B.x = 0;
    B.y = 0;
 
    distance = sqrt(pow(B.x-A.x,2) + pow(B.y-A.y,2));
 
    printf("Расстояние между точками = %f\n", distance);
}