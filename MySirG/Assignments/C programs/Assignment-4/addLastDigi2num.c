#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, digit, result;
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Enter a digit: ");
        scanf("%d",&digit);

        result = (num*10)+digit;
        printf("The resulting number: %d",result);

    printf("\n");
    return 0;
}