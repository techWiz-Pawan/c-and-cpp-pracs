#include<stdio.h>
void A2_pattern_4(int);
void A2_pattern_4(int line)
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, k;
        for (i = 1; i <= line; i++)
        {
            k=1;
            for (j = 1; j <= 2*line-1; j++)
            {
                if(j >= line+1-i && j <= line-1+i)
                {
                    printf("%d ",k);
                    j < 4? k++:k--;
                }
                    
                else
                    printf("  ");
            } 
            printf("\n");
        }
        

    printf("\n");
    
}

int main()
{
    // 2:33:25
    A2_pattern_4(4);

    return 0;
}