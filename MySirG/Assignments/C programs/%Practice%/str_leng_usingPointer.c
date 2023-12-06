#include<stdio.h>
int length(char *ch)
{
    int i;
    for (i = 0; *(ch+i); i++);
        return i;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int l;
        char str[10];
        fgets(str, 10, stdin);
        
        l = length(str);
        printf("length = %d", l);

    printf("\n");
    return 0;
}
