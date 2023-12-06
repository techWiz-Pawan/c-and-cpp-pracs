#include<stdio.h>

int swap(int *p, int *q);
int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int n1, n2, result;
        printf("Enter two number: ");
        scanf("%d%d",&n1,&n2);

        result = n1 + n2;
        printf("The sum of %d and %d is: %d",n1,n2,result);


    printf("\n");
    return 0;
}

