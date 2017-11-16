#include <stdio.h>
 
void main() {
    FILE *file;
    char c;
 
    file = fopen("file7.txt", "w");
     
    do {
        c = getchar();
        fprintf(file, "%c", c);
        fprintf(stdout, "%c", c);
        //fflush(file);
    } while(c != 'q'); // можно использовать код клавиши ESC - 27
 
    fclose(file);
}