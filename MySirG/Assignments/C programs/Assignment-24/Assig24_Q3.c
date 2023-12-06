#include<stdio.h>
#include<string.h>

void store_string(char countries[][20], int n)
{
    int i;
    printf("Enter %d strings: ", n);
    for ( i = 0; i < n; i++)
    {
        fgets(countries[i], 50, stdin);
        countries[i][strlen(countries[i]) - 1] = '\0';      
    }
    
}

void sortCountryName(char countries[][20], int n)       // bubble
{
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            char temp[100];
            if(strcmp(countries[i], countries[j]) > 0)
            {
                strcpy(temp, countries[i]);
                strcpy(countries[i], countries[j]);
                strcpy(countries[j], temp);
            }
        }
        
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char countries[10][20];
        store_string(countries, 10);

        sortCountryName(countries, 10);
        printf("countries name in sorted order: \n");

        for (int i = 0; i < 10; i++)
        {
            printf("%s  ", countries[i]);
        }
        

    printf("\n");
    return 0;
}
