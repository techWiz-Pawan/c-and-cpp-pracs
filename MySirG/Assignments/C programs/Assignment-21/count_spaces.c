#include<stdio.h>
int count_the_spaces(char s[]);
int count_the_spaces(char s[])
{
    int cnt=0;
    for (int i = 0; s[i]; i++)
    {
        if(s[i] == ' ')
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
        char str[10] = "e a s y";

        int result = count_the_spaces(str);
        printf("spaces occured %d time", result);
        

    printf("\n");
    return 0;
}