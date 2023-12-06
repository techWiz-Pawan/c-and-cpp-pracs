#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, i, cnt=0, digi, sum=0;
        printf("Enter a  number: ");
        scanf("%d",&num);

        int store_num = num;
        while(store_num)
        {
            store_num = store_num/10;
            cnt++;
        }
        // taking digit from given number
        for (store_num = num; store_num; store_num = store_num/10)
        {
            digi = store_num%10;
            int p=1;            // product is intialised with 1
            // making that digi --> digi^count
            for (i = 1; i <= cnt; i++)
            {
                p = p * digi; 
            }
            sum = sum + p;
            
        }
        if(sum == num)
        {
            printf("%d is an armstrong number", num);
        }
        else
            printf("%d NOT an armstrong number", num);
        
        

    printf("\n");
    return 0;
}