#include<stdio.h>
int fact(int);
int combination(int, int);
int permutation(int, int);

int fact(int n)
{
    int p=1;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
    }
    return p;
    
}

int combination(int n, int r)
{
    return fact(n)/fact(r)/fact(n-r);
}

int permutation(int n, int r)
{
    return fact(n)/fact(n-r);
}

int main()
{
    printf("Hi Easy\n");

        int n, r;

        printf("from n items: ");
        scanf("%d", &n);

        printf("r selected at a time: ");
        scanf("%d", &r);


        printf("The expected combination of your input: ");
        int comb = combination(n, r);
        printf("%d", comb);

        printf("\nThe expected permutation of your input: ");
        int perm = permutation(n, r);
        printf("%d", perm);
        

    printf("\n");
    return 0;
}