#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j;
        for (i = 1; i <= 4; i++)
        {
            char ch = 'A';
            for (j = 1; j <= 7; j++)
            {
                if(j >= i && j <= 8-i)
                {
                    printf("%c ", ch);
                    ch++;
                }
                else
                    printf("  ");
            }
            printf("\n");
            
        }
        
        

    printf("\n");
    return 0;
}