#include <stdio.h>

int main(void)
{
	int n;
	printf("Введите число повторов: ");
	scanf("%i", &n);

	int i = 0;

	while (i < n)
	{
		printf("Привет\n");
		i++;
	}
}