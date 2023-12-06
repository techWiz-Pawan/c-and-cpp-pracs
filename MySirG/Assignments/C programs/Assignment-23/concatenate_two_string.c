#include<stdio.h>
#include<string.h>

char* concatenate(char str1[],char str2[])
{
    int i, j;
    for(i=0; str1[i]; i++);
    for(j=0; str2[j]; j++)
        str1[i+j] = str2[j];

    str1[i+j] = '\0';

    return str1;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str1[50] = "Easy";
        char str2[50] = "Ways";
        
        printf("\n%s",concatenate(str1, str2));

    printf("\n");
    return 0;
}
