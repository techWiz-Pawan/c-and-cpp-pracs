#include<stdio.h>

void print_all_unique_ELE(int a[], int);

void print_all_unique_ELE(int a[], int l)
{
    int i, j;
    int is_duplicate;
    for ( i = 0; i < l; i++)
    {
        is_duplicate = 0;
        for ( j = 0; j < l; j++)
        {
            if(i != j && a[i] == a[j])
            {
                is_duplicate = 1;
                break;
            }    
        }
        if(!is_duplicate)
            printf("%d ", a[i]);
        
    }
    
    
    
}
int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10] = {1, 2, 2, 4, 1, 5, 9, 1, 5, 1};
        int size = sizeof(arr)/sizeof(arr[0]);

        print_all_unique_ELE(arr, size);
        

    printf("\n");
    return 0;
}