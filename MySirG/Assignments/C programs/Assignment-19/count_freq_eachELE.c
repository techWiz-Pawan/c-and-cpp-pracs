#include<stdio.h>
void count_freq_ofEach_ELE(int a[], int l);
void count_freq_ofEach_ELE(int a[], int l)
{
    int i, j, cnt, b[10];
    for ( i = 0; i < l; i++)
    {   
        cnt=1;
        if(a[i] != -1)
        {
            for ( j = i+1; j < l; j++)
            {
                
                if(a[i] == a[j])
                {
                    cnt++;                
                    a[j] = -1;
                }
            
            }
            b[i] = cnt;
        }
           
    }

    printf("The frequency of elements: ");
    for ( i = 0; i < l; i++)
    {
        if(a[i] != -1)
        {
            printf("\n%d occured %d time\n", a[i], b[i]);
        }

    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int arr[10] = {7, 4, 2, 2, 1, 6, 7, 3, 3, 5};
        int size = sizeof(arr)/sizeof(arr[0]);

        count_freq_ofEach_ELE(arr, size);
        

    printf("\n");
    return 0;
}