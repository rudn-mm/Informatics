#include <stdio.h>

int main(void)
{
	int n;
	printf("Введите число: ");
	scanf("%i", &n);
	
	int bitAmount = 1;
	int maxNum = 2;

	while (n > maxNum-1)
	{
		maxNum *= 2;
		bitAmount++;
	}

	printf("Для сохранения числа %i нужно %i бит\n", n, bitAmount);
}