#include <iostream>
#include <list>

using namespace std;

int main()
{   
    list<int>l1 = {30, 60, 40, 20};

    // how to access element
    // [] and at() are not there in the list

    // method_1 : implicit iterator
    for(auto x:l1)
        cout << x << " ";
    cout << endl; 

    // method_2 : explicit iterator
    list<int>::iterator i1;
    for(i1 = l1.begin(); i1 != l1.end(); i1++)
        cout << *i1 << " ";
    cout << endl;

    cout << l1.front() << " " << l1.back() << endl;
    cout << l1.size() << endl;

    return 0;
}