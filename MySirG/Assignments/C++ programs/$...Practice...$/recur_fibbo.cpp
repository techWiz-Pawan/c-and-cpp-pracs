#include<iostream>
using namespace std;
int fibbo(int);

int fibbo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;

    return fibbo(n-1) + fibbo(n-2);
}

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int num;
        cout << "Enter a number: ";
        cin >> num;
        
        cout << fibbo(num);

    cout<<"\n";
    return 0;
}
