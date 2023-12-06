#include<stdio.h>
#include<string.h>
char* trim(char str[])
{
    int i, cnt=0, k, j;
    for ( k = strlen(str)-1; str[k] == ' '; k--)
    {
        cnt++;      // 2
    }
    k = strlen(str);

    for ( j = 0; str[j] == ' '; j++);

    for ( i = 0; str[i]; i++)
    {
        str[i] = str[i+j];
    }  

    str[k-cnt-j] = '\0';

    return str;
}


int count_words(char str[])
{
    trim(str);
    int i, cnt=1;
    for ( i = 0; str[i]; i++)
    {
        if(str[i] == ' ')
        {
            if(str[i] == str[i+1])
                continue;
            else
                cnt++;
        }    
    }
    
    return cnt;
}

void stringTOwords(char str[], char words[][20])
{
    int i, j, k, wcount;
    wcount = count_words(str);

    for (i=0, j=0, k=0; str[i]; i++, k++)
    {
        if(str[i] != ' ')
            words[j][k] = str[i];
        else
        {
            words[j][k] = '\0';
            j++;
            k=-1;
        }
    }
    words[j][k] = '\0';


}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[100] = "Start your code here";
        char words[4][20];

        stringTOwords(str, words);     
        for (int i = 0; i < 4; i++)
        {
            printf("%s  ", words[i]);
        }
           

    printf("\n");
    return 0;
}
