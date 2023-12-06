#include <iostream>
using namespace std;

class A
{
    public:
        void f1()
        {
            cout << "\nf1 of A";
        }
};

class B : public A
{
    public:
        void f2()
        {
            cout << "\nf2 of B";
        }  
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        A *p;
        B* q;
        B o2;

        q->f1();
        q->f2();
        

    cout << "\n";
    return 0;
}
