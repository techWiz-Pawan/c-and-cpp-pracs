#include <iostream>
/*
    in case of,
    pre-increment ->  if we write 
                                    " Time operator++() " 
                    then complier consider this as pre-increment bydefault.

        so for post-increment -> we write
                                " Time operator++(int) "
    post-increment me internally hum int mention karte hai tho compiler usse obj++ samaghta hai.
    note: actual me int me koi argument pass karna nahi hai mughe ye sirf ++obj / obj++ 
            distinguish karne ka hack hai bus.
*/

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
        void showTime();
        Time operator++();
        Time operator++(int);

};

void Time::showTime()
{
    cout << "h = " << hour << " m = " << min << " s = " << sec << endl;
}

Time Time::operator++()         // pre-increment
{
    sec++;
    min = min+sec/60;
    sec = sec%60;
    hour = hour+min/60;
    min = min%60;

    return *this;
}

Time Time::operator++(int)      // post-increment
{
    Time temp = *this;
    sec++;
    min = min+sec/60;
    sec = sec%60;
    hour = hour+min/60;
    min = min%60;

    return temp;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1(1, 50, 25);
        
        cout << "Time before any operation: " << endl;
        t1.showTime();

        ++t1;
        t1.showTime();

        t1++;
        t1.showTime();
        

    cout << "\n";
    return 0;
}
