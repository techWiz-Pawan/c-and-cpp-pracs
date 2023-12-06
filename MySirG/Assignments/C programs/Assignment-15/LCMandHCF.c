#include<stdio.h>

int find_LCM(int, int);
int find_HCF(int, int);

int find_LCM(int n1, int n2)
{
    int maxN;
    maxN = n1>n2?n1:n2;

    while(maxN <= n1*n2)    {
    if(maxN%n1 == 0 && maxN%n2 == 0)
    {
            return (maxN);
    }
    maxN++;

    }
    return -1;
}

int find_HCF(int n1, int n2)
{
    for (int H = n1<n2?n1:n2; H >= 1; H--)
    {
        if(n1%H == 0 && n2%H == 0)
        {
            return H;
            break;
        }
    }
    return -1;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2;
        printf("Enter two number: ");
        scanf("%d%d", &num1, &num2);

        int LCM = find_LCM(num1, num2);
        printf("LCM = %d\n", LCM);
         
        int HCF = find_HCF(num1, num2);
        printf("HCF = %d", HCF);
        //find_HCF(num1, num2);

    printf("\n");
    return 0;
}