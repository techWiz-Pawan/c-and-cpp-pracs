#include <iostream>
using namespace std;

class MyException : public exception
{
    public:
        const char* what() const throw()
        {
            return "can't divide by zero";      // yaha par hum error msg return kar sakte hai
        }
};

void fun1();

void fun1()
{
    int a, b;
    try
    {
        cout << "Enter two number: ";
        cin >> a >> b;

        if(b == 0)
            throw *(new MyException);       // uss object ka address ka dereferencing throw hoga
            // or you can write " MyException() "
        
        int c = a/b;
        cout << "Result: " << c;
    }
    catch(MyException ex)
    {
        cout << ex.what();
    }
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        fun1();

    cout << "\n";
    return 0;
}
