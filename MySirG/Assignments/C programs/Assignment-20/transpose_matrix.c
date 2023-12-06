#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, j, arr[3][3];
        printf("Enter the matrix elements: \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                scanf("%d", &arr[i][j]);
            }
            
        }

        printf("Matrix in transpose form: \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
        

    printf("\n");
    return 0;
}