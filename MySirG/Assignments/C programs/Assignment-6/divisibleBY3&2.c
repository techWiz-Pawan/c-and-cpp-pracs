#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 3 == 0 && num % 2 == 0)
            printf("you number is divisible by 3 and 2");
        else if (num % 3 == 0)
            printf("Your number is only divisible by 3");
        else if (num % 2 == 0)
            printf("Your number is only divisible by 2");
        else
            printf("you number is NOT divisible by 3 and 2");

    printf("\n");
    return 0;
}