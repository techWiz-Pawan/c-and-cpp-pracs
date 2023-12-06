#include<stdio.h>

void right_shift(int a[], int l, int n);
void left_shift(int a[], int l, int n);

void right_shift(int a[], int l, int n)
{
    int i;
    while(n)
    {
        int temp = a[l-1];
        for (i = l-2; i >= 0; i--)
        {
            a[i+1] = a[i];
        }
        a[0] = temp;
        n--;
    }

    for (i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    
}

void left_shift(int a[], int l, int n)
{
    int i;
    while(n)
    {
        
        int temp = a[0];
        for (i = 1; i < 5; i++)
        {
            a[i-1] = a[i];
        }
        a[l-1] = temp;

        n--;
    }

    for (i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int pos, dir;
        int arr[5] = {4, 7, 2, 9, 5};
        int size = sizeof(arr)/sizeof(arr[0]);
        printf("Enter the nth position: ");
        scanf("%d", &pos);
        printf("Enter the direction: ");
        scanf("%d", &dir);
        if(dir == 1)    // right direction -->
        {
            right_shift(arr, size, pos);
        }
        else            // <-- left direction
        {
            left_shift(arr, size, pos);
        }
        

    printf("\n");
    return 0;
}