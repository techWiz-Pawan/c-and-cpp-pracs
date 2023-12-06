#include<stdio.h>
#include<string.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i;
        char str[50];
        // char str[10] = "easy";
        printf("Enter a string: ");
        fgets(str, 50, stdin);
        str[strlen(str)-1] = '\0';  // we have to add this or else it will count new-line operator 
        
        for (i = 0; str[i]; i++);
            printf("length = %d", i);

    printf("\n");
    return 0;
}