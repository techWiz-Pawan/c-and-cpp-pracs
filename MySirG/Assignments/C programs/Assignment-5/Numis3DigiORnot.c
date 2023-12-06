#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter the number: ");
        scanf("%d",&num);

        if(num >= 100 && num < 1000)
            printf("Given number is 3 Digit number");
        else
            printf("Given number is NOT a 3 Digit number");


    printf("\n");
    return 0;
}