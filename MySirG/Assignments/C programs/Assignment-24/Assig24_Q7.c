#include <stdio.h>
#include <string.h>

char GET_most_repeating_char(char str[][20], int row)
{
    int char_count[256] = {0};
    char most_repeated_char = '\0';
    int max_count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < strlen(str[i]); j++)     // max_count = 2
        {                                            // most_repeat = l
            char ch = str[i][j];        // s

            char_count[(unsigned char)ch]++; // char_count[113] i.e. 0++ -> 2

            if(char_count[(unsigned char)ch] > max_count)
            {
                max_count = char_count[(unsigned char)ch];
                most_repeated_char = ch;
            }    
        }
        
    }

    return most_repeated_char;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int row = 5;        
        char str[5][20] = {"syllabus", "boss", "ball", "man", "fuss"};

        char ch = GET_most_repeating_char(str, 5);

        printf("Most repeated character: %c", ch);

    printf("\n");
    return 0;
}
