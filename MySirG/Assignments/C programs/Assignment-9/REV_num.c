#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, ld;
        printf("Enter a number: ");
        scanf("%d",&num);
        
        while (num > 0)     // putting while condition was tricky :)
        {
            ld = num % 10;
            num = num/10;
            printf("%d", ld);
        }
        
        

    printf("\n");
    return 0;
}