#include<stdio.h>
void merge_array(int* arr1, int size1, int* arr2, int size2, int* arr);

void merge_array(int* arr1, int size1, int* arr2, int size2, int* arr)
{
    int i;
    for ( i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }

    printf("%d\n", size1+size2);
    for ( i = 0; i < size1+size2; i++)
    {
        arr[i+size1] = arr2[i];       // here i made mistake [i+size] and not i = size1 it will be i = 0 coz we need arr2[0]
    }

    for ( i = 0; i < size1+size2; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr1[3] = {1, 2, 3};
        int size1 = sizeof(arr1)/sizeof(arr1[0]);
        int arr2[5] = {4, 5, 6, 7, 8};
        int size2 = sizeof(arr2)/sizeof(arr2[0]);
        int arr[10];
        
        merge_array(arr1, size1, arr2, size2, arr);

    printf("\n");
    return 0;
}
