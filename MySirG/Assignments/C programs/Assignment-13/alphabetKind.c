#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char ch;
        printf("Enter the character: ");
        scanf("%c", &ch);

        switch (ch)
        {
        case 65 ... 90:
            printf("%c is a Upper Case alphabet", ch);
            break;
        case 97 ... 122:
            printf("%c is a Lower Case alphabet", ch);
            break;
        case 48 ... 57:
            printf("%c is a digit", ch);
            break;
                
        default:
        printf("%c is special symbol \n", ch);
            break;
        }
        

    printf("\n");
    return 0;
}