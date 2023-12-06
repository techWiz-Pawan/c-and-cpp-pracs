#include<stdio.h>


int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, sum = 0;
        do
        {
            printf("Enter a number: ");
            scanf("%d", &num);
            sum = sum + num;
            printf("Total sum so far: %d\n", sum);
        } while (num != 0);

        printf("Total sum done: %d", sum);
        

    printf("\n");
    return 0;
}