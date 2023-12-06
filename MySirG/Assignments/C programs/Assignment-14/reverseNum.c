#include<stdio.h>

int NumRev(int);
int NumRev(int n)
{
    int rem, rev;
    //store_n = n;
    while (n)
    {
        rem = n%10;
        rev = rev*10 +rem;
        n = n/10; 
    }
    return rev;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, reverseN;
        printf("Enter the number: ");
        scanf("%d", &num);

        reverseN = NumRev(num); 

        printf("%d in rev is %d", num, reverseN);
        

    printf("\n");
    return 0;
}