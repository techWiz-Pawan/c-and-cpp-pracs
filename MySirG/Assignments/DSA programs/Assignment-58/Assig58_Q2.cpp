                    /////       implement Modified Bubble sort       /////

#include <iostream>
using namespace std;
void Modified_Bubble_Sort(int arr[], int l);
void Modified_Bubble_Sort(int arr[], int l)
{
    int round, i, temp;
    bool flag;
    for ( round = 0; round < l; round++)
    {
        flag = false;
        for ( i = 0; i < l-round; i++)
        {
            // modified version me sirf agar swapping condition satisfied ho rahi hai tho
            // "flag = true" hoga
            if(arr[i] > arr[i+1])
            {
                 flag = true;
                 temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
            }
        }
        if(flag == false)
            break;
        
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
    
    Modified_Bubble_Sort(arr, size);
    cout << "printing sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}