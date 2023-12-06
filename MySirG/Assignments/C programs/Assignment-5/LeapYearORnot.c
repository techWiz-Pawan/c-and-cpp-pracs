#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int year;
        printf("Enter year: ");
        scanf("%d",&year);

             if((year % 100) == 0)
            {
                if((year % 400) == 0)
                    printf("Leap year");
                else
                    printf("Not leap year");
            }
            else if((year % 4) == 0)
                    printf("Leap year");
                else
                    printf("Not Leap year");

    printf("\n");
    return 0;
}