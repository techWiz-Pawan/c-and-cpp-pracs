#include<stdio.h>

void N_number(int);
void N_number(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter the Nth number: ");
        scanf("%d", &num);

        N_number(num);
        

    printf("\n");
    return 0;
}