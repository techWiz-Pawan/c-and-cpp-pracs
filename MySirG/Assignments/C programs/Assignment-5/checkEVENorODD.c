#include<stdio.h>
/*            -----NOTE:-----
    without using % sign we can identify even or odd 
    Method 1
    1. If you divide given number by 2 and then multiply the result with 2 you get the 
        inputed number back
        e.g. 6/2*2 == 6

    Method 2   (using bitwise operator)
    1. The binary of even number will have LSB always 0 e.g. 6 --> [0 1 1 (0)]
    2. Do (number & 1) == 0   // even 
*/

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter the number: ");
        scanf("%d",&num);

        if((num / 2 * 2) == num)
            printf("Given number is EVEN");
        else
            printf("Given number is ODD");

        if((num & 1) == 0)
            printf("Given number is EVEN");
        else
            printf("Given number is ODD");

    printf("\n");
    return 0;
}