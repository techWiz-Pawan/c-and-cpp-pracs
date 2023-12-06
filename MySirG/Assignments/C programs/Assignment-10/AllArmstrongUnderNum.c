#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int num, i, x, cnt, digi, p, sum, L_digi;
        printf("Enter the last number uptil you want Armstron: ");
        scanf("%d", &L_digi);

        for(num=1; num<=L_digi; num++)
        {
                // count number of digi
            x = num;
            cnt = 0;
            sum = 0;
            while (x)
            {
                x = x/10;
                cnt++;
            }
            // take digi
            for(x=num; x; x=x/10)
            {
                digi = x%10;
                p=1;
                
                for (i = 1; i <=cnt; i++)
                {
                p = p * digi; 
                }
                sum = sum + p;
             
            }
            if(sum == num)
                printf("%d ", sum);   
        }
        
        
    printf("\n");
    return 0;
}