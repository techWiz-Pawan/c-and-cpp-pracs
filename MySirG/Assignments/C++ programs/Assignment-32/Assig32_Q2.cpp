#include <iostream>
using namespace std;

class Time
{
    private:
        int hr, min, sec;
    
    public:
        void setTime(int x, int y, int z)
        {
            hr = x;
            min = y;
            sec = z;
        }

        void showTime()
        {
            cout << hr << "hr " << min << "min " << sec << "sec" << endl;
        }

};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Time t1;
        t1.setTime(3, 45, 20);

        t1.showTime();
        

    cout << "\n";
    return 0;
}
