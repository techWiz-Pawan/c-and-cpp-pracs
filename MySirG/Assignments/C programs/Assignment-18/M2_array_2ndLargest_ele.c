#include<stdio.h>
int second_largest(int a[], int);

int second_largest(int a[], int l)
{
    int larg, slarg;

    // if(a[0] > a[1])
    // {
    //     larg = a[0];
    //     slarg = a[1];
    // }
    // else
    // {
    //     larg = a[1];
    //     slarg = a[0];
    // }
    (a[0] > a[1]?(larg=a[0],slarg=a[1]):(larg=a[1],slarg=a[0]));
    for (int i = 2; i < l; i++)
    {
        // if(a[i] > larg)
        // {
        //     slarg = larg;
        //     larg = a[i];
        // }
        
        // else if (a[i] < larg && a[i] > slarg)
        // {
        //     slarg = a[i];
        // }
        (a[i] > larg)?(slarg = larg,larg = a[i]):((a[i] < larg && a[i] > slarg)?slarg = a[i]:slarg);
        
    }
    return slarg;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10] = {6, 3, 9, 7, 8, 2, 1, 5, 4, 10};
        int size;
        size = sizeof(arr)/sizeof(arr[0]);
        printf("Array of size = %d\n", size);

        int result = second_largest(arr, size);
        printf("The second largest element in an array: %d", result);
        

    printf("\n");
    return 0;
}