#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1 = -1, num2 = 1, num, next_term;
        printf("Enter the Nth term: ");
        scanf("%d",&num);

        for (int i = 0; i <= num; i++)
        {
            next_term = num1 + num2;
            num1 = num2;
            num2 = next_term;

            printf("%d  ",next_term);
        }
        
        
        

    printf("\n");
    return 0;
}