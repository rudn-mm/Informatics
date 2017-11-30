#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char word[] = "coffee";
    
    printf("Я загадал английское слово. Попробуй его отгадать ;)\n");
    int num = strlen(word);
    printf("Слово состоит из %i букв\n", num);
    printf("Назови пять букв, а потом предложи слово...\n");
    
    for (int i = 1; i <= 5; i++)
    {
        char c;
        printf("Буква %i: ", i);
        scanf("%c", &c);
        
        char *foundChar = NULL;
        foundChar = strchr(word, (int)c);
        if (foundChar != NULL)
        {
            printf("Буква \"%c\" есть в этом слове!\n", c); 
        } else {
            printf("Такой буквы в этом слове нет!\n");
        }
        
        while (getchar() != '\n')
            continue;
    }
    
    printf("Теперь попробуй угадать слово: ");
    char *userWord = malloc(256);
    scanf("%s", userWord);
    
    if (strcmp(word, userWord) == 0)
    {
        printf("Поздравляю, слово угадано правильно!\n");
    } else {
        printf("Нет, это неправильное слово...\n");
    }
    
    free(userWord);
    return 0;
}