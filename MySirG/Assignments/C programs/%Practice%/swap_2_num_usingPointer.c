#include<stdio.h>
void swap(int *p, int *q)  // yaha par pointer jisse point kar raha hai usse likha hai
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

/*  ^-- yaha par dho cheez return karana tha p and q par hum ek he cheez return 
kara sakte hai uss case me pointer k baare me sochna chaheye  */

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int n1=3, n2=5;
        swap(&n1, &n2);  // yaha par n1 and n2 ka address dal raha hu address dalna matlab mai modify kar sakta hu jo mysirg ne bataya tha

        printf("%d and %d", n1, n2);
        

    printf("\n");
    return 0;
}
