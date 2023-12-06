#include<stdio.h>
#include <limits.h>
int second_smallest(int a[], int);

int second_smallest(int a[], int l)
{
    int small = INT_MAX, ssmall = INT_MAX;
    if(a[0] < a[1])
    {
        small = a[0];
        ssmall = a[1];
    }
    for (int i = 2; i < l; i++)
    {
        if(a[i] < small)
        {
            ssmall = small;
            small = a[i];
        }
        else if(a[i] > small && a[i] < ssmall)
        {
            ssmall = a[i];
        }
    }
    return ssmall;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10] = {6, 3, 9, 7, 8, 2, 1, 5, 4, 10};
        int size;
        size = sizeof(arr)/sizeof(arr[0]);
        printf("Array of size = %d\n", size);

        int result = second_smallest(arr, size);
        printf("The second smallest number is %d", result);
        

    printf("\n");
    return 0;
}