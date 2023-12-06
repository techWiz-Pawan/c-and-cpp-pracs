#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, count=0;
        printf("Enter the number: ");
        scanf("%d",&num);
        for (int i = 1; i <= num; i++)
        {
            if (num%i == 0)
                count++;    
        }
        if(count == 2)
            printf("Prime");
        else
            printf("NOT Prime");
        
        

    printf("\n");
    return 0;
}