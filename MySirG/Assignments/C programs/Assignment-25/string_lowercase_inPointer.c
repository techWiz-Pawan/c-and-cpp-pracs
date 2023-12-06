#include<stdio.h>
#include<string.h>
char* to_lowercase(char* str)
{
    int i;
    for ( i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return str;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20];
        printf("Enter the string: ");
        fgets(str, sizeof(str), stdin);

        to_lowercase(str);

        printf("%s", str);
        

    printf("\n");
    return 0;
}
