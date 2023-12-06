#include <stdio.h>       // find gmail.com ids
#include <string.h>

    int find_gmail(char mail[][100], int row, char sub_string[])
    {
        int i, cnt=0;
        for ( i = 0; i < row; i++)
        {
            if(strstr(mail[i], sub_string) != NULL)
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
            char mail[][100] = {"a1@gmail.com", "a2@gmail.com", "a3@yahoo.com", 
            "a4@hotmail.com", "pawanmrana@mctrgit.ac.in", "wedw123@gmail.com"};

            char sub_string[20] = "gmail.com";

            int row = sizeof(mail)/sizeof(mail[0]);

            int count = find_gmail(mail, row, sub_string); 

            printf("%d Email end with 'gmail.com.'", count);       

        printf("\n");
        return 0;
    }

