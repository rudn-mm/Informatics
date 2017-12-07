#include <stdio.h>
#include <math.h>

struct point_t
{
    int x;
    int y;
};

typedef struct point_t Point;

int main(void)
{
    Point A;
    Point B = {0, 0};
    float distance;
 
    A.x = 10;
    A.y = 20;
 
    distance = sqrt(pow(B.x-A.x,2) + pow(B.y-A.y,2));
 
    printf("Расстояние между точками = %f\n", distance);
}