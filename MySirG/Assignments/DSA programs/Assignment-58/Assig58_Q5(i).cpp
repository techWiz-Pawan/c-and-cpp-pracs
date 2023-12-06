                /////       implement Quick sorting using recursion      /////

#include <iostream>
using namespace std;
void Quick_Sort(int arr[], int low, int high);
inline void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int LOC = low;
// first check the arr[loc] < arr[high] kyuki startting me LOC left me hota hai 
// tho arr[right] se compare karwayege tho agar condition satisfied hai tho just do high++;

    while (low < high)
    {
        while (low < high && arr[LOC] < arr[high])
        high--;

        if(low == high)
            break;

        // if arr[LOC] > arr[high]
        swap(arr[LOC], arr[high]);
        // the line LOC = high; is used to update the position of the pivot element.
        // to ensure pivot element is place at its correct position.
        // which have to be done after swapping
        LOC = high;

        while(low < high && arr[low] < arr[LOC])
            low++;
        
        // agar left == right ho jayega tho hum break kara denge kyuki swappping ke jarurat nahi
        if(low == high)
            break;
        
        // if arr[low] > arr[LOC]
        swap(arr[low], arr[LOC]);
        LOC = low;
    }
    
    return LOC;
}
                            
void Quick_Sort(int arr[], int low, int high)
{
    // jub left ye right array me sirft ek he element bacha hai tub ye condition fail hoga 
    if(low < high)  
    {
        int pivot = partition(arr, low, high);

        Quick_Sort(arr, low, pivot-1);
        // after base case trigerred then recursion k saath jo pending tha matlab right 
        // wala array back track hoga aur right side wala array v isi tarah sort ho jayega
        Quick_Sort(arr, pivot+1, high);
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
    // ya se sabse pahele bada array wala sove karega baad me 
    // recursively chote array ko solve karne k liye recursively solve hote rahega 
    // aur ek time aye ga saare sort ho jayege
    Quick_Sort(arr, 0, size-1);     // Q_Sort(arr, 0, 9)

    cout << "printing sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
