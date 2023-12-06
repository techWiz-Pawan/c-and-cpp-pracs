#include<stdio.h>
void sort_the_array(int arr[], int);

void sort_the_array(int arr[], int l)
{
    
    int temp;
    for (int i = 0; i < l; i++)
    {
        for (int j = i+1; j < l; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    printf("Array in sorted form: ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[100], i, size;
        printf("Enter the size of an array: ");
        scanf("%d", &size);
        printf("Enter the element in an array: ");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        sort_the_array(arr, size);
        

    printf("\n");
    return 0;
}