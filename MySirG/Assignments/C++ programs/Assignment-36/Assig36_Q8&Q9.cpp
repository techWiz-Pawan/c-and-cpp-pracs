#include <iostream>
using namespace std;

class Coordinate
{
    private:
        int x, y;
    public:
        Coordinate(int x, int y) : x(x), y(y)
        {}
        Coordinate operator,(Coordinate c)
        {
            Coordinate temp(0, 0);
            temp.x = c.x;
            temp.y = c.y;

            return temp;
        }
        void showData()
        {
            cout << "x = " << x << " y = " << y << endl;
        }
        friend istream& operator>>(istream&, Coordinate&);
        friend ostream& operator<<(ostream&, Coordinate&);
};

istream& operator>>(istream& din, Coordinate& c)
{
    din >> c.x >> c.y;

    return din;
}

ostream& operator<<(ostream& dout, Coordinate& c)
{
    dout << "(" << c.x << "," << c.y << ")" << endl;

    return dout;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    Coordinate c1(2, 3), c2(4, 5), c3(10, 20);

    c1 = (c2, c3);
    c1.showData();

    cout << "\nEnter Co-ordinate: ";
    cin >> c1;

    cout << "You Entered: ";
    cout << c1;

    cout << "\n";
    return 0;
}
