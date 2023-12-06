#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2;
        printf("Enter two number: ");
        scanf("%d%d", &num1, &num2);

        printf("num1 = %d  | num2 = %d\n",num1, num2);

        num1 = (num1 + num2); 
        num2 = (num1 - num2);
        num1 = (num1 - num2);

        printf("The number after swapped: \n");
        printf("num1 = %d  | num2 = %d\n",num1, num2);

        // without using + and - 
        /* 
                num1 = 8  num = 3
            num1 = num1(8)*num2(3);   --> 24
            num2 = num1(24)/num2(3);   --> 8
            num1 = num1(24)/num2(8);   --> 3
         */


    printf("\n");
    return 0;
}