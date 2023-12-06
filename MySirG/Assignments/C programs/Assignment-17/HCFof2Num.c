#include<stdio.h>

int HCF_of_2_Num(int, int);

int HCF_of_2_Num(int n1, int n2)
{
    if(n1 == n2)
        return n1;
    if(n1%n2 == 0)
        return n2;
    if(n2%n1 == 0)
        return n1;

    if(n1 > n2)
        return HCF_of_2_Num(n1%n2, n2);
    else
        return HCF_of_2_Num(n1, n2%n1);
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num1, num2;
        printf("Enter two number: ");
        scanf("%d%d", &num1, &num2);

        int HCF = HCF_of_2_Num(num1, num2);

        printf("The HCF of a given number is: %d", HCF);
        

    printf("\n");
    return 0;
}