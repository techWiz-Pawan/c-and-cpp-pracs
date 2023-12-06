#include<stdio.h>
#include<string.h>

void find_the_word(char str[], char word[])
{
    int i, j, found;
    for(i=0; str[i]; i++)
    {
        found = 1;
        for(j=0; word[j]; j++)
        {
            if(str[i+j] != word[j])
            {
                found = 0;
                break;
            }

        }    
            if(found)
            {
                printf("\n'%s' is found in string at %d", word, i);
                break;
            }
        
    }
    if(!found)
    {
        printf("\n'%s' is not present in string", word);
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[100] = "i love this very nuch";
        printf("my string: %s\n", str);
        char word[50] = "this";
        
        find_the_word(str, word);

    printf("\n");
    return 0;
}
