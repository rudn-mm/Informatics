#include <stdio.h>

int main(void)
{
    char answer;
    printf("Вы хотите научиться программировать?\n");
    printf("Введите \"Y\" - да, \"N\" - нет: ");
    scanf("%c", &answer);
    if (answer == 'Y')
    {
        printf("Да\n");
    }
    else if (answer == 'N')
    {
        printf("Нет\n");
    }
    else
    {
        printf("Неправильный ответ\n");
    }
}