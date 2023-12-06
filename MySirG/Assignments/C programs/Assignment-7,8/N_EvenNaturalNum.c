#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, i=1;
        printf("Enter a Nth term: ");
        scanf("%d",&num);
        while (i <= num)
        {
            if(i%2 == 0)
                printf("%d\n",i);
            i++;
        }
        
        

    printf("\n");
    return 0;
}