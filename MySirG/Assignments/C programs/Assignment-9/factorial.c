#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, prod=1;
        printf("Enter Nth term: ");
        scanf("%d",&num);

        for (int i = 1; i <= num; i++)
        {
            prod *= i; 
        }
        printf("The factorial of %d is %d", num, prod);
        
        

    printf("\n");
    return 0;
}