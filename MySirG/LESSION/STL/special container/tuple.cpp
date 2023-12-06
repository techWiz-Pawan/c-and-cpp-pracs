#include <iostream>
#include <utility>
#include <tuple>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // creating tuple

    tuple <int, double, char> t1(55, 2.5, 'a');
    tuple<int, string, string> t2(2, "rohan", "soham");

    // using make_tuple function
    tuple<int, string, string> t3;
    t3 = make_tuple(5, "hello", "world");

    // accessing element
    // tuple access karna is little bit different so we need "get<index>(object)" <-- ye use hota hai

    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;
    cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << endl;
    cout << get<0>(t3) << " " << get<1>(t3) << " " << get<2>(t3) << endl;
    cout << endl;

    return 0;
}