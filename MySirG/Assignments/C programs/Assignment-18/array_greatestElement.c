#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[5], i;
        printf("Enter the element in an array: ");
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }

        int max = arr[0];
        for (i = 1; i < 5; i++)
        {
            
                // max = arr[0];
               if(arr[i] > max)
                    max = arr[i];
    
        }
        printf("The max ele is %d", max);
        
        

    printf("\n");
    return 0;
}