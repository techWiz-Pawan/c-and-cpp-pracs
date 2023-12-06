#include<stdio.h>

int factorial(int);

int factorial(int n)
{
    if(n == 1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, fact;
        printf("Enter the number: ");
        scanf("%d", &num);

        fact = factorial(num);
        printf("The factorial of a given number is : %d", fact);
        

    printf("\n");
    return 0;
}