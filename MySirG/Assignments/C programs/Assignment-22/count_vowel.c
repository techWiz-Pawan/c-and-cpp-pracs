#include<stdio.h>
#include<string.h>

int count_Vowel(char s[])
{
    int i, cnt=0;
    for (i = 0; s[i]; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            cnt++;
        }

    }
    return cnt;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20] = "countVowel";

        printf("%s\n", str);
        printf("The number of vowel found in given string: %d", count_Vowel(str));
        

    printf("\n");
    return 0;
}