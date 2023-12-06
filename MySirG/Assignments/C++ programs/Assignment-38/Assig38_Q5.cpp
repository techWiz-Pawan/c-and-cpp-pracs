#include <iostream>
#include <cmath>
using namespace std;

class coordinate        // parent
{
    private:
        double x, y;

    public:
        void setCoordinate(double a, double b)
        {
            x = a;
            y = b;
        }
        double getX()   {return x;}
        double getY()   {return y;}

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

        void showCoordinate()
        {
            cout << "\n(" << x << " , " << y << ")" << endl;
        }
};

class shape         // parent
{
    private:
        string shapeName;

    public:
        void setShapeName(string s)
        {
            shapeName = s;
        }
        string getShapeName()
        {
            return shapeName;
        }
};

class StraightLine : public shape
{
    private:
        coordinate A, B;

    public:
        void setLine(coordinate A, coordinate B)
        {
            this->A = A;
            this->B = B;
        }
        double getDistance()
        {
            double dis = A.getDistance(B);
            return dis;
        }
        void getLine()
        {
            A.showCoordinate();
            B.showCoordinate();
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
        cout << "\nDistance with 1 arg: " << c1.getDistance(c2) << "unit\n";    // 2

        StraightLine line;
        line.setLine(c1, c2);
        line.getLine();

    cout << "\n";
    return 0;
}
