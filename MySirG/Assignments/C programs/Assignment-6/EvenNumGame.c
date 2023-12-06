#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, i;
        

        for(i=1; i<=3; i++)
        {
            printf("Enter number: ");
            scanf("%d", &num);
            if(num % 2 == 0)     // input value is EVEN
                break;           
        }
        if(i == 4)               // if loop run all 3 time it mean user input only odd number 3 time
            printf("You LOSS");
        else
            printf("You win");
        

    printf("\n");
    return 0;
}