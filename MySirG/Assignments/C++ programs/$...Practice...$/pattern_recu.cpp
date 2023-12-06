#include<iostream>
using namespace std;
void pattern_print(int);

void pattern_print(int n)
{
    if(n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    pattern_print(n-1);     // Trust 
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    

}

int main()
{
    pattern_print(5);

    cout << "\n";
    return 0;
}