#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // creating //

    vector<int> marks = {45, 96, 48, 35, 76};
    string name = "abc";

    // STL me bahut saare function bane hue hai gisme se make_pair() function hai

    pair<string, vector<int>> p1;
    p1 = make_pair(name, marks);

    pair<int, string> p2(10, "xyz");

    pair<int, int> p3(45, 78);

    // how to access //

    // cout << p1.first << ", " << p1.second << endl;       // this will not work coz second value is vector and u cant simply use cout need for loop

    cout << p1.first << " ";
    for(auto x:p1.second)
        cout << x << " ";
    cout << endl;

    cout << p2.first << ", " << p2.second << endl; 
    cout << p3.first << ", " << p3.second << endl; 

    return 0;
}