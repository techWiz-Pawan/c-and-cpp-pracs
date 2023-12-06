#include <iostream>
using namespace std;

class Time
{
    private:
        int hr, min, sec;

    public:
        void setTime(int hr, int min, int sec)
        {
            this->hr = hr;
            this->min = min;
            this->sec = sec;
        }

        void showTime()
        {
            cout << "hr = " << hr << " min = " << min << " sec = " << sec << endl;
        }

        bool operator<(Time t)
        {
            if(hr < t.hr)
                return true;
            if(hr == t.hr && min < t.min)
                return true;
            if(hr == t.hr && min == t.min && sec < t.sec)
                return true;
            else 
                return false;
        }

        void showArray(Time* t[], int size)
        {
            int i;
            
        }


};

Time* createTime_ARR(int size)
{
    Time* t_ptr = new Time[size];  // dynamically created array

    return t_ptr;
}

void printTimeArray(Time t[], int size)
{
    for (int i = 0; i < size; i++)
    {
        t[i].showTime();
    }
    
}

void sortTimeArr(Time t[], int size)
{
    int i, j;
    Time temp;
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size - i; j++)
        {
            if(t[j+1] < t[j])
            {
                temp = t[j+1];
                t[j+1] = t[j];
                t[j] = temp;
            }
        }
        
    }
    
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        int size = 5, i;
        Time* t_ptr = createTime_ARR(size);


    cout << "\n";
    return 0;
}
