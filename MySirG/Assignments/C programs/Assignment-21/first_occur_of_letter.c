#include<stdio.h>
#include<string.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[50], ch;
        printf("Enter a string: ");
        fgets(str, 50, stdin);
        str[strlen(str)-1] = '\0';
        
        printf("Enter the targeted alphabet: ");
        scanf("%c", &ch);

        for (int i = 0; str[i]; i++)
        {
            if(str[i] == ch)
            {
                printf("The targeted alphabet '%c' is at --> %d",ch, i-1);
                break;
            }
        }
        
        

    printf("\n");
    return 0;
}