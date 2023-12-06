// L method //
#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2, multiply, i, flag;
        printf("Enter two numbers: ");
        scanf("%d%d",&num1, &num2);
        
        for (i = 2, multiply=1, flag=0; num1 > 1 && num2 > 1; )
        {
            if(num1%i == 0)
            {
                num1 = num1/i;
                flag = 1;
            }
            if(num2%i == 0)
            {
                num2 = num2/i;
                flag = 1;
            }

            if(flag == 1)
            {
                multiply = multiply*i;
                flag = 0;
            }
            i++;
        }
        printf("LCM: %d", multiply);
        


    printf("\n");
    return 0;
}