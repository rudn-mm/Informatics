//Просуммировать N членов ряда (1 + 1/2 + 1/3 + 1/4 + … 1/n )
#include <stdio.h>

int main(void)
{
	int n;
	do {
		printf("Введите число от 1 до 10: ");
		scanf("%i", &n);
  	} while ((n < 1) || (n > 10));

	float sum = 0;
	int i = 1;
	do {
		sum += 1/(float)i;
		i++;
	} while (i <= n);

	printf("Сумма ряда = %f\n", sum);
}