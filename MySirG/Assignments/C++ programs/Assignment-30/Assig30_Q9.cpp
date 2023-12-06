#include<iostream>
using namespace std;

int findMax(int n1, int n2)
{
    if(n1 > n2)
        return n1;
    else 
        return n2;
}

double findMax(double r1, double r2)
{
    if(r1 > r2)
        return r1;
    else 
        return r2;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        int n1, n2, n_max;
        double r1, r2, r_max;

        cout << "Enter two integer number: ";
        cin >> n1 >> n2;
        n_max = findMax(n1, n2);
        cout << "The max number is: " << n_max << endl;

        cout << "\nEnter two real number: ";
        cin >> r1 >> r2;
        r_max = findMax(r1, r2);
        cout << "The max number is: " << r_max << endl;

    cout << "\n";
    return 0;
}
