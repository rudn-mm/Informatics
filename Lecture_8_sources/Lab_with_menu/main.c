#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myfunctions.h"

int chooseAnAction();
bool askToConfirm();

int main(void)
{
    int a[100] = {0}; // Массив инициализированный 0
    int n = 0;        // Переменная для размерности массива
    
    bool bRestart = true; 
    do 
    {
        int action = chooseAnAction();
        int max;
        switch (action)
        {
            case 1: 
                n = fill_array(a);
                break;
            case 2:
                if (n > 0)
                {
                    int max = find_max(a, n);
                    printf("Максимальный элемент массива %i на позиции %i\n", a[max], max);
                }
                break;
            case 3: 
                // TODO
                break;
            case 4: 
                // TODO
                break;
            case 0:
                bRestart = askToConfirm();
                break;
        }

    } while (bRestart);
    
    return 0;
}


int chooseAnAction()
{
    printf("Выберите действие: \n");
    printf("0. Завершить программу\n");
    printf("1. Сгенерировать массив\n");
    printf("2. Найти максимальный элемент\n");
    printf("3. Найти минимальный элемент\n");
    printf("4. Найти заданный элемент\n");
    
    
    int action;
    scanf("%d", &action);
    
    if (action >= 0 && action <= 4)
    {
        return action;
    }
    else
    {
        return chooseAnAction();
    }
}

bool askToConfirm()
{
    while(fgetc(stdin) != '\n')
        continue;
    
    printf("Завершить программу? (Y - да / N - нет)\n");
    
    char answer;
    scanf("%c", &answer);
    
    if (answer == 'Y' || answer == 'y')
    {
        return false;
    }
    else if (answer == 'N' || answer == 'n')
    {
        return true;
    }
    else
    {
        return askToConfirm();
    }
}