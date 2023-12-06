#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Function_1()       // adjacent_find()
{
    vector<int> v1 = {2, 5, 7, 3, 1, 12, 12, 3, 45};
    int x = *adjacent_find(v1.begin(), v1.end());
    // * operator is used to get the value from the iterator returned by adjacent_find. which is in an address so dereferencing is required
    cout << "Pair found with element " << x << endl;

    vector<int> v2 = {10,3,5,5,11,34,21};
    vector<int>:: iterator it;
    it = adjacent_find(v2.begin(), v2.end());
        if(it == v2.end())
            cout << "\nPair NOT found" << endl;
        else
            cout << "Pair found with element " << *it << endl;

}

void Function_2()       // all_of()
{
    vector<int> v1 = {10,20,14,50,18,6,12};
    if(all_of(v1.begin(), v1.end(), [](int a)->bool{return (a%2 == 0);}))
        cout << "All are EVEN" << endl;
    else   
        cout << "All are ODD" << endl;
}

void Function_3()       // any_of()
{
    vector<int> v1 = {10,20,13,50,18,6,12};
    if(any_of(v1.begin(), v1.end(), [](int a) -> bool{return (a%2 != 0);}))
        cout << "ODD Number exist" << endl;
    else
        cout << "No ODD Number present" << endl;
}

void Function_4()       // binary_search
{
    vector<int> v1 = {1,4,4,6,7,7,21,53,112,117,119,200};
    if(binary_search(v1.begin(), v1.end(), 112))
        cout << "Element Found" << endl;
    else
        cout << "Element NOT Found" << endl;
}

void Function_5()       // lower_bound and upper_bound
{
    vector<int> v1 = {1,4,4,6,7,7,21,53,112,117,119,200};
    vector<int>::iterator it;
    // lower_bound matlab vahi element ya just usse kum wala element mil jaye
    it = lower_bound(v1.begin(), v1.end(), 7);  // element = 7 
    cout << "Element just greater then or equal to 7 is at index : " << it - v1.begin() << endl;

    it = upper_bound(v1.begin(), v1.end(), 7);  // element = 7
    // uper_bound matlab just uss element se bada value 
    cout << "Element just greater then 7 is at index : " << it - v1.begin() << endl;
}

void Function_6()       // max_element() and min_element()
{
    vector<int> v1 = {1,4,4,6,7,7,21,53,112,117,119,200};
    vector<int>:: iterator it;

    it = max_element(v1.begin(), v1.end()-4);
    cout << "MAX element : " << *it << endl;

    it = min_element(v1.begin()+3, v1.end());
    cout << "MIN element : " << *it << endl;
}

void Function_7()       // for_each() matlab har ek changes karu e.g. sub square ho jaye
{
    vector<int> v1 = {1,4,4,6,7,7,21,53,112,117,119,200};

    for_each(v1.begin(), v1.end(), [](int a) -> void {cout << a << " - " << a*a << endl;});

}

void Function_8()       // generate()
{
    vector<int> v1(10);
    generate(v1.begin(), v1.end(), []() -> int{static int i; ++i; return i*i;});

    for(auto num:v1)
        cout << num << " "; 
    cout << endl;

}

void Function_9()   // generate_n()
{
    vector<int> v1(10);

    generate_n(v1.begin(), 5, []() -> int {static int i; ++i; return i*i;});
    generate_n(v1.begin()+5, 5, []() -> int {static int j; ++j; return j*j*j;});

    for(auto num:v1)
        cout << num << " ";
    cout << endl;

}

void Function_10()      // count() and count_if()
{
    vector<int> v1 = {1,4,4,6,7,4,21,53,112,117,119,200};
    // count()
    cout << count(v1.begin(), v1.end(), 4) << endl;

    // count_if()
    cout << count_if(v1.begin(), v1.end(), [](int x) -> bool {return x > 15;});
}

void Function_11()      //find()
{   
    vector<int> v1 = {1,4,4,6,7,4,21,53,112,117,119,200};
    vector<int>:: iterator it;

    it = find(v1.begin(), v1.end(), 112);

    if(it == v1.end())      // it iterate hote hote last pahunch gaya matlab elemnt nahi mila hoga
        cout << "Element Not Found" << endl;
    else
        cout << "Element Found" << endl;

}

void Function_12()      // find_if()
{
    
}

int main()
{
    // call the function to know about them
    Function_10();

    return 0;
}