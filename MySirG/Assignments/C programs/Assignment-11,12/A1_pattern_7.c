#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, k;
        for (i = 1; i <= 5; i++)
        {
            k = 'A';
            for (j = 1; j <= 5; j++)
            {
                if (j >= i)
                {
                    printf("%c ", k);
                    k++;
                }
                else
                    printf("  ");
                
            }
            printf("\n");
            
        }
        
        

    printf("\n");
    return 0;
}