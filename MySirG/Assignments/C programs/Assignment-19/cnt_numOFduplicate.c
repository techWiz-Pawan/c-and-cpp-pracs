#include<stdio.h>
int count_duplicate_ele(int a[], int);
int count_duplicate_ele(int a[], int l)
{
    int i, j, count=0;
    for ( i = 0; i < l; i++)
    {
        for ( j = i+1; j < l; j++)
        {
            if(a[i] == a[j])
                count++;
        }
        
    }
    return count;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10] = {1, 2, 2, 4, 1, 5, 9, 1, 5, 1};
        int size = sizeof(arr)/sizeof(arr[0]);

        int result = count_duplicate_ele(arr, size);
        printf("Number of duplicate element = %d", result);
        

    printf("\n");
    return 0;
}