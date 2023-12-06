#include <iostream>
using namespace std;

class Distance
{
    private:
        int km, m, cm;
    
    public:
        Distance(int x, int y, int z) : km(x), m(y), cm(z)
        {}

        Distance operator+(Distance);
        void showData();

        Distance operator--();
        Distance operator--(int);

};

Distance Distance::operator+(Distance d)
{
    Distance temp(0, 0, 0);
    temp.cm = cm + d.cm;
    temp.m = m + d.m + temp.cm/100;
    temp.cm = temp.cm%100;
    temp.km = km + d.km + temp.km/1000;
    temp.m = temp.m%1000;

    return temp;
}

Distance Distance::operator--()
{
    cm--;
    if(cm < 0)
    {
        cm = cm + 100;
        m = m - 1;

        if(m < 0)
        {
            m = m + 1000;
            km = km - 1;
        }
    }

    
    return *this;
}

Distance Distance::operator--(int)
{
    Distance temp = *this;;
    cm--;

    if(cm < 0)
    {
        cm = cm + 100;
        m = m - 1;

        if(m < 0)
        {
            m = m + 1000;
            km = km - 1;
        }
    }

    return temp;    

}

void Distance::showData()
{
    cout << "km = " << km << " m = " << m << " cm = " << cm << endl;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Distance d1(2, 500, 0), d2(1, 300, 70), d3(0, 0, 0);
        
        d3 = d1 + d2;
        d3.showData();

        --d3;
        d3.showData();
        
        d3--;
        d3.showData();

    cout << "\n";
    return 0;
}
