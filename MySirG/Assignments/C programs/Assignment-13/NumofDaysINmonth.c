#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int M_num;
        printf("Enter the month number: ");
        scanf("%d", &M_num);

        switch (M_num)
        {
        case 1:
        case 3:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days");
            break;
        case 2:
            printf("28 or 29 Days");
            break;

        default:
            printf("Invalid month number");
            break;
        }
        

    printf("\n");
    return 0;
}