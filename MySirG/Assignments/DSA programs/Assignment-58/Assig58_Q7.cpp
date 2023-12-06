                                // Use merge sort //
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
        float getSalary()  const
        {
            return salary;
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

void conquer(Employee emp[], int low, int mid, int high)
{
    int leftArr_size = mid - low + 1;
    int rightArr_size =  high - mid; 

    Employee* left = new Employee[leftArr_size];
    Employee* right = new Employee[rightArr_size];


    for(int l = 0; l < leftArr_size; l++)
        left[l] = emp[low + l];
    for(int h = 0; h < rightArr_size; h++)
        right[h] = emp[mid+1+h];

    int i=0, j=0, k = low;
    while(i < leftArr_size && j < rightArr_size)
    {
        if(left[i].getSalary() < right[j].getSalary())
        {
            emp[k] = left[i];
            i++;
            k++;
        }
        else
        {
            emp[k] = right[j];
            j++;
            k++;
        }
    }  

    while(i < leftArr_size)
        emp[k++] = left[i++];

    while(j < rightArr_size)
        emp[k++] = right[j++]; 

    delete []left;
    delete []right;
    
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
    cout << "Enter number of employee: ";
    cin >> cap;
    Employee* e = new Employee[cap];

    // setting data
    for (int i = 0; i < cap; i++)
    {
        e[i].setEmployee_detail();
    }
    
    // sort employee salary using merge sort(divide & conquer)
    divide(e, 0, cap-1);

    for (int i = 0; i < cap; i++)
    {
        e[i].showEmployee_detail();
    }

    

    cout << endl;
    delete []e;
    return 0;
}