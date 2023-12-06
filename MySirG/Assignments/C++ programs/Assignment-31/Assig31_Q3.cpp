#include <iostream>
using namespace std;

int* rotate_array(int arr[], int size, int dir, int n=1);
int* rotate_array(int arr[], int size, int dir, int n=1)
{
    if(dir == -1)
    {
        int store[n-1], i;
        for ( i = 0; i < size; i++)
        {
            if(i < n-1)
                store[i] = arr[i];
        }
        for ( i = 0; i < size; i++)
        {
            arr[i] = arr[(n-1)+i];
        }
        
        
        
        
    }
    else if(dir == 1)
    {

    }
    return arr;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    int arr[5] = {3, 6, 1, 8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int i;
    cout << "rotate array toward left: \n";
    int* left = rotate_array(arr, size, -1, 2);
    for ( i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "rotate array toward right: \n";
    int* right = rotate_array(arr, size, 1, 2);
    for ( i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
        

    cout << "\n";
    return 0;
}
