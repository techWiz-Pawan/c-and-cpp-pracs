#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char ch; int code;
        printf("Enter a character: ");
        scanf("%c", &ch);

        printf("The ASCII code for character %c is %d", ch, ch);
        printf("\n");
        
        printf("Enter an ASCII code: ");
        scanf("%d", &code);

        printf("The character for ASCII code %d is %c", code, ch);    


    printf("\n");
    return 0;
}