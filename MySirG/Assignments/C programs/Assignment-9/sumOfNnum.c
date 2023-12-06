#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, sum=0;
        printf("Enter Nth term: ");
        scanf("%d",&num);
        for (int i = 0; i <= num; i++)
        {
            sum = sum + i;
            
        }
        printf("%d",sum);       // the result should be printed outside the loop
        
        

    printf("\n");
    return 0;
}