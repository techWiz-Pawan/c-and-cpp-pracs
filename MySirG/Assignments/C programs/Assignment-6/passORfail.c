#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int sub1, sub2, sub3, sub4, sub5;
        printf("Enter marks of all subjects outof 100: ");
        scanf("%d%d%d%d%d",&sub1, &sub2, &sub3, &sub4, &sub5);
        printf("your score outof 100: \n");
        printf("sub1 = %d/100 | sub2 = %d/100 | sub3 = %d/100 | sub4 = %d/100 | sub5 = %d/100\n", sub1, sub2, sub3, sub4, sub5);

        if((sub1 > 33) && (sub2 > 33) && (sub3 > 33) && (sub4 > 33) && (sub5 > 33))
            printf("You PASS");
        else
            printf("You FAILED");
        

    printf("\n");
    return 0;
}