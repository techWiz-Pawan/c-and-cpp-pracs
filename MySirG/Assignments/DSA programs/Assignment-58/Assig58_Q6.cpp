                        /////       implement Merge sorting       /////

#include <iostream>
using namespace std;
// using Divide & Conquer technique
void divide_Merge_Sort(int arr[], int low, int high);
void conquer_Merging(int arr[], int low, int mid, int high);

void conquer_Merging(int arr[], int low, int mid, int high)
{

    // creating new array for merging array dynamically  so we need pointer named merged
    // to find the size of any divided array "high - low +1".
    int* merged = new int[high - low + 1];
    int merged_size = high - low + 1;

    // idX1 means index 1 of left subarray similarly idx2 
    // aur ye dono index starting index hai dono broken array ka
    int idx1 = low;         // for tracking left subarray
    int idx2 = mid+1;       // for tracking right subarray
    int x = 0;              // for tracking merged array jo starting me zero hai

    while(idx1 <= mid && idx2 <= high)
    {
        if(arr[idx1] < arr[idx2])
        {
            merged[x] = arr[idx1];
            x++;
            idx1++;
        }
        else
        {
            merged[x] = arr[idx2];
            x++;
            idx2++;
        }    
    }

    // maan low ek array complete ho gaya hai aur dushre array me element bache hai tho vo 
    // pura ka pura insert ho jaye

    // dono while loop nahi chalega jo array k element bache honge wahi wala while chalega
    while(idx1 <= mid)               // agar 1st array me element buch gaya hai tho uske baaki k bache elements store ho jaega
    {
        merged[x] = arr[idx1];
        x++;
        idx1++;
    }

    while (idx2 <= high)            // agar 2nd array me element buch gaya hai tho uske baaki k bache elements store ho jaega
    {
        merged[x] = arr[idx2];
        x++;
        idx2++;
    }
    
    
    // abb original array k under merged array k element ko store karna hai
    // j = low because every subarray will have different starting index
    for (int i = 0, j = low; i < merged_size; i++, j++)
    {
        arr[j] = merged[i];
    }
    
}

void divide_Merge_Sort(int arr[], int low, int high)
{
    int mid;
    if(low >= high) // low agar  high se bada ya equal ho jata hai tho vo basecase hoga
        return;

        /*
            reason for not using mid=(low+high)/2 is they will give error if size is big 
            for eg; data is millions if low=1 million and high is 10 million then 
            if i add 1M + 10M which will be very bigger result so using above figure 
            1M + (10M - 1M)/2 will give 1M + 9/2 i.e. 1M + 4M => 5M lesser then 11M
        */
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