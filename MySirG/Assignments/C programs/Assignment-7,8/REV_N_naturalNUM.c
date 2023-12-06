#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, i=1;
        printf("Enter a Nth term: ");
        scanf("%d",&num);
        while (num >= i)
        {
            printf("%d\n",num);
            num--;
        }
        
        

    printf("\n");
    return 0;
}