#include<stdio.h>
#include<string.h>

char* convert_lowercase(char s[])
{
    int i;
    for ( i = 0; s[i]; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    return s;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20] = "EASY";
        
        printf("Given string in lowecase: %s", convert_lowercase(str));

    printf("\n");
    return 0;
}