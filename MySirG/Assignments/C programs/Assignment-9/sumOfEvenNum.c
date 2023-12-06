#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, sum=0;
        printf("Enter Nth term: ");
        scanf("%d",&num);
        for (int i = 1; i<=num; i++)
        {   
            if(i%2 == 0)            // similarly for odd (i%2 != 0)
                sum = sum + i;
        }
        printf("The sum of N Even number: %d", sum);
        
        

    printf("\n");
    return 0;
}