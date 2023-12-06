#include<stdio.h>
void input(int *p, int l);
void display(int *p, int l);

void input(int *p, int l)
{
    for (int i = 0; i < l; i++)
    {
        scanf("%d", p+i);
    }
    
}

void display(int *p, int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("%d ", *(p+i));
    }
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int a[10];
        input(a, 10);
        display(a, 10);        

    printf("\n");
    return 0;
}
