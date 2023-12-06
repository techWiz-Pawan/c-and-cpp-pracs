#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char* str;
        int initialSize = 10;
        int currentLength = 0;

        str = (char*)malloc(initialSize * sizeof(char));

        if(str == NULL)
        {
            printf("Memory allocation FAILED!");
            return 1;
        }

        printf("Enter Text: ");
        int c;
        while((c = getchar()) != '\n' && c != EOF)  // if (c = getchar()) == 13 i.e. '\n'
        {
            if(currentLength == initialSize - 1)
            {
                initialSize *= 2; 
                str = (char*)realloc(str, initialSize * sizeof(char));

                if(str == NULL)
                {
                    printf("Memory allocation FAILED!");
                    return 1;
                }
            }

            str[currentLength++] = (char)c;     // typecasting of c
        }
        str[currentLength] = '\0';

        printf("You Entered text: %s", str);
        free(str);

    printf("\n");
    return 0;
}
