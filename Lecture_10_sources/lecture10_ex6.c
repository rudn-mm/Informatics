#include <stdio.h>

int main(void)
{
    char str1[50] = {0};
    char str2[50] = {0};
    
    printf("Введите первую строку: ");
    scanf("%s", str1);
    
    while (getchar() != '\n')
        continue;
    
    printf("Введите вторую строку: ");
    scanf("%s", str2);
 
    printf("Значение str1 = %x\n", str1);
    printf("Значение str2 = %x\n", str2);
 
    if (str1 == str2)
    {
        printf("Строки одинаковые\n");
    }
    else
    {
        printf("Строки разные\n");
    }
}
