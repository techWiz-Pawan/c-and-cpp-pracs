#include <iostream>
using namespace std;
#define pi 3.14159

class circle
{
    private:
        double radius;

    public:
        void setRadius(double r)
        {
            radius = r;
        }

        void getRadius()
        {
            cout << "Radius = " << radius << endl;
        }

        double circleArea()
        {
            return (pi*radius*radius);
        }

        double circleCircumference()
        {
            return (2*pi*radius);
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        circle c;

        c.setRadius(9);
        c.getRadius();

        cout << "\nArea of a circle: " << c.circleArea() << endl;

        cout << "\nCircumference of a circle: " << c.circleCircumference() << endl;

    cout << "\n";
    return 0;
}
