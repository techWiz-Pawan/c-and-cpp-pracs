#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[100],arrcpy[100], i, size;
        printf("Enter the size of an array: ");
        scanf("%d", &size);
        printf("Enter the elements in an array: ");
        for ( i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("The element in array1: \n");
        for ( i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        // copying element in an array
        for ( i = 0; i < size; i++)
        {
            arrcpy[i] = arr[i];
        }
        
        printf("\nThe element in array2: \n");
        for ( i = 0; i < size; i++)
        {
            printf("%d ", arrcpy[i]);
        }
        

    printf("\n");
    return 0;
}