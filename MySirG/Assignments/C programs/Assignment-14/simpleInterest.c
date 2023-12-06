#include<stdio.h>

float simple_interest(int, float, int);

float simple_interest(int p, float r, int t)
{
    return (p*r*t)/100;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int P, T;
        float S_I, R;
        printf("Enter principal amount: ");
        scanf("%d", &P);
        printf("Enter interest rate per year: ");
        scanf("%f", &R);
        printf("Enter in a year: ");
        scanf("%d", &T);

        S_I = simple_interest(P, R, T);

        printf("simple interest for given PRT is %f", S_I);
        

    printf("\n");
    return 0;
}