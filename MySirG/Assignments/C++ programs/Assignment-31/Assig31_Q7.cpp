#include <iostream>
#include <stdio.h>
using namespace std;
#define pi 3.14159

double volume(int l, int w, int h);
double volume(int r, int h);
double volume(int r);

double volume(int l, int w, int h)
{
    return l*w*h;
}

double volume(int r, int h)
{
    return ((1.0/3.0)*pi*r*r*h);
}

double volume(int r)
{
    return ((4.0/3.0)*pi*r*r*r);
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        double V_cuboid, V_cone, V_sphere;
        int pick, l, w, h, r;

        cout << "\nwhat you want to find:- " << endl;
        cout << "1. Volume of cuboid " << endl;
        cout << "2. Volume of cone " << endl;
        cout << "3. Volume of sphere \n" << endl;

        cout << "Enter you choice: ";
        cin >> pick;

        switch (pick)
        {
        case 1:
            cout << "Input length, width, height: ";
            cin >> l >> w >> h; 
            
            V_cuboid = volume(l, w, h);

            cout << "Volume of cuboid: " << V_cuboid;
            break;

        case 2:
            cout << "Input radius and height: ";
            cin >> r >> h; 
            
            V_cone = volume(r, h);

            cout << "Volume of cone: " << V_cone;
            break;

        case 3:
            cout << "Input radius: ";
            cin >> r; 
            
            V_sphere = volume(r);

            cout << "Volume of sphere: " << V_sphere;
            break;
        default:
        cout << "Invalid input" << endl;
        cout << "Try Again" << endl;
            break;
        }

    cout << "\n";
    return 0;
}
