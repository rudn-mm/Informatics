#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 2;
	int m = 5;
	int a;
	
	a = pow(m, --i);
	
	printf("a is %i\n", a);
}