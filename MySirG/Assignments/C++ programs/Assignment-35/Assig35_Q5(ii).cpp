#include <iostream>
using namespace std;

class Number
{
    private:
        int x, y, z;
    
    public:
        Number(int a, int b, int c) : x(a), y(b), z(c)
        {}
        Number operator-();
        void showData();
};

Number Number::operator-()
{
    Number temp(0, 0, 0);
    temp.x = -(x);
    temp.y = -(y);
    temp.z = -(z);

    return temp;
}

void Number::showData()
{
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    Number n1(1, 2, 3), n2(0, 0, 0);

    n2 = -n1;

    cout << "number in negative form: " << endl;
    n2.showData();

    cout << "\n";
    return 0;
}



