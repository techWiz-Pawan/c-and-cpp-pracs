#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i,j;
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= 5; j++)
            {
                if(j <= i)
                    printf("* ");
                else
                   printf("  ");    
            }
            printf("\n");
        }
        

    printf("\n");
    return 0;
}