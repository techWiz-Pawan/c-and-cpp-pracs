#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10], i;
        printf("Enter the element in an array: ");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &arr[i]);
        }
        int sum = 0;
        for (i = 0; i < 10; i++)
        {
            if(arr[i]%2 == 0)        // for ODD   -->   arr[i]%2 != 0     <--
                sum = sum + arr[i];
        }
        printf("sum of elements in an array is %d", sum);
        
        
        

    printf("\n");
    return 0;
}