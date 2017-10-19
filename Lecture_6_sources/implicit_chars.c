#include <stdio.h>

int main(void)
{
    for (int i=65; i<65+26; i++)
	    printf("%c соответствует %i\n", (char)i, i);

/*
    for (int i=65; i<65+26; i++)
	    printf("%c соответствует %i\n", i, i);
*/
/*
    for (char c='A'; c<'Z'; c++)
	    printf("%c соответствует %i\n", c, c);
*/
}