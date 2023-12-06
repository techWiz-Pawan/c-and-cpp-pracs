#include <iostream>
#include <cmath>
using namespace std;

class coordinate
{
    private:
        double x, y;

    public:
        void setCoordinate(double a, double b)
        {
            x = a;
            y = b;
        }

    // FORMULA: sqrt((x2-x1)^2 + (y2-y1)^2)
        double getDistance()      // origin zero
        {
            double dis = sqrt(x*x + y*y);
            return dis;
        }
        double getDistance(coordinate c)
        {
            double dis = sqrt((x-c.x)*(x-c.x) + (y-c.y)*(y-c.y));
            return dis;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        coordinate c1, c2;
        c1.setCoordinate(4, 7);
        c2.setCoordinate(2, 5);

        cout << "\nDistance with 0 arg: " << c1.getDistance() << "unit";      // 8
        cout << "\nDistance with 1 arg: " << c1.getDistance(c2) << "unit";    // 2

    cout << "\n";
    return 0;
}
