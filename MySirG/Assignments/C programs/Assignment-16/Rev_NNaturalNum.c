#include<stdio.h>

void Rev_N_natural_number(int);

void Rev_N_natural_number(int n)
{
    if(n <= 0)
        return;
    // printf("%d ", n);                // -->  to print in reverse
    Rev_N_natural_number(n-1);
    // printf("%d ", n);               // --> to print normal N number
}


int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        Rev_N_natural_number(num);
        

    printf("\n");
    return 0;
}