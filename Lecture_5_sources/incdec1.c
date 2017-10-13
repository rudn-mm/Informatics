#include <stdio.h>

int main(void)
{
	int i = 0;
	
	i++;
	printf("i is %i\n", i);
	
	i++;
	printf("i is %i\n", i);
	
	i--;
	i--;
	i--;
	
	printf("i is %i\n", i);
}