#include <stdio.h>

int main(void)
{
	int q, p;
	
	printf("Введите нижнюю границу диапазона: ");
	scanf("%i", &q);
	
	printf("Введите верхнюю границу диапазона: ");
	scanf("%i", &p);
	
	for (int i=q; i<=p; i++) // цикл для переменной i от q до p с шагом 1
	{
		printf("%i\t", i);
	}
	
	printf("\n");
}