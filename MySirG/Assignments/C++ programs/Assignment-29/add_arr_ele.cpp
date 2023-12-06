#include<iostream>
using namespace std;

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int size = sizeof(arr)/sizeof(arr[0]);
        int i, sum=0;

        for ( i = 0; i < size; i++)
        {
            sum = sum + arr[i];
        }cout<<"Given ARRAY: ";
        for ( i = 0; i < size; i++)
        {
            cout<<arr[i]<<"  ";
        }
        
        cout<<"\naddition of all elements in given array: "<<sum;

    cout<<"\n";
    return 0;
}
