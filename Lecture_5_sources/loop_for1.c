#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;
	
	printf("Введите n: ");
	scanf("%i", &n);
	
	for (int i=1; i<=n; i++) // цикл для переменной i от 1 до n с шагом 1
	{
		sum += i;
	}
	
	printf("Сумма = %i\n", sum);
}