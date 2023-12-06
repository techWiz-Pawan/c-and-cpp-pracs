#include<stdio.h>                       //  Bubble SORT  //
void sort_array(int*, int);

void sort_array(int* ptr, int size)
{
    int i, j, temp;
    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-i-1; j++)
        {
            if(ptr[j+1] < ptr[j])
            {
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
        
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    

}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int ptr[5] = {4, 1, 3, 2, 5};
        int size = sizeof(ptr)/sizeof(ptr[0]);

        sort_array(ptr, size);
        

    printf("\n");
    return 0;
}
