#include<stdio.h>
#include<string.h>

int isAnagram(char str[][20], int row)
{
    int i, j, k;
    for ( i = 0; i < row; i++)
    {
        int len = strlen(str[i]);

        for ( j = 0; j < len; j++)
        {
            for ( k = j+1; k < len; k++)
            {
                char temp;
                if(str[i][j] > str[i][k])
                {
                    temp = str[i][j];
                    str[i][j] = str[i][k];
                    str[i][k] = temp;
                }
            }
            
        }
        
    }

    
        if(strcmp(str[0], str[1]) == 0)
            return 0;
        else
            return 1;
    
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[2][20] = {"EARTH", "HEART"};

        int check = isAnagram(str, 2);

        if(check)
            printf("Strings are NOT anagram");
        else
            printf("Strings are anagram");

    printf("\n");
    return 0;
}
