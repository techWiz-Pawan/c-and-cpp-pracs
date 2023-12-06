#include <iostream>
using namespace std;

class complex
{
    private:
        int a,b;

    public:
        complex(int x, int y) : a(x), b(y)
        {}
        friend complex operator+(complex, complex);
        friend complex operator-(complex);
        // similarly operator- and operator* 
        void showData();

};

complex operator+(complex c1, complex c2)
{
    complex temp(0, 0);
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;

    return temp;

}

void complex::showData()
{
    cout << "a = " << a << " b = " << b << endl;
}

                    //////      unary friend operator        //////
complex operator-(complex c)
{
    complex temp(0, 0);
    temp.a = -c.a;
    temp.b = -c.b;

    return temp;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        complex c1(2, 3), c2(5, 6), c3(0, 0);

        c3 = c1 + c2;
        c3.showData();    

        c1 = -c1;
        cout << "After negating the real and imaginary:- \n";
        c1.showData();

    cout << "\n";
    return 0;
}
