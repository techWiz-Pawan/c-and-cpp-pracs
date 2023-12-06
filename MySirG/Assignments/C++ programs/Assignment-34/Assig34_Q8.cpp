#include <iostream>
using namespace std;

class date
{
    private:
        int day, month, year;
    
    public:
        date(int d, int m, int y) : day(d), month(m), year(y)
        {}
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        date date1(28,  4, 1999);


    cout << "\n";
    return 0;
}
