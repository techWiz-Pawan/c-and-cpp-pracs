#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        float dollerAmt, INR;
        printf("Enter the amount in $: ");
        scanf("%f",&dollerAmt);

        INR = dollerAmt * 82.28;
        printf("The amount in rupees: %0.2f",INR);

    printf("\n");
    return 0;
}