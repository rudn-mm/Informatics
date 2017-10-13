#include <stdio.h>

int main(void)
{
	int q, p;
	
	printf("Введите нижнюю границу диапазона: ");
	scanf("%i", &q);
	
	printf("Введите верхнюю границу диапазона: ");
	scanf("%i", &p);
	
	for (; q<=p; q++) // цикл для переменной q от q до p с шагом 1
	{
		printf("%i\t", q);
	}
	
	printf("\n");
}