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
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is vowel", ch);
            /* code */
            break;
        
        default:
            printf("%c is consonent", ch);
            break;
        }
        

    printf("\n");
    return 0;
}