#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;
    
    public:
        friend istream& operator>>(istream&, Time &);
        friend ostream& operator<<(ostream&, Time&);

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

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1;
        cout << "Enter the time: ";
        cin >> t1;
        
        cout << "Your time is: ";
        cout << t1;

    cout << "\n";
    return 0;
}
