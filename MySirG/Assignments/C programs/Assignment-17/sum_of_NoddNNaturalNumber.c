#include<stdio.h>

int sum_of_NNaturalNumber(int);

int sum_of_NNaturalNumber(int n)
{
    int sum;
    if(n == 0)
        return 0;

    sum = n + sum_of_NNaturalNumber(n - 1);
    return sum;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        int sum = sum_of_NNaturalNumber(num);

        printf("The sum of N natral number: %d", sum);
        

    printf("\n");
    return 0;
}