#include<stdio.h>
#include<string.h>
char* extract_substring(char*, int, int, char*);

char* extract_substring(char* str, int l, int h, char* result)
{
    int i, j, k;
    for ( i = 0; str[i]; i++)
    {
        for ( j = l, k=0; j <= (h-l); j++)
        {
            result[k] = str[j];
            k++;
        }
        
    }
    return result;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20] = "substring", result[10];
        int start_index = 0, end_index = strlen(str);

        extract_substring(str, start_index, end_index, result);

        printf("\n%s", result);

    printf("\n");
    return 0;
}
