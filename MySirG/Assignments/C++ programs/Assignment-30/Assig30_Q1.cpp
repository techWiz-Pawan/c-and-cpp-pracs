#include<iostream>
using namespace std;

int checkPrime(int);

int checkPrime(int n)
{
    int i;
    for ( i = 2; i < n; i++)
    {
        if(n%i == 0)
            return 1;
        
    }
    return 0;
    
}

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int num;
        cout << "Enter two number: ";
        cin >> num;

        int result = checkPrime(num);

        if (result)
            cout << num << " is NOT prime number.";
        else
            cout << num << " is prime number.";

    cout<<"\n";
    return 0;
}
