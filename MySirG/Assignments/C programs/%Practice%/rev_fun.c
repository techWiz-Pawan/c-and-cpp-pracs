#include<stdio.h>
void first_all_capt(char str[])
{
    int i;
    for ( i = 0; str[i]; i++)
    {
        if(i==0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        if(str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z')
            str[i+1] = str[i+1] - 32;
    }

    // for ( i = 0; str[i]; i++)
    // {
        printf("New string: %s", str);
    
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[30] = "hii easy";
        
        first_all_capt(str);

    printf("\n");
    return 0;
}
