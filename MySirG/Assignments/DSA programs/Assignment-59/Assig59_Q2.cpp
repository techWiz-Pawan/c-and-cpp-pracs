#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(int arr[], int key, int low, int high);
int binary_search(int arr[], int key, int low, int high)
{
        if(low > high)
            return -1;

        int mid = low + (high - low)/2;
        if(arr[mid] == key)
            return mid;     // agar mid me hai key value the return mid
        
        if(key < arr[mid])  // left subarray
            return binary_search(arr, key, low, mid-1);     // agar left array me BS kar se mila tho return after function ends
        else
            return binary_search(arr, key, mid+1, high);
      
}

int main()
{
    int arr[] = {3, 5, 8, 10, 2, 4, 6, 9, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 499;
    // this is bulild in function to 
    sort(arr, arr+size);

    int result = binary_search(arr, key, 0, size-1);
    if (result != -1)
        cout << key << " found";
    else
        cout << key << " NOT found";

    cout << endl;
    return 0;
}