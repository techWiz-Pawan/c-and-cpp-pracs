#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j;
        for (i = 1; i <= 4; i++)
        {
            for (j = 1; j <= 7; j++)
            {
                if(j >= 5-i && j <= 3+i)
                    printf("* ");
                else
                   printf("  ");    
            }
            printf("\n");
        }
        

    printf("\n");
    return 0;
}