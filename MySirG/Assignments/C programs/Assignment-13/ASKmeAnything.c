// Not working in vs code


#include<stdio.h>
#include<stdlib.h>
#define pi 3.14159

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;

        while(1)
        {

        printf("\nMENU DRIVEN PROGRAM:- \n");
        printf("\n0.  Exit\n");
        printf("1.  Factorial of a Number\n");
        printf("2.  Check EVEN or ODD\n");
        printf("3.  Area of a circle\n");
        printf("4.  Sum of first n natural number\n");
        

        printf("\nChoose your option to proceed: ");
        scanf("%d", &num);
                
            switch (num)
            {
            case 0:
                exit(0);

            case 1:
                int n, p=1;
                printf("\nEnter a number: ");
                scanf("%d", &n);
                for (int i = 1; i <= n; i++)
                {
                    p = p * i;
                }
                printf("The factorial of %d is %d", n, p);
                break;

            case 2:
                int n1;
                printf("\nEnter a number: ");
                scanf("%d", &n1);
                if(n1/2*2 == n1)
                printf("%d is an EVEN number");
                else
                printf("%d is a ODD number");
                break;

            case 3:
                int radius, area;
                printf("\nEnter the radius: ");
                scanf("%d", &radius);
                area = pi * radius*radius;
                printf("The area of a circle with radius %d is %d", radius, area);
                break;
            case 4:
                int num, sum=0;
                printf("\nEnter the Nth number: ");
                scanf("%d", &num);
                for (int i = 1; i <= num; i++)
                {
                    sum = sum + i;
                }
                printf("The sum of %dth natural number is %d", num, sum);
                break;

            }
        
        }
        
        

    printf("\n");
    return 0;
}

