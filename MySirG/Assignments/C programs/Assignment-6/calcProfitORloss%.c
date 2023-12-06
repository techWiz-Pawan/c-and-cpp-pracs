#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int cp, sp, loss_p;
        printf("Enter the cost price: ");
        scanf("%d", &cp);
        printf("Enter the selling price: ");
        scanf("%d", &sp);

        if((sp - cp) > 1)
            printf("you made a profit of %d\n", sp-cp);
        else
            {
                printf("You made a loss of %d\n", cp-sp);
                loss_p = (cp - sp)* 100/cp;                     // formula for loss percentage
                printf("The loss percentage is %d%%", loss_p);  // to print % --> use %%
            }


    printf("\n");
    return 0;
}