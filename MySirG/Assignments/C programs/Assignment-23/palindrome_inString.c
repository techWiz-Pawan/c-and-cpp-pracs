#include<stdio.h>
#include<string.h>

int is_palindrom(char s[])
{
    int i;
    int len = strlen(s);
    for ( i = 0; i < len/2; i++)
        if(s[i] != s[len-1-i])
            return 0;
    
    return 1;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20] = "lool";
        
        int result = is_palindrom(str);
        if(result == 1)
            printf("Palindrome");
        else
            printf("NOT Palindrome");

    printf("\n");
    return 0;
}