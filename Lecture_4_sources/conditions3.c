#include <stdio.h>

int main(void)
{
    char answer;
    printf("Вы хотите научиться программировать?\n");
    printf("Введите \"Y\" - да, \"N\" - нет: ");
    scanf("%c", &answer);
    
    switch (answer)
    {
        case 'Y':
        case 'y':
            printf("Да\n");
            break;
        case 'N':
        case 'n':
            printf("Нет\n");
            break;
        default:
            printf("Неправильный ответ\n");
            break;
    }
}