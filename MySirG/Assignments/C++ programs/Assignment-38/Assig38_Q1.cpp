#include <iostream>
using namespace std;

class person
{
    private:
        string name;
        int age;
    protected:
        void setName(string NAME)
        {
            name = NAME;
        }
        void setAge(int AGE)
        {
            age = AGE;
        }
        string getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};

class employee : public person
{
    private:
        double salary;
    
    public:
        void setEmployee(string n, int a, double s)
        {
            setName(n);
            setAge(a);
            salary = s;  
        }
        void showEmployee()
        {
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        employee emp;
        emp.setEmployee("Easy", 24, 50000);
        emp.showEmployee();
        

    cout << "\n";
    return 0;
}
