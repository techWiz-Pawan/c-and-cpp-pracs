#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int n1, n2, n3;
        float Average;
        printf("Enter three number: ");
        scanf("%d%d%d",&n1, &n2, &n3);

        Average = (n1+n2+n3)/3;
        printf("The average of given number: %f", Average);

    printf("\n");
    return 0;
}