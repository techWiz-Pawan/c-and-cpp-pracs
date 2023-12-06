#include <stdio.h>       // pick word starting with 'a'
#include <string.h>

void a_startingWords(char str[][20], int row, char words[][20])
{
    int i;
    printf("\nall 'a' starting words:- \n");
    for ( i = 0; i < row; i++)
    {
        // to access first letter use "str[i][0]" i->every word first row | 0->every word first col
        if(str[i][0] == 'a' || str[i][0] == 'A')        
        {
            printf("%s  ", str[i]);
        }
        else
            continue;
    }
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[5][20] = {"aman", "amit", "suresh", "aakash", "mishra"}, words[5][20];

        printf("\nall words before operation:- \n");
        for (int i = 0; i < 5; i++)
        {
            printf("%s  ", str[i]);
        }

        a_startingWords(str, 5, words);
        

    printf("\n");
    return 0;
}
