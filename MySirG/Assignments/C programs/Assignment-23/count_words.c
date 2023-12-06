#include<stdio.h>
#include<string.h>

char* trim_leading_spaces(char str[])
{
    int i=0, j, k, cnt=0;

    for(k=strlen(str)-1; str[k] == ' '; k--)
        cnt++;

    k = strlen(str);
    while(str[i] == ' ')
        i++;
    for(j=0; str[j+1]; j++)
        str[j] = str[i+j];

    str[k-i-cnt] = '\0';

    return 0;
    
}

int count_words(char str[])
{
    int i, cnt=0;
    trim_leading_spaces(str);
    for ( i = 0; str[i]; i++)
    {
        if(str[i] == ' ')
        {
            if(str[i] == str[i+1])  // too many spaces use this to continue rather than incrementing cnt.
                continue;
            else
                cnt++;
        }
            
    }    
    return cnt;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[] = "Hi my  name  is   easy";
        printf("My word: %s\n", str);
        
        int result = count_words(str);
        printf("Number of words: %d", result+1);
    printf("\n");
    return 0;
}