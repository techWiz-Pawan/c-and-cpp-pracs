#include <iostream>
#include <string.h>
using namespace std;
void fun1();

char* strupr(char s[])
{
    int i;
    for ( i = 0; s[i]; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    return s;
    
}

void fun1()
{
    int age, vote;
    char nationality[30];
    try
    {
        cout << "Enter you correct age: ";
        cin >> age;
        if(age < 18)
            throw 1;
        
        cout << "Enter you Nationality: ";
        cin.ignore();
        cin.getline(nationality, 30);
        if(strcmp(strupr(nationality), "INDIAN"))
        {
            throw nationality;
        }

        cout << "\nVote for you favourite fruit...\n";
        cout << "1. Apple\n";
        cout << "2. Banana\n";
        cout << "3. orange\n";
        cout << "4. Mango\n";

        cin >> vote;
        if(vote < 1 || vote > 4)
            throw 2.0;      // int and char ka he throw karte hai baaki sub catch all me jayega
        cout << "Thanks for your vote\n";
    }
    catch(int e)
    {
        cout << "Not eligible too young\n";
    }
    catch(char * ch)
    {
        cout << "you have to be INDIAN\n";
    }
    catch(...)
    {
        cout << "Invalid Vote number\n";
    }
    cout << "\nEND\n";
    
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    fun1();

    cout << "\n";
    return 0;
}
