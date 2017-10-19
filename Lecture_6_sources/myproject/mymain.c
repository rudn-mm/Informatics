#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myfunctions.h"

int main(void)
{
    srand (time(NULL));

    for (int i=0; i < 5; i++)
        printf("%i\t", RandomRange(-5, 5));
    
    printf("\n");
}