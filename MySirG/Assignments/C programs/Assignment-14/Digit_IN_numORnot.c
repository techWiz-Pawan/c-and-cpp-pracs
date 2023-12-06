#include<stdio.h>

int Find_digit(int, int);
int Find_digit(int n, int d)
{
    int rem;
    for (int i = 1; i <= n; i++)
    {
        rem = n%i;
        if(rem == d)    {
            return 1;
            break;
        }
        n = n/10;

    }
    return 0;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, digit;
        printf("Enter the number: ");
        scanf("%d", &num);

        printf("Enter the targeted digit: ");
        scanf("%d", &digit);

        int check = Find_digit(num, digit);

        if(check == 1)
            printf("%d is present in the given %d", digit, num);
        else
            printf("%d NOT present in the given %d", digit, num);
        

    printf("\n");
    return 0;
}