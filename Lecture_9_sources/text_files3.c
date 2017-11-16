#include <stdio.h>
 
int main(void)
{
    char str[128];
 
    FILE *file = fopen("file3.txt", "a");
    fprintf(file, "Hello ");
    
    freopen("file3.txt", "r", file);
    fgets(str, 127, file);
    printf("%s\n", str);
    
    fclose(file);
}