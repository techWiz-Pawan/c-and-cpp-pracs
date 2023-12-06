#include<stdio.h>
#include<string.h>

// int str_length(char str[])
// {
//     int l;
//     for(l=0; str[l]; l++);
//         return l;
// }

// char* reverse_string(char str[])
// {
//     int len, i;
//     len = str_length(str);
//     char ch;
//     for ( i=0; i < (len/2); i++)
//     {
//         ch = str[i];
//         str[i] = str[len-1-i];
//         str[len-1-i] = ch;

//     }
//     str[len] = '\0';
//     return str;
// }

// int main()
// {
//     printf("Hi Easy\n");

//         /* Start your code here */
//         char str[50] = "easy";
//         printf("string in reverse form %s", reverse_string(str));
        

//     printf("\n");
//     return 0;
// }

int string_len(char str[])
{
    int l;
    for(l=0; str[l]; l++);
    
    printf("length = %d\n", l);
        return l;
}


char* reverse_string(char str[])
{
    int len = string_len(str);
    char ch;
    for (int i = 0; i < len/2; i++)
    {
        ch = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = ch;
    }
    str[len] = '\0';
    return str;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[50];
        printf("Enter a string: ");
        fgets(str, 50, stdin);

        printf("The given string in revese form: %s", reverse_string(str));

    printf("\n");
    return 0;
}