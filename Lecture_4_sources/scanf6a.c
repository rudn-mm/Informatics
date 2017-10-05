#include <stdio.h>

void main(void)
{
    char mark;

    printf("Какую оценку по Информатике вы хотите: 2,3,4,5? ");
    scanf("%[2345]", &mark);
    printf("Вы хотите: %c\n", mark);
}