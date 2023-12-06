#include<stdio.h>

int evenORodd(int);

int evenORodd(int n)
{
    if(n%2 == 0)
        return 1;
    return 0;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, result;
        printf("Enter a number: ");
        scanf("%d", &num);

        result = evenORodd(num);

        printf("%d", result);
        

    printf("\n");
    return 0;
}