#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        // print unit digit of given number.
        int num = 2345, unitDigit;
        printf("The given number is %d\n",num);

        unitDigit = num%10;
        printf("The unit digit of given number is : %d\n",unitDigit);

        // print the number except last digit of that number.

        int NUM = 2345, no_lastDigit;
        no_lastDigit = NUM/10;
        printf("The number except last digit of that number : %d",no_lastDigit);

    printf("\n");
    return 0;
}