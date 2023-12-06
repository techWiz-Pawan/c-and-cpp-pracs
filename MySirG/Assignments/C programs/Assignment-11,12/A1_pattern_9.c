#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j;
        char k;
        for (i = 1; i <=5; i++)
        {
            k = 65; 
            for (j = 1; j <= 5; j++)
            {
                if(j >= i){
                    printf("%c ", k+(j-1));
                    // k++;
                    
                }
                else
                    printf("  ");
            }
            printf("\n");
            
        }
        
        

    printf("\n");
    return 0;
}