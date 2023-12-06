#include <iostream>
using namespace std;

class fraction
{
    private:
        long numerator;
        long denominator;

    public:
        fraction(long n=0, long d=0) : numerator(n), denominator(d)
        {
            numerator = n;
            denominator = d;
        }

        fraction operator+(fraction);

        void showData()
        {
            cout << numerator << "/" << denominator << endl;
        }

        bool operator<(fraction);
};

fraction fraction::operator+(fraction f)
{
    fraction temp;
    temp.numerator = (numerator * f.denominator) + (f.numerator * denominator);
    temp.denominator = denominator * f.denominator;

    return temp;
}

bool fraction::operator<(fraction f)
{
    if(numerator < f.numerator)
        return true;
    else
    return false;

}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        fraction f1(7, 2), f2(3, 4), f3;
        
        f1.showData();
        f2.showData();

        f3 = f1 + f2;
        f3.showData();

        if(f1 < f2)
            cout << "f1 is less then f2" << endl;
        else
            cout << "f2 is less then f1" << endl; 

    cout << "\n";
    return 0;
}
