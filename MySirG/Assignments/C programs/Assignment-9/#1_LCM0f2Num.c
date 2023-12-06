#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2, max;
        printf("Enter two number: ");
        scanf("%d%d",&num1, &num2);
        if(num1 > num2)
            max = num1;
        else
            max = num2;

        while(max <= num1 * num2)   // max it can go num1 * num2 
        {
            if(max%num1 == 0 && max%num2 == 0)
            {
                printf("LCM : %d",max);
                break;
            }
                
            max++;
        }
        

        

    printf("\n");
    return 0;
}