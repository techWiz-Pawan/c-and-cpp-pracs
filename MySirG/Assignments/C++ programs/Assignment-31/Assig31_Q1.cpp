#include<iostream>
using namespace std;
int* sortArray(int arr[], int n, bool decide);

int* sortArray(int arr[], int n, bool decide)
{
    int i, j, temp;
    if(decide)
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            
        }

        return arr;
        
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                if(arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            
        }

        return arr;
    }

}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        int arr[5] = {5, 3, 8, 2, 4};
        int size = sizeof(arr)/sizeof(arr[0]);

        cout << "Ascending order: \n";
        int *a = sortArray(arr, size, true);
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
        
        cout << "\n\nDescending order: \n";
        int *d = sortArray(arr, size, false);
        for (int i = 0; i < size; i++)
        {
            cout << d[i] << " ";
        }


    cout << "\n";
    return 0;
}
