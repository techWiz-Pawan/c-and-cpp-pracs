                        /////       implement Bubble sort       /////
#include <iostream>
using namespace std;
void Bubble_Sort(int arr[], int l);

void Bubble_Sort(int arr[], int l)
{
    // every round largest element will get placed ar right position that is last position.
    int round, i, temp;
    for (round = 1; round < l; round++)     // total 9 rounds chalega
    {
        for (i = 0; i < l - round; i++)
        {
            if(arr[i] > arr[i+1])       // for every round array ka left aur right check hoga
            {
                // if condition says that left wala bada hai tho SWAPPING
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
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
    
    Bubble_Sort(arr, size);
    cout << "printing sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}