#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int n1 = -1, n2 = 1, num, next_term;
        printf("Enter a number: ");
        scanf("%d",&num);

        for (int i = 0; ; i++)      // condition not taken so it is now infinite loop
        {
            next_term = n1 + n2;
            if(next_term == num)
            {
                printf("%d is present in fibonacci series", num);
                break;
            }
            if(next_term > num)
            {
                printf("%d NOT present in fibonacci series", num);
                break;
            }
                
            n1 = n2;
            n2 = next_term;
        }
        
        

    printf("\n");
    return 0;
}