#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int n1, n2, i, j, count;
        printf("Enter two number: ");
        scanf("%d%d",&n1, &n2);

        for (i = n1; i <= n2; i++)
        {
            count = 0;                  // initialise count = 0 in inside the loop so it will return o after every loop
            for (j = 1; j <= i; j++)
            {
                if (i%j == 0)
                {
                    count++;
                }
                
            }
            if(count == 2)
            {
                printf("%d ",i);
            }
            
        }
        
        

    printf("\n");
    return 0;
}