#include <iostream>
using namespace std;
#define Pi 3.14159

class Circle
{
    private:
        double radius;
    
    public:
        void setRadius(double r)
        {
            radius = r;
        }
        double getRadius()
        {
            return radius;
        }
       virtual double getArea()
        {
            double area;
            area = Pi*radius*radius;
            return area;
        }
};

class ThickCircle : public Circle
{
    private:
        double thickness;
    
    public:
        void setThickness(double t)
        {
            thickness = t;
        }
        double getThickness()
        {
            return thickness;
        }
        double getArea()
        {       
            double area = Pi * ((getRadius() + thickness) * (getRadius() + thickness) - (getRadius() * getRadius()));

            return area;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    Circle c1;
    ThickCircle t1;

    Circle* ptr = &t1;

    c1.setRadius(10.0);
    t1.setThickness(2);

    cout << "Area of Circle: " << ptr->getArea() << endl;

    cout << "\n";
    return 0;
}
