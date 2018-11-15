#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        printf("Число агрументов: %i\n", argc);
        for (int i = 0; i < argc; i++)
        {
            printf("Аргумент %i: %s\n", i+1, argv[i]);
        }
    }
    else
    {
        printf("Аргументы не указаны\n");
    }
    return 0;
}
