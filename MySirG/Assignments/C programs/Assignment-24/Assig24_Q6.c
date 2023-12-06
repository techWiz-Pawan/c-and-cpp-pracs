#include<stdio.h> // find word which end with letter 's'
#include <string.h>

void s_walaDhundo(char str[][20], int row, char word[][20])
{
    /** "syllabus", "boss", "ball", "man", "fuss" **/
    int i, j, k;
    int len[5];
    for ( i = 0; i < row; i++)
    {
        len[i] = strlen(str[i]);
    }
    // for ( i = 0; i < row; i++)
    // {
    //     printf("%d ", len[i]);
    // }
    
    for ( i = 0, j=0, k=0; i < row; i++, k++)
    {
        if(str[i][len[i]-1] == 's')
        {
            strcpy(word[j], str[j]);
            j++;
            k = -1;
        }
        else
        {
            strcpy(word[j], "");
            j++;
            k = -1;
        }
    }

    printf("words with ending letter 's':- ");
    for ( i = 0; i < row; i++)
    {
        printf("%s  ", word[i]);
    }
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int row = 5;        
        char str[5][20] = {"syllabus", "boss", "ball", "man", "fuss"}, word[5][20];
        
        s_walaDhundo(str, row, word);

    printf("\n");
    return 0;
}
