#include<stdio.h>
int num_of_digi(int);

int num_of_digi(int n)
{
    if(n < 10)
        return 1;
    return (1 + num_of_digi(n/10));
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);

        int sum = num_of_digi(num);

        printf("The number of digits %d", sum);
        

    printf("\n");
    return 0;
}