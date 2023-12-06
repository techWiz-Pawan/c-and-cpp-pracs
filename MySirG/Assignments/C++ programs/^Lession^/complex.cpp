/* example of passing and returning objects */
#include <iostream>
using namespace std;

class complex
{
    private:
        int a, b;
    
    public:
        void setData(int x, int y);
        static complex addComplex(complex, complex);
        void showData();
           
};

void complex::setData(int x, int y)
{
    a = x;
    b = y;
}

complex complex::addComplex(complex c1, complex c2)
{
    complex sum; 
    sum.a = c1.a - c2.a;
    sum.b = c1.b - c2.b;

    return sum;
}

void complex::showData()
{
    cout << a << " + " << b << "i" << endl;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    complex c1, c2, add;
    c1.setData(8, 9);
    c2.setData(2, 4);

    // add complex number
    add = complex::addComplex(c1, c2);      // call by object
    add.showData();    

    cout << "\n";
    return 0;
}







 
