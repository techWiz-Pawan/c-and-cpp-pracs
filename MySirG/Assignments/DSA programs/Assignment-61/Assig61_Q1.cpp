#include <iostream>
using namespace std;

template <typename X>
X isGreater(X a, X b)
{
    if(a > b)
        return a;
    return b;
}


int main()
{
    double d1, d2;
    cout << "Enter two data: ";
    cin >> d1 >> d2;

    double result = isGreater(d1, d2);
    cout << result << " is Greater." << endl;

    return 0;
}
