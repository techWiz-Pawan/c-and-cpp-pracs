#include <iostream>
using namespace std;
void prime_factor(int num);
void prime_factor(int num)
{
    int i=2;
        while (num != 0)        //  as long as num is non-zero (or) --> (num > 1)
        {
            if(num%i == 0)
            {
                cout << i << "  ";
                num = num/i;
                
            }
            i++;
        }
    
    
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        int num = 42;
        prime_factor(num);

    cout << "\n";
    return 0;
}
