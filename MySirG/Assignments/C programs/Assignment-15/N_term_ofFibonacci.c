#include<stdio.h>

void fibo(int, int, int);

void fibo(int n, int n1, int n2)
{
    int nextN;
    for (int i = 1; i <= n; i++)
    {
        nextN = n1 + n2;
        n1 = n2;
        n2 = nextN;

        printf("%d ", nextN);
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num;
        printf("Enter the nth term: ");
        scanf("%d", &num);
        int n1 = -1, n2 = 1;

        fibo(num, n1, n2);
        

    printf("\n");
    return 0;
}