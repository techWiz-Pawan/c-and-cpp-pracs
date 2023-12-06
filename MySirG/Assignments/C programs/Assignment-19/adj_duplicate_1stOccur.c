#include<stdio.h>
void find_first_adj_duplicate(int a[], int);
void find_first_adj_duplicate(int a[], int l)
{
    int i, j;
    for ( i = 0; i < l; i++)
    {
        for (j = i+1; j < l; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d is the first occured element in the given matrix.\n", a[i]);
                return;
            }
            

        }
        
    }
    printf("No duplicate element found in the given array.");
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10] = {5, 4, 3, 3, 1, 2, 2, 7, 6, 9};
        int size = sizeof(arr)/sizeof(arr[0]);

        find_first_adj_duplicate(arr, size);
        
    printf("\n");
    return 0;
}