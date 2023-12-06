#include<stdio.h>
#define pi 3.14159

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        float r;
        printf("Enter the radius of circle: ");
        scanf("%f", &r);
        printf("The area of circle: %lf", pi*r*r);
        // Always remember to use proper formate specifier

    printf("\n");
    return 0;
}