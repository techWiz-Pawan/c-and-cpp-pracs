#include<stdio.h>
void swap_two_indices(int a[], int, int, int);
void swap_two_indices(int a[], int l, int I1, int I2)
{
    printf("The array before swaping: ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }

    int temp;
    for (int i = 0; i < l; i++)
    {
        if(i == I1 && (i+1) == I2)     // i=2 -> I1=2 | i=3 -> I2=9
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    printf("\nThe array after swaping: ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[5] = {4, 7, 2, 9, 5};
        int size = sizeof(arr)/sizeof(arr[0]);
        int index1, index2;
        printf("Enter two indices: ");
        scanf("%d%d", &index1, &index2);

        swap_two_indices(arr, size, index1, index2);
        

    printf("\n");
    return 0;
}