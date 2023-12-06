#include<stdio.h>
#include<string.h>

int compare_string(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] && str2[i]; i++)
    {
        if(str1[i] != str2[i])
            break;
    }
    return (str1[i] - str2[i]);
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str1[50], str2[50];
        printf("Enter first string : ");
        fgets(str1, 50, stdin);

        printf("Enter second string: ");
        fgets(str2, 50, stdin);

        printf("The comparision result: %d", compare_string(str1, str2));

    printf("\n");
    return 0;
}