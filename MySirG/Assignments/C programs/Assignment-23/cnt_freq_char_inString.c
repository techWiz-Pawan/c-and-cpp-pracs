#include<stdio.h>
#include<string.h>

count_frequency(char str[], char store_str[])
{
    int i, j, cnt;
    for(i=0; str[i]; i++)
    {
        cnt = 1;
        for(j=i+1; str[j]; j++)
        {
            if(str[i] == str[j])
            {
                cnt++;
                str[j] = -1;
            }
        }
        store_str[i] = cnt;
    }
    
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] != -1)
            printf("\n%c - occured %d time\n", str[i], store_str[i]);
    }

}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[25] = "Easy ways";
        char store_str[25];
        printf("You entered string: %s", str);

        count_frequency(str, store_str);
        

    printf("\n");
    return 0;
}
