#include <stdio.h>

void hanoi(int n, int source_stud, int target_stud, int buffer_stud);

int iters = 0;

int main(void)
{
    int n = 0;
    
    printf("Введите число дисков: ");
    scanf("%i", &n);
    
    printf("Начинаем...\n");
    
    hanoi(n, 1, 3, 2);
    
    printf("Готово. Потребовалось %i итераций.\n", iters);
}


void hanoi(int n, int source_stud, int target_stud, int buffer_stud)
{
    if (n != 0)
    {
        hanoi(n-1, source_stud, buffer_stud, target_stud);
        iters++;
        printf("%i. Петемещаем диск %i со стержня %i на стержень %i\n", iters, n, source_stud, target_stud);
        hanoi(n-1, buffer_stud, target_stud, source_stud);
    }
}
