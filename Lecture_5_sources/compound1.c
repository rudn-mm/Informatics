#include <stdio.h>

int main(void)
{
	int m = 3;
	int n = 2;
	
	m += n;
	printf("m += n is %i\n", m);
	
	m -= n;
	printf("m -= n is %i\n", m);
	
	m *= n;
	printf("m *= n is %i\n", m);
	
	m /= n;
	printf("m /= n is %i\n", m);
	
	m %= n;
	printf("m %%= n is %i\n", m);
}