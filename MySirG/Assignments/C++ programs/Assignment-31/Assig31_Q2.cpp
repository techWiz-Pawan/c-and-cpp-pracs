#include<iostream>
#include<string.h>
using namespace std;

void inputString(char str[][20], int n)
{
    int i;
    cout << "Enter " << n << " strings: \n";
    for ( i = 0; i < n; i++)
    {
        cin.getline(str[i], 20);
    }
    
}

void sortStrings(char str[][20], int n, bool flag)
{
    int i,j;

    if(flag)
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                char temp[100];
                if(strcmp(str[i], str[j]) > 0)
                {
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                }
            }
            
        }
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                char temp[100];
                if(strcmp(str[i], str[j]) < 0)
                {
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                }
            }
            
        }
    }
    
    
}

void sortArrayString(char str[][20], int n, bool flag)
{
    if(flag)
    {
        sortStrings(str, n, true);
    }
    else
    {
        sortStrings(str, n, false);
    }
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        char str[3][20];
        inputString(str, 3);

        sortArrayString(str, 3, true);
        cout << "strings sorted in ASCENDING order: \n";
        for (int i = 0; i < 3; i++)
        {
            cout << str[i] << "  ";
        }
        

        sortArrayString(str, 3, false);
        cout << "\nstrings sorted in DESENDING order: \n";
        for (int i = 0; i < 3; i++)
        {
            cout << str[i] << "  ";
        }

    cout << "\n";
    return 0;
}
