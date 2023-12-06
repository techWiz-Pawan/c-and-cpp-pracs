#include<stdio.h>
#include<string.h>

char* capital_first_letter(char str[])
{
    int i;

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }

    for(i=0;str[i]!='\0';i++)
    {

        if(str[i] == ' ')
        {
            str[i+1] -= 32;
        }
    }
    return str;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[100] = "I like to code";
        printf("my string: %s\n", str);

        printf("After construction: %s",capital_first_letter(str));

    printf("\n");
    return 0;
}
