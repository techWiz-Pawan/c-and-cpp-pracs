#include <iostream>
#include <string>

using namespace std;

int main()
{
    // iterator wale saare method hai [ begin , end | rbegin , rend | cbegin , cend | crbegin , crend ]

    // creating string
    string s1 = "EasyWays";

    // ***** Accessing string ***** //

    // method_1 : normal method using cout 
    cout << "using normal method : \n";
    cout << "name = " << s1 << endl;

    // method_2 : using [] operator
    cout << "\nusing [] operator : \n";
    for(unsigned int i=0; i<s1.size(); i++)
        cout << s1[i] << " ";
    cout << endl;

    // method_3 : using at() iterator
    cout << "\nusing at() function : \n";
    for(unsigned int i=0; i<s1.size(); i++)
        cout << s1.at(i) << " ";
    cout << endl;

    // method_4 : using implicit iterator
    cout << "\nusing Implicit iterator : \n";
    for(auto x:s1)
        cout << x << " ";
    cout << endl;

    // method_5 : using explicit iterator
    cout << "\nusing explicit iterator : \n";
    string::iterator i1;
    for(i1 = s1.begin(); i1 != s1.end(); i1++)
        cout << *i1 << " ";
    cout << endl;

    // ***** Methods in strings ***** //
    cout << endl;
    cout << s1.front() << endl; 

    cout << s1.back() << endl;

    s1.append(" Brand :)");
    for(auto x:s1)
        cout << x << " ";
    cout << endl;
    
    // insert
    s1.insert(2, "@@@");        // 2nd position pe ye string insert ho
    cout << "after inserting @@@ at 2nd position : \n" << s1 << endl;

    s1.replace(4, 3, "PRO");        // ( iss position se start hoga, aur 3 word replace hoga, string name)
    cout << s1 << endl;

    cout << s1.substr(4, 3) << endl;        //  mughe uss string ka substring nikalna hai tho 4th position se 3 letter ka substring milega

    // + operator
    s1 = s1 + " hello";
    cout << s1 << endl;

    return 0;
}