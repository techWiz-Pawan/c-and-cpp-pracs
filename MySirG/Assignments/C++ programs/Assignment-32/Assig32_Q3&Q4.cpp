#include <iostream>
using namespace std;

class Date
{
    private:
        int day, mon, yr;
    
    public:
        void setDate(int x, int y, int z)
        {
            day = x;
            mon = y;
            yr = z;
        }

        void showDateFormate1()
        {
            cout << "d = " << day << " m = " << mon << " y = " << yr << endl;
        }
        void showDateFormate2(int m)
        {
            string month[] = {"jan", "feb", "mar", "apr", "may", "jun", "july", "aug", 
                            "sep", "oct", "nov", "dec"};
            cout << "\n\nd = " << day << " m = " << month[m-1] << " y = " << yr << endl;
        }

};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Date t1;
        t1.setDate(28, 12, 1999);

        t1.showDateFormate1();
        t1.showDateFormate2(12);
        

    cout << "\n";
    return 0;
}
