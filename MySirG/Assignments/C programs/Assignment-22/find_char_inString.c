#include<stdio.h>
#include<string.h>

int find_char(char s[], char ch)
{
    int i;
    for ( i = 0; s[i]; i++)
    {
        if(s[i] == ch)
            return i;
    }
    return -1;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20] = "character";
        char ch;

        printf("Your string: %s\n", str);
        printf("Enter the targeted character: ");
        scanf("%c", &ch);
        printf("Your character is at index %d", find_char(str, ch));
        

    printf("\n");
    return 0;
}