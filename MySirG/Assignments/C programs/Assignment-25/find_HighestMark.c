#include<stdio.h>
/*  pointer ptr k under pointer store hai so int** use hoga */
int High_mark(int** ptr, int ptr_l, int size[]);

int High_mark(int** ptr, int ptr_l, int size[])
{
    int i, j, max;
    max = ptr[0][0];
    for ( i = 0; i < ptr_l; i++)
    {
        for ( j = 0; j < size[i]; j++)
        {
            if(max < ptr[i][j])
                max = ptr[i][j];
        }
        
    }
    return max;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr1[] = {45, 21, 78, 44, 78, 34, 55, 67};
        int arr2[] = {89, 56, 32, 77, 12, 34};
        int arr3[] = {76, 43, 56, 74, 23};
        int arr4[] = {89, 32, 46, 39, 71, 92, 46, 55, 37, 26};
        int arr5[] = {89, 95, 79, 99, 94, 87, 100};
        
        int size[5] = {8, 6, 5, 10, 7};
        int* ptr[5];
        ptr[0] = arr1;  ptr[1] = arr2;  ptr[2] = arr3;  ptr[3] = arr4;  ptr[4] = arr5;

        int H_mark = High_mark(ptr, 5, size);
        printf("The highest number is %d", H_mark);


    printf("\n");
    return 0;
}
