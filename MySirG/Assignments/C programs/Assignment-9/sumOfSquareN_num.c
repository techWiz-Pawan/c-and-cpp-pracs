#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, sqr, sum=0;
        printf("Enter Nth term: ");
        scanf("%d",&num);

        for (int i = 1; i <= num; i++)
        {
            sqr = i*i;          // for sum of cube --> cube = i*i*i
            sum = sum + sqr;
        }
        printf("Sum of square: %d", sum);
        
        

    printf("\n");
    return 0;
}