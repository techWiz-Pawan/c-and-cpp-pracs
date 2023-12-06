#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;
    
    public:
        friend istream& operator>>(istream&, Time &);
        friend ostream& operator<<(ostream&, Time&);
        Time operator=(Time);
        void showData()
        {
            cout << "h = " <<hour << " m = " << min << " s = " << sec << endl;
        }

};

istream& operator>>(istream& din, Time& t)
{
    din >> t.hour >> t.min >> t.sec;

    return din;
}

ostream& operator<<(ostream& dout, Time& t)
{
    dout << "h = " <<t.hour << " m = " << t.min << " s = " << t.sec << endl;

    return dout;
}

Time Time::operator=(Time t)
{
    hour = t.hour;
    min = t.min;
    sec = t.sec;

    return *this;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1, t2;
        cout << "Enter the time: ";
        cin >> t1;
        
        cout << "Your time is: ";
        cout << t1;

        t2 = t1;
        t2.showData();



    cout << "\n";
    return 0;
}
