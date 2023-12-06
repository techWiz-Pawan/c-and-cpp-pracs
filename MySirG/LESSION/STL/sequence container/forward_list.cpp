#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int>fl = {12, 45, 78, 56, 30};
    forward_list<int>f2 = {112, 415, 718, 516, 310};
    // accessing elements
    // method_1 : using implicit iterator

    cout << "using implicit iterator:- \n";
    for(auto x:fl)
        cout << x << " ";
    cout << endl;

    // method_2 : using explicit iterator
    cout << "using explicit iterator:- \n";
    forward_list<int>::iterator i1;
    for(i1 = fl.begin(); i1 != fl.end(); i1++)
        cout << *i1 << " ";
    cout << endl;

    // using clear method :
    f2.clear();
    cout << "f2 list is cleared using clear():- \n";
    cout << "f2 : ";
    for(auto x:f2)
        cout << x << " ";
    cout << endl;

    cout << "0 -> full | 1 -> empty \n";
    cout << "result : " << fl.empty() << endl;

    fl.reverse();
    cout << "reverse function applied:- \n";
    for(auto x:fl)
        cout << x << " ";
    cout << endl;

    return 0;
}