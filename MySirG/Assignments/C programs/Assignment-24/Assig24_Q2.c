#include<stdio.h>
#include<string.h>
#include<ctype.h>

void inputString(char str[][20], int n)
{
    int i;
    printf("Enter %d string: \n", n);
    for ( i = 0; i < n; i++)
    {
        fgets(str[i], 20, stdin);
        str[i][strlen(str[i])-1] = '\0';
    }
    
}

int countVowel(char str[])      
{
    int l = strlen(str), i, cnt=0;
    for ( i = 0; i < l; i++)
    {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[5][20];
        int i, Nvow[5];
        inputString(str, 5);
        
        for ( i = 0; i < 5; i++)
        {
            Nvow[i] = countVowel(str[i]);
        }
        

        printf("\nEntered strings: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%s - %d\n", str[i], Nvow[i]);
        }
        

    printf("\n");
    return 0;
}
