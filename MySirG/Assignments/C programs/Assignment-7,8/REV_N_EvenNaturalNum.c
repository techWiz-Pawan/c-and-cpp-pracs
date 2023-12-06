#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i=1, num;
        printf("Enter Nth number: ");
        scanf("%d", &num);
        while (num >= i)
        {
            if(num%2 == 0)
                printf("%d\n",num);
            num--;
        }
        
        

    printf("\n");
    return 0;
}