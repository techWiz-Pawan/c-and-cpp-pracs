#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[10] = "easy";

        printf("Your string is : %s\n\n", str);

        printf("Given string in uppercase: ");
        for (int i = 0; str[i]; i++)
        {
            printf("%c", str[i]-32);            // for lowercase str[i] + 32;
        }
        
        

    printf("\n");
    return 0;
}