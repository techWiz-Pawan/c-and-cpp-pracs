#include <iostream>
using namespace std;
bool linear_search(int arr[], int size, int key);
bool linear_search(int arr[], int size, int key)
{
    if(size == 0)
        return -1;
    else
    {
        for (int i = 0; i < size; i++)
        {
            if(key == arr[i])
                return 1;
        }
        return -1;
        
    }

}

int main()
{
    int arr[10] = {3, 5, 8, 10, 2, 4, 6, 9, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 6;

    if (linear_search(arr, size, key) == 1)
        cout << key << " element exist";

    else
        cout << key << " element doesn't exist";

    cout << endl;
    return 0;
} 