// Вывести матрицу 5х5 из случайных чисел
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%i\t", rand()%10);
		}

		printf("\n");
	}
}