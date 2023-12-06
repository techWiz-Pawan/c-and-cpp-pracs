#include<stdio.h>
void merging_arrays(int arr1[], int arr2[], int arr[], int, int);
void merging_arrays(int arr1[], int arr2[], int arr[], int l1, int l2)
{
    int i, j;
    for ( i = 0; i < l1; i++)
    {
        arr[i] = arr1[i];
    }
    for ( i = 0; i < l2; i++)
    {
        arr[i+l1] = arr2[i];
    }

    int temp;
    for (i = 0; i < l2; i++)
    {
        for ( j = i+1; j < l2; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    

    printf("the element in array: ");
    for ( i = 0; i < l2; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr1[5] = {5, 4, 1, 2, 3};
        int arr2[5] = {6, 8, 5, 9, 3};
        int arr[10];
        int size = sizeof(arr1)/sizeof(arr1[0]);
        int msize = sizeof(arr)/sizeof(arr[0]); 

        merging_arrays(arr1, arr2, arr, size, msize);
        

    printf("\n");
    return 0;
}