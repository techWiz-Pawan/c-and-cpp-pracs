#include <stdio.h>      // find sub-> gmail.com using pointer
#include <string.h>

int find_gmail(const char* mail, const char* sub)
{
    int i, j;
    for ( i = 0; mail[i] != '\0'; i++)
    {
        if(mail[i] == sub[0])
        {
            j=1;

            while(sub[j] != '\0' && mail[i+j] == sub[j])
            {
                j++;
            }
            if(sub[j] == '\0')
                return 1;
        }
        
    }
    return 0;
    
}

int main()
    {
        printf("Hi Easy\n");

            /* Start your code here */
            char mail[][100] = {"a1@gmail.com", "a2@gmail.com", "a3@yahoo.com", 
            "a4@hotmail.com", "pawanmrana@mctrgit.ac.in", "wedw123@gmail.com"};

            char sub_string[20] = "gmail.com";

            int N_mail = sizeof(mail)/sizeof(mail[0]);      // 6 mails

            int count=0, i;
            for ( i = 0; i < N_mail; i++)
            {
                if (find_gmail(mail[i], sub_string))
                    count++;     
            }
            

            printf("%d Email end with 'gmail.com.'", count);       

        printf("\n");
        return 0;
    }