#include<stdio.h>
#include<string.h>
void store_string(char str[][50], int n)
{
    int i;
    printf("Enter %d strings: ", n);
    for ( i = 0; i < n; i++)
    {
        fgets(str[i], 50, stdin);
        str[i][strlen(str[i]) - 1] = '\0';      // 2D array me NULL aise lagate hai 
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i;
        char str[3][50];

        store_string(str, 3);

        for ( i = 0; i < 3; i++)
        {
            printf("%s ", str[i]);
        }
        

    printf("\n");
    return 0;
}
