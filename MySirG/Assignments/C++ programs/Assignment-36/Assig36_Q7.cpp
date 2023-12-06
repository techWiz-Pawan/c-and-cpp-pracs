#include <iostream>
using namespace std;

class Integer
{
    private:
        int n;
    public:
        Integer(int x) : n(x)
        {}
        friend bool operator!(Integer);
        friend bool operator==(Integer, Integer);

        void showData()
        {
            cout << "n = " << n;
        }
};
bool operator!(Integer i)
{
    Integer temp(0);
    if(i.n != 0)
        return false;
    else
        return true;
}

bool operator==(Integer i1, Integer i2)
{
    if(i1.n == i2.n)
        return true;
    else
        return false;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    Integer i1(5), i2(55);
    //i1 = !i1;
    //i1.showData();

    cout << "checking equality..." << endl;
    if(i1 == i2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    cout << "\n";
    return 0;
}
