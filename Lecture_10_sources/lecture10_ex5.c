#include <stdio.h>

int main(void)
{
    int i;
    int *ptr;

    i = 123;
    ptr = &i;
  
    printf("i = %i = %x\n", i, i); // %x = вывод числа в шестнадцатеричной форме
    printf("Адрес i = %x\n", &i);
    printf("Значение указателя ptr = %x\n", ptr);
    printf("Данные по адресу ptr равны %i = %x\n", *ptr,*ptr);
    printf("Адрес расположения указателя ptr = %x\n", &ptr);
}