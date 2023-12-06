#include<stdio.h>
void swap(int *ptr_n1, int *ptr_n2);

void swap(int *ptr_n1, int *ptr_n2)
{
    int temp;
    temp = *ptr_n1;
    *ptr_n1 = *ptr_n2;
    *ptr_n2 = temp;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int n1 = 5, n2 = 10;

        printf("Before swap: %d and %d\n", n1, n2);
        swap(&n1, &n2);
        printf("After swap: %d and %d", n1, n2);

    printf("\n");
    return 0;
}
