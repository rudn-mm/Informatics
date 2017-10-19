#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomRange (int random_min, int random_max);

int main(void)
{
    srand (time(NULL));

    for (int i=0; i < 5; i++)
        printf("%i\t", RandomRange(-5, 5));
    
    printf("\n");
}

int RandomRange (int random_min, int random_max)  
{  
    if (random_min > random_max)
        return 0;

    return rand() % (random_max - random_min + 1) + random_min;
}