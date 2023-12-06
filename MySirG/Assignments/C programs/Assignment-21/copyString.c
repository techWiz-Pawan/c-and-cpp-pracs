#include<stdio.h>
#include<string.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[10] = "easy", store_str[10];

        // for(int i = 0; str[i]; i++)
        // {
        //     store_str[i] = str[i];
        // }
        strcpy(store_str, str);     // using builtin function

        printf("The string store in another array: ");
        printf("%s", store_str);

    printf("\n");
    return 0;
}