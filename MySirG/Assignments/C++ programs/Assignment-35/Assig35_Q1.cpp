#include <iostream>

using namespace std;

class complex
{
    private:
        int a, b;
    
    public:
        complex operator+(complex);
        complex operator-(complex);
        complex operator*(complex);
        bool operator==(complex);
};

complex complex::operator+(complex c)
{
    complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;

    return temp;
}

complex complex::operator-(complex c)
{
    complex temp;
    temp.a = a - c.a;
    temp.b = b - c.b;

    return temp;
}

complex complex::operator*(complex c)
{
    complex temp;
    temp.a = (a * c.a) - (b * c.b);
    temp.b = (a * c.b) + (b * c.a);

    return temp;
}

bool complex::operator==(complex c)
{
    if(a == c.a && b == c.b)
        return true;
    else
        return false;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        complex c1, c2, c3;

        c3 = c1 + c2;
        c3 = c1 - c2;
        c3 = c1 * c2;
        if(c1 == c2)
            cout << "Equal" << endl;
        else
            cout << "Not Equal" << endl;
        

    cout << "\n";
    return 0;
}
