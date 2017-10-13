#include <stdio.h>

int main(void)
{
	int n;
	do {
		printf("Введите число от 0 до 10: ");
		scanf("%i", &n);
  	} while ((n < 0) || (n > 10));

	printf("Вы ввели число %i\n", n);

}
