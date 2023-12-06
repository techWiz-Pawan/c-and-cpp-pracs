#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int a, b, c;
        printf("Enter the sides of a triangle: ");
        scanf("%d%d%d", &a, &b, &c);

        if((a+b) > c && (a+c) > b && (c+b) > a)
            printf("Yes you are a triangle");
        else
            printf("NO you are NOT a triangle");
        

    printf("\n");
    return 0;
}