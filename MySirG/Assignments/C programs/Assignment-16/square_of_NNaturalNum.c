#include<stdio.h>
void square_of_NNaturalNumber(int);

void square_of_NNaturalNumber(int n)
{
    if(n == 0)
        return;

    square_of_NNaturalNumber(n - 1);
    printf("%d ", n*n);
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        square_of_NNaturalNumber(num);

    printf("\n");
    return 0;
}