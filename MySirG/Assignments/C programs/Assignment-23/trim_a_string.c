#include<stdio.h>
#include<string.h>
char* trim_space_in_string(char str[])
{
    int i=0, j, k, cnt=0;
    // for shifting NULL character

    // strlen(str)-1 string length without NULL character
    for ( k = strlen(str)-1; str[k] == ' '; k--)       // finding first alphabet from right to left
    {                               // count spaces from right to left wale
        cnt++;   // cnt=2
    }
    k = strlen(str);
   printf("wfe K = %d\n", k);
    
    // for shifting aplhabets to trim the space
    while (str[i] == ' ')       // finding first alphabet from left to right
        i++;   // i=3
        printf("\ni = %d\n", i);
    for ( j = 0; str[j+1]; j++)
        str[j] = str[i+j];
    
    str[k-cnt-i] = '\0';
    return str;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[50] = "   hi easy  ";
        printf("string before trimmed:%s\n", str);
        printf("Length before: %lu\n", strlen(str));

        printf("string after trimmed:%s\n",trim_space_in_string(str));
        printf("Length after: %lu\n", strlen(str));
        

    printf("\n");
    return 0;
}