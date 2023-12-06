#include<stdio.h>
#include<stdlib.h>  // use this when you are allocating memory

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i, arr1[3], arr2[3], size=3;
        printf("\nEnter elements of array1: ");
        for ( i = 0; i < size; i++)
        {
            scanf("%d", &arr1[i]);
        }
        
        printf("\nEnter elements of array2: ");
        for ( i = 0; i < size; i++)
        {
            scanf("%d", &arr2[i]);
        }

        printf("\nMerging both array: \n");
        int *arr;
        arr = (int*)malloc(2*size * sizeof(int));

        for ( i = 0; i < 2*size; i++)
        {
            arr[i] = arr1[i];
        }

        for ( i = 0; i < 2*size; i++)
        {
            arr[i+size] = arr2[i];
        }

        for ( i = 0; i < 2*size; i++)
        {
            printf("%d  ", arr[i]);
        }
        
        free(arr);
        

    printf("\n");
    return 0;
}
