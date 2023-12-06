#include <iostream>
#include <array>            // header for STL array
using namespace std;        // STL library is included here

int main()
{
    array<int, 4>a1 = {10, 50, 30, 90};     // making an array of integer type and object name 'a1'
    array<string, 3>a2 = {"Bot", "noob", "pro"};

    // accessing element
    // Method_1 using '[]' subscript operator giski overloading class me ke hogi
    for (int i = 0; i < 4; i++)
        cout << a1[i] << " ";
    cout << endl;
    
    //Method_2 using at()
    try
    {
        for (int i = 0; i < 5; i++)
            cout << a1.at(i) << " ";
        cout << endl;  
    }
    catch(std::out_of_range e)
    {
        cout << "\nerror : Array out of index Exception.\n";
    }
    
    // Method_3 using implicit iterator | using range_for loop
    for (auto x:a1)
        cout << x << " ";
    cout << endl;

    // Method_4 using explicit iterator

    array<int, 4>::iterator i1;
    for ( i1 = a1.begin(); i1 != a1.end(); i1++)
    {
        cout << *i1 << " ";
    }
    cout << endl;

    array<int, 4>::reverse_iterator i2;
    for(i2 = a1.rbegin(); i2 != a1.rend(); i2++)
    {
        cout << *i2 << " ";
    }
    cout << endl;

    array<int, 4>::const_iterator i3;
    i3 = a1.cbegin();
    //  *(i3+2) = 70;                   // yaha pe aisa aiisgn nahi nahi kar sakta kyuki const hai 
      *(a1.begin()+2) = 70;               // aisa karta hu tho value change kar sakta hu kyuki begin likha hai
    cout << *(i3+2) << endl;

    cout << a1.back() << endl;
    cout << a1.front() << endl;

    

    return 0;
}
