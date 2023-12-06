#include <iostream>
using namespace std;

class student
{
    private:
        int roll_no;
        string name;
    
    public:
    // taking input in constructor
        student()
        {
            cout << "Enter student roll number: ";
            cin >> roll_no;

            cout << "Enter student name: ";
            cin >> name;
        }

        void showDetail()
        {
            cout << "\n" << "Roll No.: " << roll_no << endl;
            cout << "\n" << "Name.: " << name << endl;
        }

};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    student s1, s2;
        s1.showDetail();
        s2.showDetail();

    cout << "\n";
    return 0;
}
