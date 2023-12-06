#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[5], i, j, temp;
        printf("Enter the array elements: ");
        for ( i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < 5; i++)
        {
            for (j = i+1; j < 5; j++)
            {
                if(arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                 
            }
            
        }
        printf("Sorted array are: ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }

    printf("\n");
    return 0;
}