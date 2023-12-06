#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int a, b, c;
        printf("Enter the coefficient of quadratic equation: ");
        scanf("%d%d%d",&a, &b, &c);

        printf("Your Quadratic equation look : %dx^2 + %dx + %d\n",a,b,c);

        if((b*b) - (4*a*c) > 0)
            printf("Given quadratic equation is real and distinct ");
        if((b*b) - (4*a*c) == 0)
            printf("Given quadratic equation is real and equal ");
        if((b*b) - (4*a*c) < 0)
            printf("Given quadratic equation is imaginary ");

    printf("\n");
    return 0;
}