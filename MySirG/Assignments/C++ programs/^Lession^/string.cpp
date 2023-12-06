#include<iostream>
using namespace std;

void store_string(char str[][50], int n)
{
    int i;
    cout << "Enter " << n << " strings: \n";
    for ( i = 0; i < n; i++)
    {
        cin.getline(str[i], 50);
    }
    
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        char str[3][50];
        int i;

        store_string(str, 3);

        for ( i = 0; i < 3; i++)
        {
            cout << str[i] << " ";
        }
        
        

    cout << "\n";
    return 0;
}
