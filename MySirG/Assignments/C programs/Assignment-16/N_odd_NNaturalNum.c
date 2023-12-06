#include<stdio.h>
void First_N_odd_natural_number(int);

void First_N_odd_natural_number(int n)
{
    if(n==0)
        return;
    First_N_odd_natural_number(n - 1);

        if(n%2 != 0)
        printf("%d ", n);    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        First_N_odd_natural_number(num);
        

    printf("\n");
    return 0;
}