#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int x = sizeof('A');
        printf("The sizeof given character constant: %d\n", x);

        int y = sizeof(5.5);
        printf("The sizeof given real constant: %d", y);

    printf("\n");
    return 0;
}