#include <stdio.h>

int c; /* Объявление глобальной переменной */

void sum(int a, int b);
void answer(int x);

int main(void)
{
    int x, y;
    x = 5;
    y = 10;
    sum(x, y);
    answer(c);
}

void sum(int a, int b)
{                  
    c = a +b;
}

void answer(int x)
{
    printf("Ответ: %i\n", x);
}