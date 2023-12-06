#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;

    public:
        Time(int h, int m, int s)
        {
            hour = h;
            min = m;
            sec = s;
        }

        Time operator+(Time);
        void showData();
        
};

Time Time::operator+(Time t)
{
    // revise
    Time temp(0, 0, 0);
    temp.sec = sec + t.sec;
    temp.min = min + t.min+temp.sec/60;
    temp.sec = temp.sec%60;

    temp.hour = hour + t.hour+temp.min/60;
    temp.min = temp.min%60;

    return temp;
}

void Time::showData()
{
    cout << "h = " << hour << " m = " << min << " s = " << sec << endl;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1(1, 50, 25), t2(3, 22, 14), t3(0, 0, 0);
        
        t3 = t1 + t2;

        t3.showData();

    cout << "\n";
    return 0;
}
