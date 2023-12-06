#include <iostream>
using namespace std;

void merge_array(int arr1[], int arr2[], int size1, int size2);
void merge_array(int arr1[], int arr2[], int size1, int size2)
{
    int size = size1 + size2;
    int i, merge[size];
    for ( i = 0; i < size1; i++)
    {
        merge[i] = arr1[i];
    }
    
    for ( i = size1; i < size; i++)
    {
        merge[i] = arr2[i-size1];
    }

    cout << "After merging: \n";
    for ( i = 0; i < size; i++)
    {
        cout << merge[i] << " ";
    }

}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        int arr1[5] = {1, 2, 3, 4, 5};
        int arr2[5] = {6, 7, 8, 9, 10};

        int size1 = sizeof(arr1)/sizeof(arr1[0]);
        int size2 = sizeof(arr2)/sizeof(arr2[0]);
        
        merge_array(arr1, arr2, size1, size2);

    cout << "\n";
    return 0;
}
