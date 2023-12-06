#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if(j <= 6-i)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
            
        }
        
        

    printf("\n");
    return 0;
}