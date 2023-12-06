#include<stdio.h>

int prime_or_not(int);

int prime_or_not(int n)
{

    if(n <= 1)
        return -1;

    for (int i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            return -1;
        }
    }
    return 0;
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        int check = prime_or_not(num);
        if(check == 0)
            printf("Prime");
        else
            printf("Not prime");
        

    printf("\n");
    return 0;
}