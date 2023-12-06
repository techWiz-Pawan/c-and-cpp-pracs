#include <iostream>     // LCM of 3 number
using namespace std;

int LCM_ofThree_Num(int a, int b, int c, int max);
int LCM_ofThree_Num(int a, int b, int c, int max)
{
    int i;
    for ( i = 0; i < a*b*c; i++)
    {
        if(max%a == 0 && max%b == 0 && max%c == 0)      // max = 15
        {
            return max;
        }
        max++;
    }
    return 0;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        int a=10, b=12, c=15, max;

        max = (a > b)?((a > c) ? a : c):((b > c) ? b : c);

        cout << max << endl;
        int LCM = LCM_ofThree_Num(a, b, c, max);
        cout << "\nLCM of three number " << LCM << endl;

    cout << "\n";
    return 0;
}
