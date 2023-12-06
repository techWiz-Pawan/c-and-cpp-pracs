                    /////       implement Insertion sorting       /////

#include <iostream>
using namespace std;

void insertion_Sort(int arr[], int l);

///```   Using swaping method   ```///
// void insertion_Sort(int arr[], int l)
// {
//     int i, j, temp;
//     for ( i = 0; i < l; i++)
//     {
//         j = i;
//         while (j>0 && arr[j-1] > arr[j])
//         {
//             temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;

//             j--;
//         }
        
//     }
    
// }


///```   Using temp variable method   ```///
void insertion_Sort(int arr[], int l)
{
    int i, j, temp;
    for ( i = 1; i < l; i++)
    {
        temp = arr[i];
        for ( j = i-1; j > 0; j--)
        {
            if(temp < arr[j])
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j] = temp;
        
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
    
    insertion_Sort(arr, size);
    cout << "printing sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}