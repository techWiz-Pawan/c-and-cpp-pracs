#include<stdio.h>

int Next_prime_num(int);

int Next_prime_num(int n)
{
    int i, p;
    for (p = n+1; ; p++)
    {
        
        for (i = 2; i <= p/2; i++)
        {
            if(p%i == 0)
                break;
        }
        if(i > p/2)
            return p;

        
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        int check = Next_prime_num(num);
        printf("%d", check);
        

    printf("\n");
    return 0;
}


    