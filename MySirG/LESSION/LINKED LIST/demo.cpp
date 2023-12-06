#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string name;
    float salary;

public:
    void setEmployee_detail();
    void getEmployee_detail() const;
    float getSalary() const
    {
        return salary;
    }
    void showSalary() const;
};

void Employee::setEmployee_detail() // setter
{
    cout << endl;
    
    cout << "Enter your ID: ";
    cin >> emp_id;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your salary: ";
    cin >> salary;

}

void Employee::getEmployee_detail() const // getter
{
    cout << endl;
    cout << "ID: " << emp_id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}

void Employee::showSalary() const
{
    cout << salary << " ";
}

void conquer(Employee emp[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    Employee *left = new Employee[n1];
    Employee *right = new Employee[n2];

    for (int i = 0; i < n1; i++)
        left[i] = emp[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = emp[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (left[i].getSalary() <= right[j].getSalary())
        {
            emp[k] = left[i];
            i++;
        }
        else
        {
            emp[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        emp[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        emp[k] = right[j];
        j++;
        k++;
    }

    delete[] left;
    delete[] right;
}

void divide(Employee emp[], int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    divide(emp, low, mid);
    divide(emp, mid + 1, high);

    conquer(emp, low, mid, high);
}

int main()
{
    int cap;
    cout << "Enter employee capacity: ";
    cin >> cap;

    Employee *e = new Employee[cap];

    for (int i = 0; i < cap; i++)
    {
        e[i].setEmployee_detail();
    }

    for (int i = 0; i < cap; i++)
    {
        e[i].showSalary();
    }
    cout << endl;

    divide(e, 0, cap - 1);

    cout << "Sorted by Salary: " << endl;
    for (int i = 0; i < cap; i++)
    {
        e[i].getEmployee_detail();
    }

    delete[] e;

    cout << endl;
    return 0;
}
