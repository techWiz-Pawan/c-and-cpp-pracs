#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int a, b, c;
        printf("Enter three number: ");
        scanf("%d%d%d",&a, &b, &c);

        if((a > b) && (a > c))
            printf("%d is greatest",a);
        else if(b > c)
            printf("%d is greatest",b);
        else
            printf("%d is greatest",c);    
        
        

    printf("\n");
    return 0;
}