#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char ch;
        printf("Enter the alphabet: ");
        scanf("%c", &ch);

        if(ch >= 65 && ch <= 90)
            printf("%c is Uppercase letter", ch);
        else if((ch >= 97 && ch <= 122))
            printf("%c is Lowercase letter", ch);
        else if((ch >= 48 && ch <= 57))
            printf("%c is a digit", ch);
        else    
            printf("%c is a symbol", ch);
        

    printf("\n");
    return 0;
}