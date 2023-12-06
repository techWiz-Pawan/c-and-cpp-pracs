#include<stdio.h>
void stringCombination(char str[], int r, int size)
{
    int i, j, k;
    char temp[r + 1];

    for ( i = 0; i < size-(r-1); i++)
    {
        temp[0] = str[i];
        for ( j = i+1; j < size-(r-1); j++)
        {
            temp[1] = str[j];
            for ( k = j+1; k < size-(r-2); k++)
            {
                temp[2] = str[k];
                temp[3] = '\0';
                printf("%s\n", temp);
            }
            
        }
        
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[] = "ABCDE";
        int size = sizeof(str)/sizeof(str[0]);
        // char **p;
        
        // p = stringCombination(str, 3);
        stringCombination(str, 3, size);

    printf("\n");
    return 0;
}
