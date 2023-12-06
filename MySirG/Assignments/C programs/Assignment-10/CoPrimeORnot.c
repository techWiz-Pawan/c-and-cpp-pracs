#include<stdio.h>

int main()
{
    printf("Hi Easy\n");


        /* Start your code minere */
        int n1, n2, MIN;
        printf("Enter two number: ");
        scanf("%d%d",&n1, &n2);

        for(MIN = n1<n2?n1:n2; MIN >= 1; MIN--)
        {
            if(n1%MIN == 0 && n2%MIN == 0)
                break;
        }
        if(MIN == 1)            // in co-prime n1 and n2 are only divisible by 1
            printf("%d and %d is a co-prinme number", n1, n2);
        else
            printf("HCF of %d and %d is %d", n1, n2, MIN);

        

        

    printf("\n");
    return 0;
}