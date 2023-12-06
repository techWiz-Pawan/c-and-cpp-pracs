#include<stdio.h>

int fibo(int);

int fibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1 || n == 2)
        return 1;
    return (fibo(n-1) + fibo(n-2));
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

    for(int i=0; i< num; i++)
        printf("%d " ,fibo(i));
        

    printf("\n");
    return 0;
}