#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int N_input, *num, i, sum=0;
        printf("Enter of Input you want: ");
        scanf("%d", &N_input);
        
        num = (int*)malloc(N_input * sizeof(int));
        if(num == NULL)
        {
            printf("Memory allocation failed!");
            return 1;
        }
        printf("Enter %d number: ", N_input);
        for ( i = 0; i < N_input; i++)
        {
            scanf("%d", num+i);     // here we accessing address
        }
        for ( i = 0; i < N_input; i++)
        {
            sum += num[i];      // here we accessing value store in that address 
        }
        float AVG = (float)sum/N_input;

        printf("The of given %d data is %f", N_input, AVG);

        free(num);
        

    printf("\n");
    return 0;
}
