#include <stdio.h>
 
int main(void)
{
    char str[128];
 
    FILE *file = fopen("file2.txt", "r");
    fgets(str, 127, file);
    
    printf("%s\n", str);
    
    fclose(file);
}
