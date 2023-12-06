#include<stdio.h>
void input(int **q, int n, int size[]);
void display(int **q, int n, int size[]);

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int a[5], b[6], c[3], d[8];
        int *p[4];
        int size[4] = {5, 6, 3, 8};

        p[0] = a;
        p[1] = b;
        p[2] = c;
        p[3] = d;

        input(p, 4, size);
        display(p, 4, size);

    printf("\n");
    return 0;
}

void input(int **q, int n, int size[])
{
    int i, j;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element for array %c[]: \n", size[i], 'a'+i);
        for(j=0; j < size[i]; j++)
        {
            scanf("%d", q[i]+j);
        }
    }
    
}

void display(int **q, int n, int size[])
{
    int i, j;
    printf("The arrays in the matrix are: \n");
    for ( i = 0; i < n; i++)
    {
        for(j=0; j < size[i]; j++)
        {
            printf("%d  ", *(q[i]+j));
        }
        printf("\n");
    }
    
}

