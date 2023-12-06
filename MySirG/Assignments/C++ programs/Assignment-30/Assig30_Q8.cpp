#include<iostream>
using namespace std;
const double PI = 3.14159;

float area(float);
int area(int, int);
double area(double, double);

float area(float r)
{
    return PI * r*r;
}

int area(int l, int b)
{
    return l*b;
}

double area(double b, double h)
{
    return (b*h)/2;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        float radius; 
        int length, breadth; 
        double height, base;

        cout << "Enter the radius: ";
        cin >> radius;
        cout << "The area of circle: ";
        double circle_area = area(radius);
        cout << circle_area << endl;

        cout << "Enter the length and breadth: ";
        cin >> length >> breadth;
        cout << "The area of rectangle: ";
        int rectangle_area = area(length, breadth);
        cout << rectangle_area << endl;

        cout << "Enter the base and height: ";
        cin >> base >> height;
        cout << "The area of triangle: ";
        double triangle_area = area(base, height);
        cout << triangle_area << endl;

    cout<<"\n";
    return 0;
}
