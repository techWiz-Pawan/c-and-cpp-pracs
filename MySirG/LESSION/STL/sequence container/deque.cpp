#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d1 = {45, 63, 23, 78, 88};

    // Accessing deque elements
    // method_1 : using subscript operator '[]'

    for (unsigned int i = 0; i < d1.size(); i++)
        cout << d1[i] << " ";
    cout << endl;

    // method_2 : using at()

    for (unsigned int i = 0; i < d1.size(); i++)
        cout << d1.at(i) << " ";
    cout << endl;
    
    // method_3 : using Implicit iterator
    for(auto x:d1)
        cout << x << " ";
    cout << endl;

    // method_4 : using explicit iterator
    deque<int>::iterator i1;
    for(i1 = d1.begin(); i1 != d1.end(); i1++)
        cout << *i1 << " ";
    cout << endl;

    // methods of deque
    
    // assign()
    deque<int> d2;
    d2.assign({45, 323, 64, 88});            // aisa v assign kar sakta hu
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // empty()
    cout << "isEmpty = " << d2.empty() << endl;

    // back()
    cout << "back = " << d2.back() << endl;

    // front
    cout << "front = " << d2.front() << endl;

    // push_front()
    d2.push_front(100);
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // emplace_front()
    d2.push_back(999);
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // pop_front()
    d2.pop_front();
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // pop_back()
    d2.pop_back();
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // emplace_front
    d2.emplace_front(111);
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // emplace_back
    cout << "emplace back of 900 : ";
    d2.emplace_back(900);
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // emplace()
    cout << "emplace() 101 at d2.begin() : ";     // [d2.begin()] <-- this is for location where you want to store
    d2.emplace(d2.begin(), 101);
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // insert() 
    d2.insert(d2.begin()+2, 3, 0);
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    // erase()
    d2.erase(d2.begin()+1);
    for(auto x:d2)
        cout << x << " ";
    cout << endl;
    
    // swap()
    deque<int> d3 = {10, 20, 30, 40, 50};
    d2.swap(d3);
    cout << "after swapping: \n";
    cout << "d2 = ";
    for(auto x:d2)
        cout << x << " ";
    cout << endl;

    cout << "d3 = ";
    for(auto x:d3)
        cout << x << " ";
    cout << endl;

    // size()
    cout << "size of d1 = " << d1.size() << endl;
    cout << "size of d2 = " << d2.size() << endl;
    cout << "size of d3 = " << d3.size() << endl;

    // clear()
    d3.clear();
    cout << "using clear() : d3 = ";    
    for(auto x:d3)
        cout << x << " ";
    cout << endl;

    return 0;
}