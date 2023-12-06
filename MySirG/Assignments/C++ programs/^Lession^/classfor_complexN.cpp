/* 
Define a class to represent complex number. store real and imaginary part. 
Also define methods to set values of real and imaginary part of a complex number. 
Define one more method to display complex number. 
*/

/*
    hint_1: jub v question me 'set' karne bola tho user se input nahi lena hai
*/

#include<iostream>
using namespace std;

class complexN
{
    private:
        int a, b;       // instance(object) member variable
    
    public:
        void setValue(int x, int y) // local variable hai x & y also call formal argument
        {
            a = x;
            b = y;
        }

        void display_complexN()
        {
            cout << "a = " << a << " b = " << b << endl;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        

    cout << "\n";
    return 0;
}
