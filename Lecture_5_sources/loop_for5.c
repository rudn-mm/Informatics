#include <stdio.h>

int main(void)
{
	for (int i=1, j=2; i<=5; i++, j+=2) // цикл с двумя итерационными переменными
	{
		printf("i = %i\tj = %i\n", i, j);
	}
}