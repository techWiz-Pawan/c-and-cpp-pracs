#include <iostream>
using namespace std;

class Time  // here you cant write "time" because of name conflict instead write "Time"
{
    private:
        int hr, min, sec;
    
    public:
        Time(int h, int m, int s) : hr(h), min(m), sec(s)
        {}
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1(3, 34, 32);
        

    cout << "\n";
    return 0;
}
