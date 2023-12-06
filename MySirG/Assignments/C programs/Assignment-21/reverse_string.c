#include<stdio.h>
#include<string.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i;
        char str[10] = "easy";
        printf("Given string: %s\n", str);
        int len = strlen(str);
        printf("length of given string: %d\n", len);

        for (i = len-1; i>=0; i--)
        {
            printf("%c", str[i]);
        }
        
        

    printf("\n");
    return 0;
}