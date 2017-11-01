#include <stdio.h>
#include <errno.h>
#include <math.h>

int main(void)
{
    int n;
    int rc = 0;
    
    do {
        printf("Введите n: ");
        int rc = scanf("%i", &n);
        if (rc == 0)
        {
            printf("Неправильное значение\nПовторите ввод\n");
        }
    } while (rc != 0);
    
    float b = sqrt(n);
    
    if (errno != 0)
    {
        perror("Status");
        return 1;
    }
                         
    printf("Result is %g\n", b);
    return 0;
}