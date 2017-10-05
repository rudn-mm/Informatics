#include <stdio.h>

void main(void)
{
    char mark;
    printf("Какую оценку по Информатике вы хотите: 2,3,4,5? ");
    scanf("%[2345]", &mark);
    switch (mark)
    {
        case '5':
            printf("Вы хотите оценку Отлично!\n");
            break;
        case '4':
            printf("Вы хотите оценку Хорошо!\n");
            break;
        default:
            printf("Надо стремиться к большему!\n");
    }
}