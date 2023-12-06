#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int n1, n2, H;
        printf("Enter two number : ");
        scanf("%d%d",&n1, &n2);             // n1 = 8  n2 = 12

        for (H = n1<n2?n1:n2; H >= 1; H--)      // in HCF we check min from n1 and n2
        {                                   // if min is divisible by n1 and n2 from high to low thats y we use H--
            if(n1%H == 0 && n2%H == 0)      // e.g. here 8 = min do H-- i.e. (8->7->6...)
                break;
        }
        printf("HCF = %d",H);
        
        
        

    printf("\n");
    return 0;
}