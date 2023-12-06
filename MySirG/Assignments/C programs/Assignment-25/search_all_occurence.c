#include<stdio.h>
void search_all_occurence(char* str, char ch, int *arr);

void search_all_occurence(char* str, char ch, int *arr)
{
    int i, cnt=0;
    for ( i = 0; str[i]; i++)
    {
        if(str[i] == ch)
        {
            /* here dont use "arr[i] = i" it will give incorrect o/p so use another variable 
            let say cnt = 0 it will become variable for arr[] */
            arr[cnt] = i;       
            cnt++;
            
        }
    }

    printf("List of indices of occurence");
    for ( i = 0; i < cnt; i++)
    {
        printf("\n%c occured at %d", ch, arr[i]);
    }
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[20] = "occurence", ch = 'c';
        int arr[10];

        search_all_occurence(str, ch, arr);
        

    printf("\n");
    return 0;
}
