#include <iostream>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main()
{
    map<int, string> m1 = {
        {1, "abc"},
        {2, "def"},
        {3, "ghi"}, 
        {4, "jkl"},
        {5, "mno"}
    };

    // accessing 
    for(auto e:m1)
        cout << e.first << " " << e.second << endl;
    cout << endl;

    // using explicit iterator
    map<int, string>:: iterator it;
    for(it = m1.begin(); it != m1.end(); it++)
        cout << it->first << " " << it->second << endl;
    cout << endl;

    // accessing specific data using key
    cout << m1.at(3) << endl;

    // to chack if key present or not

    cout << m1.count(6) << endl;        // if not exit then 0 print hoga
    cout << m1.count(5) << endl;        // if key present then 1 print hoga

    // if you need to add element then you need 'pair' stl
    pair<int, string> p1 = {6, "easy"};

    m1.emplace(p1);
    for(auto e:m1)
        cout << e.first << " " << e.second << endl;
    cout << endl;

    // or i can use make pair function to insert
    m1.emplace(make_pair(6, "ways"));
    for(auto e:m1)
        cout << e.first << " " << e.second << endl;
    cout << endl;

    return 0;
}