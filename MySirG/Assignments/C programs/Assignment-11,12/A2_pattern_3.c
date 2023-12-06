#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, flag;
        for (i = 1; i <= 3; i++)
        {
            flag = 1;
            for (j = 1; j <= 5; j++)
            {
                if(j >= 4-i && j <= 2+i)
                {
                    if(flag)
                        printf("* ");
                    else
                        printf("  ");
                        
                    flag = 1 - flag;    

                }
                    
                else
                   printf("  ");    
            } 
            printf("\n");
        }
        

    printf("\n");
    return 0;
}