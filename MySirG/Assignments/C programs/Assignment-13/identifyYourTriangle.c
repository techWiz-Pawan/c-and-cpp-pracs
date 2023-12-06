#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2, num3, num;

        while(1)
        {

        printf("MENU DRIVEN PROGRAM for TRIANGLES😎:- \n");
        printf("\n0.  Exit\n");
        printf("1.  Isosceles\n");
        printf("2.  Right angled triangle\n");
        printf("3.  Equilateral\n");
        

        printf("\nChoose your option to proceed: ");
        scanf("%d", &num);
                
            switch (num)
            {
            case 0:
                exit(0);
            case 1:
                printf("\nEnter three number: ");
                scanf("%d%d%d", &num1, &num2, &num3);
                if(num1 == num2 || num2 == num3 || num1 == num3)
                printf("Given set of three number are lengths of isosceles triangle \n\n");
                else
                printf("Given set of three number are NOT lengths of isosceles triangle \n\n");
                break;
            case 2:
                printf("\nEnter three number: ");
                scanf("%d%d%d", &num1, &num2, &num3);
                if(num1*num1 + num2*num2 == num3*num3)
                printf("Given set of three number are lengths of right angled triangle \n\n");
                else
                printf("Given set of three number are NOT lengths of isosceles triangle \n\n");
                break;
            case 3:
                printf("\nEnter three number: ");
                scanf("%d%d%d", &num1, &num2, &num3);
                if(num1 == num2 == num3)
                printf("Given set of three number are lengths of equilateral triangle \n\n");
                else
                printf("Given set of three number are NOT lengths of isosceles triangle \n\n");
                break;
            

            default:
                printf("Invalid choice ");
            }
        
        }
        
        

    printf("\n");
    return 0;
}