#include<iostream>      // check given term is in fibonacci
using namespace std;
int find_term_inFibo(int);

int find_term_inFibo(int n)
{
    int n1 = -1, n2 = 1, next_n, i;
    
    for ( i = 0; ; i++)
    {
        next_n = n1 + n2;
        n1 = n2;
        n2 = next_n;
        // cout << next_n << " ";

        if (next_n >= n)
        {
            if(next_n == n)
                return 0;
            else 
                return 1;
        }
    
        
    }
    
}

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int num;
        cout << "Enter a Number: ";
        cin >> num;

        int result = find_term_inFibo(num);
        if (result)
            cout << num << " is not present in fibo series.";    
        else
            cout << num << " is present in fibo series.";
        

    cout<<"\n";
    return 0;
}
