                        /////       implement Merge sorting       /////

#include <iostream>
using namespace std;
// using Divide & Conquer technique
void divide_Merge_Sort(int arr[], int low, int high);
void conquer_Merging(int arr[], int low, int mid, int high);

void conquer_Merging(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;        // n1 is the size of left subarray
    int n2 = high - mid;            // n2 is the sze of right subarray
    int*  left = new int[n1];
    int* right = new int[n2];

    for(int i=0; i<n1; i++)
        left[i] = arr[low+i];
    for(int j=0; j<n2; j++)
        right[j] = arr[mid+1+j];

    int l = 0, r = 0, k=low;
    while(l < n1 && r < n2)
    {
        if(left[l] <= right[r])
        {
            arr[k++] =  left[l++];
        }
        if(right[r] < left[l])
        {
            arr[k++] = right[r++];
        }
    }

    while(l < n1)
    {
        arr[k++] = left[l++];
    }

    while(r < n2)
    {
        arr[k++] = right[r++];
    }

    delete []left;
    delete []right;

}

void divide_Merge_Sort(int arr[], int low, int high)
{
    int mid;
    if(low >= high) // low agar  high se bada ya equal ho jata hai tho vo basecase hoga
        return;

        mid = low + (high - low)/2;

        divide_Merge_Sort(arr, low, mid);
        divide_Merge_Sort(arr, mid+1, high);
        conquer_Merging(arr, low, mid, high);
    
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
    
    divide_Merge_Sort(arr, 0, size-1);     

    cout << "printing sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}