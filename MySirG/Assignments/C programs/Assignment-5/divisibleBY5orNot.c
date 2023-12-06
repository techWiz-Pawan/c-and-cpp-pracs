#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d",&num);

        if(num % 5 == 0)
            printf("Given number is divisible by 5");
        else
            printf("Given number is NOT divisible by 5");

    printf("\n");
    return 0;
}