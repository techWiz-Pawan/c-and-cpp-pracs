#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */

        while (1)
        {
            /* code */
        
        

        int num;
        int n1, n2, L;
        int c2_n, store_num, rem, sum;
        int l, b, h, vol;
        int c4_n, cnt=0;
        printf("\n\n1.  LCM of two number.\n");
        printf("2.  sum of digits of number.\n");
        printf("3.  volume of cuboid.\n");
        printf("4.  check prime number or not.\n");
        printf("5.  EXIT.");

        printf("\n\nEnter you choice: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            
            printf("Enter two number: ");
            scanf("%d%d", &n1, &n2);
            L = n1>n2?n1:n2;
            while(L <= n1*n2)
            {
                if(L%n1 == 0 && L%n2 == 0)
                    {
                        printf("LCM of %d and %d is %d", n1, n2, L);
                        break;
                    }
                    L++;
            }
            break;
        
        case 2:
            printf("Enter the number: ");
            scanf("%d", &c2_n);
            store_num = c2_n;
            while (store_num)
            {
                rem = store_num%10;
                sum = sum + rem;
                store_num = store_num/10;
            }
            printf("The sum of digist of %d is %d", c2_n, sum);
            break;
        
        case 3:
            printf("Enter the lenght, breath and height: ");
            scanf("%d%d%d", &l, &b, &h);

            vol = l*b*h;
            printf("The volume of cuboid is %d", vol);
            break;

        case 4:
            printf("Enter the number: ");
            scanf("%d", &c4_n);

            for (int i = 1; i <= c4_n; i++)
            {
                if(c4_n % i == 0)
                    cnt++;
            }
            if(cnt == 2)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 5:
            exit(0);
            
            
        
        default:
            printf("Invalid Input");
            break;
        }
        
        }    

    printf("\n");
    return 0;
}