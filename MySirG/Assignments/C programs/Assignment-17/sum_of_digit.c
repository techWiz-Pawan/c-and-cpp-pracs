#include<stdio.h>
int sum_of_digit(int);

int sum_of_digit(int n)
{
    if(n == 0)
        return 0;
    return (n%10) + sum_of_digit(n/10);
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        int sum = sum_of_digit(num);

        printf("sum of digits of a given number is %d", sum);
        

    printf("\n");
    return 0;
}