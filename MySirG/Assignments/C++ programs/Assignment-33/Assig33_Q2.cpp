#include <iostream>
using namespace std;

class Time
{
    private:
        int h, m, s;

    public:
        void setTime(int, int, int);
        void showTime(); 
        void normalize();
        Time addTime(Time);
        bool is_greater(Time);
};

void Time::setTime(int x, int y, int z)
{
    h = x;
    m = y;
    s = z;
}

Time Time::addTime(Time t2)
{
    Time t;
    t.h = h + t2.h;
    t.m = m + t2.m;
    t.s = s + t2.s;

    return t;
}

void Time::showTime()
{
    cout << h << "hr " << m << "min " << s << "sec " << endl;
}

void Time::normalize()
{
    m += s/60;
    s = s%60;

    h += m/60;
    m = m%60;
    
}

bool Time::is_greater(Time t2)
{
    if(h > t2.h)
        return true;
    else if(h == t2.h && m > t2.m)
        return true;
    else if(h == t2.h && m == t2.m && s > t2.s)
        return true;
    else
        return false;

}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1, t2, t_sum;
        t1.setTime(3, 36, 61);
        t2.setTime(3, 35, 55);

        t1.showTime();

        t1.normalize();
        t2.normalize();

        t2.showTime();

        t_sum = t1.addTime(t2);
        t_sum.showTime();
        
        if(t1.is_greater(t2))
            cout << "t1 is greater than t2" << endl;
        else
            cout << "t2 is greater than t1" << endl;

    cout << "\n";
    return 0;
}
