#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, j;
        printf("Enter a number: ");
        scanf("%d",&num);
        for (int i = num+1; i >= 1 ; i++)
        {
            int count =0;
            for ( j = 1; j <= i; j++)
            {
                if(i%j == 0)
                    count++;
            }
            if(count == 2){
                printf("%d",i);
                break;
            }
                

        }
        

    printf("\n");
    return 0;
}