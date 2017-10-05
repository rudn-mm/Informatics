#include <stdio.h>

int main(void)
{
    unsigned int weekday, weekend;
    printf("Введите день недели: ");
    scanf("%u", &weekday);
    switch (weekday)
    {
        case 1 ... 5:
            weekend = 0;
            break;
        case 6 ... 7:
            weekend = 1;
            break;
    }
    int wake_up_time = weekend == 1 ? 10 : 8;
    printf("Ставим будильник на %i\n", wake_up_time);
}