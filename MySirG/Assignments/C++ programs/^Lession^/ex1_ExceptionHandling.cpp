#include <iostream>
using namespace std;
void fun1();

void fun1()
{
    int age, vote;
    try
    {
        cout << "Enter you correct age: ";
        cin >> age;
        if(age < 18)
            throw 1;
        cout << "\nVote for you favourite fruit...\n";
        cout << "1. Apple\n";
        cout << "2. Banana\n";
        cout << "3. orange\n";
        cout << "4. Mango\n";

        cin >> vote;
        cout << "Thanks for your vote\n";
    }
    catch(int e)
    {
        cout << "Not eligible";
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
