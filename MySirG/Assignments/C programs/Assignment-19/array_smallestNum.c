#include<stdio.h>
int smallest_Element(int arr[], int);
int smallest_Element(int arr[], int l)
{
    int small = arr[0];
    for (int i = 1; i < l; i++)
    {
        if(arr[i] < small)
        {
            small = arr[i]; 
        }
    }
    return small;
    

}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[] = {2, 4, 6, 3, 1, 5, 9, 7, 8, 10};
        int size = sizeof(arr)/sizeof(arr[0]);
        
        int result = smallest_Element(arr, size);
        printf("The smallest element is %d", result);
        

    printf("\n");
    return 0;
}