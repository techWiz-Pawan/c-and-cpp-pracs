#include<stdio.h>
int count_vowels(char s[]);

int count_vowels(char s[])
{
    int i, cnt=0;
    for ( i = 0; s[i]; i++)
    {
        if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
        {
            cnt++;
        }
        
    }
    return cnt;
    //printf("Given string countain %d vowel", cnt);
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[] = "easyways";

        int result = count_vowels(str);
        printf("%d vowels present in given string", result);

    printf("\n");
    return 0;
}