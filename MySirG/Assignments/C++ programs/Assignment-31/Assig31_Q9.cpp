#include <iostream>
using namespace std;

void swap_array(int arr1[], int arr2[], int size);
void swap_array(int arr1[], int arr2[], int size)
{
    int temp[5], i;
    for ( i = 0; i < size; i++)
    {
        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }

    cout << "\nAfter swaping:- \n";
    for ( i = 0; i < size; i++)
    {
        cout << arr1[i] << "  ";
    }
    cout << endl;
    for ( i = 0; i < size; i++)
    {
        cout << arr2[i] << "  ";
    }
    
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        int arr1[5] = {1, 2, 3, 4, 5}, i;
        int arr2[5] = {6, 7, 8, 9, 10}; 

        cout << "\nBefore swaping:- \n";
        for ( i = 0; i < 5; i++)
        {
            cout << arr1[i] << "  ";
        }
        
        cout << endl;
        for ( i = 0; i < 5; i++)
        {
            cout << arr2[i] << "  ";
        }

        swap_array(arr1, arr2, 5);
        

    cout << "\n";
    return 0;
}
