    #include<stdio.h>
    char* swap_string(char* str1, char* str2, char* temp)
    {
        int i;
        for ( i = 0; str1[i]; i++)
        {
            temp[i] = str1[i];
        }
        temp[i] = '\0'; 

        for ( i = 0; str2[i]; i++)
        {
            str1[i] = str2[i];
        }
        str1[i] =  '\0';

        for ( i = 0; temp[i]; i++)
        {
            str2[i] = temp[i];
        }
        str2[i] = '\0';

        return str1, str2;
    }

    int main()
    {
        printf("Hi Easy\n");

            /* Start your code here */
            char str1[10] = "small";
            char str2[10] = "big";

            char temp[10];

            swap_string(str1, str2, temp);

            printf("%s and %s", str1, str2);
            

        printf("\n");
        return 0;
    }
