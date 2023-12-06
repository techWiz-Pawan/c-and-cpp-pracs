// x raise to power y
#include<iostream>
using namespace std;
int raise2power(int, int);

int raise2power(int a, int n)      // a^n
{
    if(n == 0)                            // base case
        return 1;                         // a^0 = 1

    int p = a * raise2power(a, n-1);        // recursive relation
    return p;
}

/*
    *****   without recursion   *****
    
    int raise2power(int x, int y)
    {
        int result = 1;
        for (int i = 0; i < y; i++) {
            result *= x;
        }
        return result;
    }

*/ 

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int x, y;
        cout << "Enter x and y value: ";
        cin >> x >> y;

        int result = raise2power(x, y);
        cout << "Ans: " << result;

    cout<<"\n";
    return 0;
}

