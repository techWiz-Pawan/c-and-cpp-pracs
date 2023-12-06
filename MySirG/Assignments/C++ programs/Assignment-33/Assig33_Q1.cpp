#include <iostream>
using namespace std;

class complex
{
    private:
        int a, b;
    
    public: 
        void setData(int, int);                   //  declaration        
        complex addComplex(complex);              //  declaration            
        complex subtractComplex(complex);         //  declaration
        complex multiplyComplex(complex);         //  declaration
        void showData();                          //  declaration
};

void complex::setData(int x, int y)
{
     a = x;
     b = y;
}

/* yaha par object passing and object returning dono ho raha hai */
complex complex::addComplex(complex c2)  
{
    complex sum;
    sum.a = a + c2.a;
    sum.b = b + c2.b;

    return sum;            // object returning
}

complex complex::subtractComplex(complex c2)
{
    complex sub;
    sub.a = a - c2.a;
    sub.b = b - c2.b;

    return sub;
}

complex complex::multiplyComplex(complex c2)
{
    complex mul;
    mul.a = (a*c2.a) + ((-1)*b*c2.b);
    mul.b = (a*c2.b) + (b*c2.a);

    return mul;
}

void complex::showData()
{
    cout << a << " + " << b << "i" << endl;
}


int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */

    complex c1, c2, add, sub, mul;
    c1.setData(3, 4);
    c2.setData(2, 3);

    /*
    NOTE: if interviewer ask to explain this line.
                   |--> add = c1.addComplex(c2); <--|
        'c1' is a caller object which will call addComplex() member function. 
        In that 'c2' object is pass. 
        addComplex function ne jo v return kiya hoga 'add' as an object me store hua.  
    */    
    add = c1.addComplex(c2);  // c2 object passed.   

    sub = c1.subtractComplex(c2);

    mul = c1.multiplyComplex(c2); 

    add.showData();
    sub.showData();
    mul.showData();

    cout << "\n";
    return 0;
}