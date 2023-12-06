#include<stdio.h>
void Rev_odd_natural_number(int);

void Rev_odd_natural_number(n)
{
    if(n <= 0)
        return;
    if(n%2 != 0)
        printf("%d ", n);
    Rev_odd_natural_number(n-1);
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        Rev_odd_natural_number(num);
        

    printf("\n");
    return 0;
}

// similarly for even number