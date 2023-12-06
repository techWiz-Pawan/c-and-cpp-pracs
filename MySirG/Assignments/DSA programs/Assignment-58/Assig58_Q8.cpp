                    ///// sort employee names using quick sort /////
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
        string getNames()  const
        {
            return name;
        }
        void showEmployee_detail() const;
};

 void Employee::setEmployee_detail()
 {
    cout << endl;
    cout << "Set Employee ID: ";
    cin >> emp_id;

    cout << "Set Employee Name: ";
    cin >> name;

    cout << "Set Employee salary: ";
    cin >> salary; 
 }

 void Employee::showEmployee_detail()    const
{
    cout << endl;
    cout << "Employee ID: " << emp_id;

    cout << " | Employee Name: " << name;

    cout << " | Employee salary: " << salary;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(Employee emp[], int low, int high)
{
    int LOC = low;

    while (low < high)
    {
        // when LOC is at low side
        while(low < high && emp[LOC].getNames() < emp[high].getNames())
            high--;         // decrement high noob

        if(low == high)
            break;

        if(emp[LOC].getNames() > emp[high].getNames())
            swap(emp[LOC], emp[high]);
            LOC = high;

        while(low < high && emp[LOC].getNames() > emp[low].getNames())
            low++;

        if(low == high)
            break;
        
        if(emp[LOC].getNames() < emp[low].getNames())
            swap(emp[LOC], emp[low]);
            LOC = low;
                
    }

    return LOC;
    
}

void Quick_sort(Employee emp[], int low, int high)
{
    if(low >= high)
        return;

    int pivot = partition(emp, low, high);
    Quick_sort(emp, low, pivot-1);
    Quick_sort(emp, pivot+1, high);
}

int main()
{
    int cap;
    cout << "Enter Number of employee: ";
    cin >> cap;

    Employee* e = new Employee[cap];

    for (int i = 0; i < cap; i++)
    {
        e[i].setEmployee_detail();
    }

    Quick_sort(e, 0, cap-1);
    
    for (int i = 0; i < cap; i++)
    {
        e[i].showEmployee_detail();
    }
    

    cout << endl;
    return 0;
}

