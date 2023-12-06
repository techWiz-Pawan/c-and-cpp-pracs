#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[10] = "3as`/"; 
        int i;
        int alph=0, digi=0, sym=0;
        
        for (i = 0; str[i]; i++)
        {
            
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                alph++;
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                digi++;
            }
            else
            {
                sym++;
            }
        }
        printf("Number of alphabets: %d\n", alph);
        printf("Number of digits: %d\n", digi);
        printf("Number of symbol: %d\n", sym);
        

    printf("\n");
    return 0;
}