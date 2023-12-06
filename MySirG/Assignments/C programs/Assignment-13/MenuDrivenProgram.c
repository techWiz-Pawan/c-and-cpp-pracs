#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2, num;

        while(1)
        {

        printf("MENU DRIVEN PROGRAM:- \n");
        printf("\n0.  Exit\n");
        printf("1.  Addition\n");
        printf("2.  Subtraction\n");
        printf("3.  Multiplication\n");
        printf("4.  Division\n");
        

        printf("\nChoose your option to proceed: ");
        scanf("%d", &num);
                
            switch (num)
            {
            case 0:
                exit(0);
            case 1:
                printf("\nEnter two number: ");
                scanf("%d%d", &num1, &num2);
                printf("The Addition of %d and %d is %d. \n\n", num1, num2, num1+num2);
                break;
            case 2:
                printf("\nEnter two number: ");
                scanf("%d%d", &num1, &num2);
                printf("The Substraction of %d and %d is %d. \n\n", num1, num2, num1-num2);
                break;
            case 3:
                printf("\nEnter two number: ");
                scanf("%d%d", &num1, &num2);
                printf("The Multiplication of %d and %d is %d. \n\n", num1, num2, num1*num2);
                break;
            case 4:
                printf("\nEnter two number: ");
                scanf("%d%d", &num1, &num2);
                printf("The Division of %d and %d is %d. \n\n", num1, num2, num1/num2);
                break;
            

            default:
                printf("Invalid choice ");
            }
        
        }
        
        

    printf("\n");
    return 0;
}