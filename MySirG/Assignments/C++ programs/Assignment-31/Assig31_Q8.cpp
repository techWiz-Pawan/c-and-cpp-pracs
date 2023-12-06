#include <iostream>
#include <string.h>
using namespace std;

void print_subString(char str[], int startIndex, int endIndex = -1)
{
    int i;
    if(endIndex == -1)
        endIndex = strlen(str);
    for ( i = startIndex; i <= endIndex; i++)
    {
        cout << str[i];
    }
    
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        char str[100] = "I love coding";
        int startIndex = 2, endIndex = 5; 

        cout << "\nsubstring with endIndex" << endl;
        print_subString(str, 2, 5);

        cout << "\nsubstring without endIndex" << endl;
        print_subString(str, 2);
        

    cout << "\n";
    return 0;
}
