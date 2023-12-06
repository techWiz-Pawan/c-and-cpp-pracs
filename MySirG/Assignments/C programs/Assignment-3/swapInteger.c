#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2, temp;
        printf("Enter two number: ");
        scanf("%d%d", &num1, &num2);

        printf("num1 = %d  | num2 = %d\n",num1, num2);

        temp = num1;
        num1 = num2;
        num2 = temp;

        printf("The number after swapped: \n");
        printf("num1 = %d  | num2 = %d\n",num1, num2);

    printf("\n");
    return 0;
}