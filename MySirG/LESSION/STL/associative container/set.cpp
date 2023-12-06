#include <iostream>
#include <set>

using namespace std;

class Descending        // Functor -> Descending
{
    public:
        bool operator()(const int &a, const int &b) const
        {
            return (a > b);
        }
};

int main()
{
    set<int> s1 = {10, 20, 10, 10, 30, 40, 50};
    for(auto x:s1)
        cout << x << " ";
    cout << endl;

    // to get the value in desending order i use functor
    cout << "\nUsing Functor to get the element in desending order : \n";
    set<int, Descending> s2 = {10, 20, 30, 40, 50};
    for(auto x:s2)
        cout << x << " ";
    cout << endl;

    cout << "isEmpty : " << s1.empty() << endl;

    cout << "count 10 : " << s1.count(10) << endl; // count me 1 he ayega kyuki no duplicate is allowed

    s2.emplace(70);
    for(auto x:s2)
        cout << x << " ";
    cout << endl;

    set<int, Descending>::iterator it1 = s2.begin();
    set<int, Descending>::iterator it2 = s2.end();
    it1++;
    it2--;
    
    s2.erase(it1, it2);
    for(auto x:s2)
        cout << x << " ";
    cout << endl;

    return 0;
}