#include<stdio.h>
// all prime factor of given number

void Find_all_prime_factor(int);
void Find_all_prime_factor(int n)
{
    int i=2;

    while(n > 1)     {
        while(n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
        i++;

    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);

        Find_all_prime_factor(num);
        

    printf("\n");
    return 0;
}