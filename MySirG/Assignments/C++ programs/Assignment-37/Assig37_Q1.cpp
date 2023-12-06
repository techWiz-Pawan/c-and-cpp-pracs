#include <iostream>
#include <string.h>
using namespace std;

class person
{
    private:
        string name;
        int age;

    public:
        person(string name, int age)
        {
            // "this->name"  => matlab uss member ko acces karna jo private mai hai
            this->name = name;
            this->age = age;
        }

        void showData()
        {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        person p1("xyz", 32);
        
        p1.showData();

    cout << "\n";
    return 0;
}
