#include<stdio.h>
void occurence_in_string(char s[]);
void occurence_in_string(char s[])
{
    int i, j, cnt;
    for ( i = 0; s[i]; i++)
    {
        cnt = 1;
        if (s[i] != -1)
        {
            for ( j = i+1; s[j]; j++)
            {
                if(s[i] == s[j])
                {
                    s[j] = -1;
                    cnt++;
                }
            }
            printf("%c occured %d time\n", s[i], cnt);
            
        }
        
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[10] = "occurence";
        
        occurence_in_string(str);

    printf("\n");
    return 0;
}