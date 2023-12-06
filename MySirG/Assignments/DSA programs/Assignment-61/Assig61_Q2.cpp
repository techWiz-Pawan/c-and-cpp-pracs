#include <iostream>
#include <string>
using namespace std;


template <typename X>
void make_array(X s[], int size)
{
    cout << "Enter names: ";
    for (int i = 0; i < size; i++)
    {
        cin >> s[i];
    }
    
}

int main()
{
    string str[5];

    make_array(str, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}