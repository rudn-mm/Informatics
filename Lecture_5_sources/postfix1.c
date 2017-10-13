#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 2;
	int m = 5;
	int a, b;
	
	a = pow(m, i++);
	b = pow(m, i);
	
	printf("a равно %i\nb равно %i\n", a, b);
}