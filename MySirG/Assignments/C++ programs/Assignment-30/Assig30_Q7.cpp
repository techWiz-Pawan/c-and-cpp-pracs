#include<iostream>           // use default argument 
using namespace std;
int add(int, int, int=0);

int add(int x, int y, int z)
{
    cout << " sum of three number: ";
    return x+y+z;
}

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int x, y, z;
        cout << "Enter two number: ";
        cin >> x >> y;

        int result1 = add(x, y);
        cout << result1 << endl;

        cout << "Enter three number: ";
        cin >> x >> y >> z;

        int result2 = add(x, y, z);
        cout << result2 << endl;
        
    cout<<"\n";
    return 0;
}
