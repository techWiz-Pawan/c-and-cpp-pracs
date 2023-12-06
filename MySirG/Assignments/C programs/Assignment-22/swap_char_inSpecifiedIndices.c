#include<stdio.h>
#include<string.h>

int str_len(char s[])
{
    int i;
    for(i=0; s[i]; i++);
        return i;
}

char* swap_character_inString(char s[], int l, int h)
{
    int i, j;
    char ch;
    int len = str_len(s);
    if(l >= len ||l < 0)
        return NULL;
        /* Returning an integer value like -1 instead of a valid memory address 
        can cause the program to crash or behave unexpectedly because -1 is 
        not a valid memory address. */

        /* Therefore, if you need to indicate an error condition in your function 
        that returns a char*, you can use a special value such as NULL to indicate 
        the error. */
    if(h > len)
        h = len-1;
    for ( i = l; i<= h; i++)
    {
        for ( j = i+1; j <= h; j++)
        {
            if(i < j)
            {
                ch = s[i];
                s[i] = s[j];
                s[j] = ch;
            }

        }
        
    }
    return s;
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int low, high;
        char str[20] = "helloabchello";
        printf("Given string: %s\n", str);
        printf("Enter the range: ");
        scanf("%d%d", &low, &high);

        char* result = swap_character_inString(str, low, high);  
        /* when we declare a variable as char*, we are saying that it is a pointer 
        to a character array. On the other hand, when we declare a variable as char[], 
        we are saying that it is an array of characters. */

        /* If we declared the variable as a char[], we would be declaring an array of 
        characters, which is not what we want in this case. We are only interested in 
        storing the memory address returned by the function, so we declare the variable 
        as a char*. */
        
        if(result == NULL)
            printf("Invalid range");
        else
        printf("the swapped string is %s", result);

    printf("\n");
    return 0;
}