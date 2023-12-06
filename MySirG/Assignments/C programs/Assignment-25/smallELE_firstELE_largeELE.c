#include<stdio.h>
int firstELE_to_center(int* arr, int size, int left, int right, int firstELE_index);
int firstELE_to_center(int* arr, int size, int left, int right, int firstELE_index)
{
    while (left < right)
    {
        int temp;
        while (left < right && arr[firstELE_index] < arr[right])
            right--;
        if(left == right)
            break;
        // if above both condition not satisfy then "swaping" 

        temp = arr[firstELE_index];
        arr[firstELE_index] = arr[right];
        arr[right] = temp;
        firstELE_index = right;

        while (left < right && arr[left] <= arr[firstELE_index])
            left++;
        if(left == right)
            break;

        temp = arr[left];
        arr[left] = arr[firstELE_index];
        arr[firstELE_index] = temp;
        firstELE_index = left;

    }
    printf("\nThe element in array is now: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    
    return firstELE_index;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10] = {45, 98, 12, 6, 34, 45, 78, 31, 67, 2};
        int size = sizeof(arr)/sizeof(arr[0]);
        int left = 0;
        int right = size-1;
        int firstELE_index = 0;

        printf("\nThe element in array before operation: \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d  ", arr[i]);
        }

        int first_element_index = firstELE_to_center(arr, size, left, right, firstELE_index);
        printf("\nThe element is now at %d", first_element_index);

    printf("\n");
    return 0;
}
