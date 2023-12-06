/* A level Question -> Input variable length string */ // *********OLD METHOD*******

#include<stdio.h>
#include<stdlib.h>
char* inputSring();

char* inputSring()
{
    char *q, *p, ch;
    int len=1, i;
    printf("Enter the TEXT: ");
    p = (char*)malloc(len);
    ch = getchar();
    *p = ch;

    do
    {
        q = (char*)malloc(len+1);
        for ( i = 0; i < len; i++)
            *(q+i) = *(p+i);
        *(q+i) = '\0';
        free(p);
        len++;
        p = (char*)malloc(len);
        for ( i = 0; i < len; i++)
            *(p+i) = *(q+i);

        free(q);
        ch = getchar();
        *(p+len-1) = ch;
    } while (ch != 13);
    
    q = (char*)malloc(len);
        *(q+i) = *(p+i);
    *(q+i-1) = '\0';
    
    return q;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char* str;
        str = inputSring();
        printf("You entered string: %s", str);
        

    printf("\n");
    return 0;
}
