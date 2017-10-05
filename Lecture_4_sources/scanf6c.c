#include <stdio.h>

void main(void)
{
    char mark;

    printf("Какую оценку по Информатике вы хотите: A,B,C,D,E? ");
    scanf("%[abcdeABCDE]", &mark);
    printf("Вы хотите: %c\n", mark);
}