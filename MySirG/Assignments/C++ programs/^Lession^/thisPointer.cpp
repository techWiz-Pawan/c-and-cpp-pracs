#include <iostream>
using namespace std;

class Item
{
    private:
        int a, b;
    
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void showData()
        {
            cout << "a = " << a << " b = " << b << endl;
        }

        Item greater(Item obj)
        {
            // return ((a + b) > (obj.a + obj.b)) ? *this : obj;   (or)

            if((a + b) > (obj.a + obj.b))
                return *this;
            else
                return obj; 
        }

};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Item i1, i2, i3;

        i1.setData(2, 3);
        i2.setData(5, 6);

        i3 = i1.greater(i2);
        

    cout << "\n";
    return 0;
}
