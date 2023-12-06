#include<stdio.h>

void prime_numbers(int, int);

void prime_numbers(int n1, int n2)
{
    int i, j;
    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j <n1/2; j++)
        {
            printf("hello");
        }
        
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2;
        printf("Between which two number you need prime number: ");
        scanf("%d%d", &num1, &num2);

        prime_numbers(num1, num2);

    printf("\n");
    return 0;
}