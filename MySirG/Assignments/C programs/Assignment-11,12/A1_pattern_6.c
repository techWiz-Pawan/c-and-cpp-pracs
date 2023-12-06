#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, k;
        for (i = 1; i <=4; i++)
        {
            k=i;
            for (j = 1; j <= 4; j++)
            {
                if(j <= i){
                    printf("%d ", k);
                    k--;
                }
                else
                    printf("  ");
            }
            printf("\n");
            
        }
        
        

    printf("\n");
    return 0;
}