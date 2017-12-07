#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Pascal Style Types
typedef int integer;
typedef float real;
typedef char* string;

integer main(integer argc, string argv[])
{
    if (argc > 1)
    {
        string str = argv[1];
        for (integer i = 0; i < strlen(str); i++)
            str[i] = toupper(str[i]);
        printf("%s\n", str);
    }
    return 0;
}