#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter Nth term: ");
        scanf("%d", &num);
        int i = 1;
        while (i <= num)
        {
            printf("%d\n",i*i*i);
            i++;
        }
        
        


    printf("\n");
    return 0;
}