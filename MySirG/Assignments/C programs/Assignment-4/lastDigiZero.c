#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, lastDigi;
        printf("Enter a number: ");
        scanf("%d",&num);

        lastDigi = (num/10)*10;
        printf("The result lastDigi = %d",lastDigi);

    printf("\n");
    return 0;
}