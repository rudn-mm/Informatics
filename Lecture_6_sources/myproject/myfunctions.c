#include <stdlib.h>

int RandomRange (int random_min, int random_max)  
{  
    if (random_min > random_max)
        return 0;

    return rand() % (random_max - random_min + 1) + random_min;
}