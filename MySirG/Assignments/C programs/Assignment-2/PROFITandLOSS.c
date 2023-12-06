#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        float cost_price, sell_price, profit, loss; 
        printf("At what price you buy 1 dozen BANANA: ");
        scanf("%f", &cost_price);
        float cost_price_per_banana = (cost_price/12)*25;

        printf("At what price you sell 1 dozen BANANA: ");
        scanf("%f", &sell_price);
        float sell_price_per_banana = (sell_price/12)*25;

        if(sell_price > cost_price)
        {
            profit = (cost_price_per_banana - cost_price);
            printf("Profit is %f", profit);
        }
        else
        {
            loss = (sell_price_per_banana - sell_price);
            printf("Loss is %f", loss);
        }

        

    printf("\n");
    return 0;
}