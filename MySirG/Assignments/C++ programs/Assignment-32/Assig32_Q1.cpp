#include <iostream>
using namespace std;

class complex
{
    private:
        int real, imag;

    public:
        void setComplex(int x, int y) 
        {
            real = x;
            imag = y;
        }
        

        void showComplex()
        {
            cout << real << " + " << imag << "i" << endl;
        }
        
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        complex c1;

        c1.setComplex(5, 10);
        

        c1.showComplex();
        

    cout << "\n";
    return 0;
}
