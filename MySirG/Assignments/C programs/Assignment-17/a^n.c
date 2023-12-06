#include<stdio.h>
int a_raise_to_n(int, int);

int a_raise_to_n(int a, int n)
{   
    if(n == 0)
        return 1;
    return a * a_raise_to_n(a, n-1);  
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int base, power;
        printf("Enter the base of a number: ");
        scanf("%d", &base);
        printf("Enter the power of a number: ");
        scanf("%d", &power);

        int result = a_raise_to_n(base, power);
        printf("The ans for %d raise to %d is : %d", base, power, result);
        

    printf("\n");
    return 0;
}