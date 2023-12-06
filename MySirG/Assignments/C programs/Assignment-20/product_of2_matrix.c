#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, k, sum, a[3][3], b[3][3], c[3][3];
        printf("Enter the element for 1st matrix: \n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
            
        }
        printf("Enter the element for 2nd matrix: \n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &b[i][j]);
            }
            
        }

        // two matrix multiplication process
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                sum = 0;
                for ( k = 0; k < 3; k++)
                {
                    sum += a[i][k] * b[k][j];
                    c[i][j] = sum;
                }
                
            }
            
        }
        printf("\nproduct of two matrix: \n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
            
        }
        

        

    printf("\n");
    return 0;
}