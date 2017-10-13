#include <stdio.h>

int main(void)
{
	int q, p;
	
	printf("Введите нижнюю границу диапазона: ");
	scanf("%i", &q);
	
	printf("Введите верхнюю границу диапазона: ");
	scanf("%i", &p);
	
	for (; q<=p; ) // цикл для переменной q от q до p
	{
		printf("%i\t", q);
		q++;
	}
	
	printf("\n");
}