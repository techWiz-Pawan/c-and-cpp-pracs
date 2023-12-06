#include<iostream>      // swap two int variable using call by reference
using namespace std;
void swap(int &, int &);        // declaration
void swap(int &p, int &q)       // definition
{
    int temp;
    temp = p;
    p = q;
    q = temp;

}

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int x = 6, y = 9;
        
        cout << "before:-\n";
        cout << "x = " << x << " " << "y = " << y << endl;
        
        swap(x, y);        // calling

        cout << "after:-\n";
        cout << "x = " << x << " " << "y = " << y << endl;

    cout<<"\n";
    return 0;
}



