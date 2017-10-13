#include <stdio.h>

int main(void)
{
	int n;
	printf("Введите число повторов: ");
	scanf("%i", &n);

	while (n > 0)
	{
		printf("Привет\n");
		n--;
	}
}