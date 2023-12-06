#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;

    public:
        Time(int h, int m, int s) : hour(h), min(m), sec(s)
        {}
        bool operator>(Time);
};

bool Time::operator>(Time t)
{
    if(hour > t.hour)
        return true;
    else if(hour == t.hour && min > t.min)
        return true;
    else if(hour == t.hour && min == t.min && sec == t.sec)
        return true;
    else 
        return false;

}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1(1, 50, 25), t2(3, 22, 14);
        
        if(t1 > t2)
            cout << "t1 is greater than t2" << endl;
        else
            cout << "t2 is greater than t1" << endl;

    cout << "\n";
    return 0;
}
