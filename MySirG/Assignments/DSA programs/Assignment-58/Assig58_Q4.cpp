                    /////       implement Selection sorting       /////

#include <iostream>
using namespace std;
void selection_Sort(int arr[], int l);
int FindSmallestIndex(int arr[], int start, int end);

int FindSmallestIndex(int arr[], int start, int end)
{
    int i, sELE_index, sELE = arr[start];
    for ( i = start+1; i < end; i++)
    {
        if(arr[i] < sELE)
        {
            sELE = arr[i];
            sELE_index = i;
        }
    }
    
    return sELE_index;
}

void selection_Sort(int arr[], int l)
{
    int i, temp;
    for ( i = 0; i < l-1; i++)      // no need to check last ele kyuki last wala sorted he hoga 
    {
        int smallestELE_Index = FindSmallestIndex(arr, i, l);
        // agar smallest ele ka index i aur find karne k baad smallest index dono same hai matlab no need swapping
        if(i != smallestELE_Index)
        {
            temp = arr[i];
            arr[i] = arr[smallestELE_Index];
            arr[smallestELE_Index] = temp;
        }  
    }
    
}    


int main()
{
    int arr[] = {80,30,50,90,100,10,20,40,70,60};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "printing original array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    selection_Sort(arr, size);

    cout << "printing sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}