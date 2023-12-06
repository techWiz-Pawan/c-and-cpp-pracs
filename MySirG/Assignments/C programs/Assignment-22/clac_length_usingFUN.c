#include<stdio.h>
#include<string.h>

int str_len(char str[]);
int str_len(char str[])
{
    int l;
    for ( l = 0; str[l]; l++);
        return l;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        printf("Length of a string: %d", str_len("easy"));
        

    printf("\n");
    return 0;
}