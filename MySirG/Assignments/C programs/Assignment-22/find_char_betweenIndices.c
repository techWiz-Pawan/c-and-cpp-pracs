#include<stdio.h>
#include<string.h>

int str_len(char s[])
{
    int i;
    for(i=0; s[i]; i++);
        return i;
}

int find_char_between_indices(char s[], char ch, int l, int h)
{
    int i;
    int len = str_len(s);

    if(h > len)
        h = len;
    if(l >= len)
        return -1;
    for ( i = l; i < h; i++)
    {
        if(s[i] == ch)
            return i;
    }
    return -1;
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20] = "character";
        char ch;
        int low, high;

        printf("Your string: %s\n", str);
        printf("Enter the targeted character: ");
        scanf("%c", &ch);
        printf("give me range: ");
        scanf("%d%d", &low, &high);

        int result = find_char_between_indices(str, ch, low, high);
        printf("Your character in a between indices %d - %d : %d",low, high-1, result);
        
        

    printf("\n");
    return 0;
}