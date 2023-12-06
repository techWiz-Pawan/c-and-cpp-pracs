#include<stdio.h>
#include<string.h>

char* convert2uppercase(char s[])
{
    int i;
    for ( i = 0; s[i]; i++)
    {
       if(s[i] >= 'a' && s[i] <= 'z')
       {
            s[i] -= 32;
       } 
    }
    return s;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[50];
        printf("Enter a sting: ");
        fgets(str, 50, stdin);

        printf("Given string in uppercase: %s", convert2uppercase(str));

    printf("\n");
    return 0;
}