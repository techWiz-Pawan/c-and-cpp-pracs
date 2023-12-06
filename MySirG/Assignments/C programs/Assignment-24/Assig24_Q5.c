#include <stdio.h>       // remove duplicate name from array of string
#include <string.h>
void remove_duplicate(char names[][20], int row)
{
    int i, j;
    for ( i = 0; i < row-1; i++)
    {
        for ( j = i+1; j < row; j++)
        {
            // in string for comparing two string always think for 'strcmp'
            if(strcmp(names[i], names[j]) == 0)     
            {
                strcpy(names[j], "");
            }
        }
        
    }

    printf("\nAFTER:-\n");
    for(i=0; i<5; i++)
    {
        printf("%s ", names[i]);
    }
       
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char names[6][20] = {"rohan", "sheetal", "rohan", "ramesh", "vinit", "vinit"};
        int row = 6;
        
        printf("\nBEFORE:-\n");
        for(int i=0; i<row; i++)
        {
            printf("%s ", names[i]);
        }

            remove_duplicate(names, row);
            

    printf("\n");
    return 0;
}
