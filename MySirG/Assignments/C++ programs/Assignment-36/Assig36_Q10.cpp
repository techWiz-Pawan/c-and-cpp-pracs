#include <iostream>
using namespace std;

class student
{
    private:
        int roll_no;
        string name;
        int age;
    public:
        void setStudent(int roll, string s, int Age)
        {
            roll_no = roll;
            name = s;
            age = Age;
        }

        bool operator==(student s)
        {
            if(roll_no == s.roll_no && name == s.name && age == s.age)
                return true;
            else
                return false;
        }

        void showData()
        {
            cout << "roll no: " << roll_no << endl;
            cout << "Name   : " << name << endl;
            cout << "age    : " << age << endl;
            cout << endl;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    student s1, s2;
    s1.setStudent(1, "easy", 20);
    s2.setStudent(2, "ways", 21);

    s1.showData();
    s2.showData();

    if(s1 == s2)
        cout << "same student" << endl;
    else
        cout << "different students" << endl;

    cout << "\n";
    return 0;
}
