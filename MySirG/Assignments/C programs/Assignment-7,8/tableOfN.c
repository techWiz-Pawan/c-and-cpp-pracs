#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter Nth term: ");
        scanf("%d", &num);
        for (int i = 1; i <= 10; i++)
        {
            int res = num * i;
            printf("%d x %d = %d\n", num, i, res);
        }
        
        

    printf("\n");
    return 0;
}