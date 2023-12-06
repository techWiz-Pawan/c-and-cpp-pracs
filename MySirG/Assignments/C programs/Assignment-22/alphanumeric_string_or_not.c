#include<stdio.h>
#include<string.h>

void check_alphanumeric(char s[])
{
    int i, alpha=0, digi=0;
    for ( i = 0; s[i]; i++)     // abc123
    {
        if(s[i] >= '0' && s[i] <= '9')
            digi = 1;
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            alpha = 1;    
    }

    if(alpha == 1 && digi == 1)
        printf("Given string is alphanumberic");
    else
        printf("Given string is NOT alphanumberic");
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[50];
        printf("Enter a string: ");
        fgets(str, 50, stdin);

        printf("Your entered string: %s\n", str);

        check_alphanumeric(str);
        

    printf("\n");
    return 0;
}