#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int day, month, year;
        printf("Input today's date: ");
        scanf("%d%d%d", &day,&month, &year);

        printf("User input data formate - %d / %d / %d", day, month, year);

        printf("\n");
        printf("New formate: Day - %d, month - %d, year - %d", day, month, year);

    printf("\n");
    return 0;
}