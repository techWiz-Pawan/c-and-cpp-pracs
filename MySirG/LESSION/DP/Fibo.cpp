#include <iostream>
#include <vector>

using namespace std;

int fibo(vector<int>DP, int n)
{
    if(DP[n] != -1)
        return DP[n];

    if(n == 0 || n == 1)
        DP[n] = n;
    else
        DP[n] = fibo(n-1) + fibo(n-2);
}

int main()
{   
    int n;
    cin >> n;
    
    vector<int> DP;
    DP.assign(n, -1);

    for (int i = 0; i < n; i++)
    {
        cout << fibo(DP, i) << " ";
    }
    

    return 0;
}