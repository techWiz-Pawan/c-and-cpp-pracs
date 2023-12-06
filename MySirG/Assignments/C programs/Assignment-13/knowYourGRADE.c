#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int marks;
        printf("Enter how much you scored ?/100: ");
        scanf("%d", &marks);

        switch (marks)
        {
        case 91 ... 100:
            printf("You pass with GRADE - A");
            break;
        case 81 ... 90:
            printf("You pass with GRADE - B");
            break;
        case 71 ... 80:
            printf("You pass with GRADE - C");
            break;
        case 61 ... 70:
            printf("You pass with GRADE - D");
            break;
        case 51 ... 60:
            printf("You pass with GRADE - E");
            break;
        case 0 ... 50:
            printf("You pass with GRADE - F");
            break;        
        default:
        printf("Invalid Marks \n");
        printf("Re-try");
            break;
        }
        

    printf("\n");
    return 0;
}