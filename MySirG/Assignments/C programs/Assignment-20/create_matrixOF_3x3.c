#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, m[3][3];
        printf("Enter the element in matrix: ");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                scanf("%d", &m[i][j]);
            }
            
        }
        printf("The output of given matrix: \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
            
        }
        
        

    printf("\n");
    return 0;
}