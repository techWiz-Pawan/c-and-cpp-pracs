#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, count=0;
        printf("Enter the number: ");
        scanf("%d",&num);
        while (num != 0)
        {
            num = num/10;
            count++;
        }
        
        printf("Number of digit: %d",count);
        
        

    printf("\n");
    return 0;
}