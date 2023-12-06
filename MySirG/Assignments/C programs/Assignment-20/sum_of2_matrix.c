#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, m[3][3], n[3][3], s[3][3];
        printf("Enter the element in 1st matrix: \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                scanf("%d", &m[i][j]);
            }
            
        }
        printf("Enter the element in 2nd matrix: \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                scanf("%d", &n[i][j]);
            }
            
        }

        // printf("The sum of two matrix: ");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                s[i][j] = m[i][j] + n[i][j];
            }
            
        }
        printf("sum of two matrices is: \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d ", s[i][j]);
            }
            printf("\n");
            
        }

    printf("\n");
    return 0;
}