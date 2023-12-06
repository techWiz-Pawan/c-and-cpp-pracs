#include<stdio.h>

int fact(int);
int combi(int, int);
void pascalTriangle(int);

int fact(int N)
{
    int p=1;
    for (int i = 1; i <= N; i++)
    {
        p = p * i;
    }
    return p;
    
}

int combi(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}

void pascalTriangle(int line)
{
    int i, j, k, r;
    for (i = 1; i <= line; i++)
    {
        k=1;
        r=0;
        for (j = 1; j <= 2*line-1; j++)
        {
            if (j >= (line+1)-i && j <= (line-1) +i && k)
            {
                printf("%d  ", combi(i-1, r));
                k=0;    r++;
            }
            else
            {
                printf("   ");
                k=1;
            }

        }
        printf("\n");
        
    }
    
}

int main()
{
    int num;
    printf("Enter the number of row for pascal triangle: ");
    scanf("%d", &num);
    pascalTriangle(num);
}

/* 

                                    0C0
                            1C0             1C1
                    2C0             2C1             2C2
            3C0             3C1             3C2             3C3

                     n!
        nCr  =  -----------
                r! (n - r)!
 */

