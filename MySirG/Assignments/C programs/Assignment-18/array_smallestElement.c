#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[5], i;
        for ( i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }

        int min = arr[0];
        for ( i = 1; i < 5; i++)
        {
            if(arr[i] < min)
                min = arr[i];
        }
        printf("The min ele is %d", min);
        

    printf("\n");
    return 0;
}