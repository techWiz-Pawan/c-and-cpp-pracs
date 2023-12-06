#include <iostream>
#include <queue>        // priority queue k liye header <queue> he lagta hai
#include <vector>
#include <deque>
#include <string>

using namespace std;

class employee
{
    private:
        int emp_id;
        string name;
        float salary;
    
    public:
        employee(int i, string N, float s) : emp_id(i), name(N), salary(s)      // constructor
        {}

        float getSalary()
        {
            return salary;
        }

        void showEmployee()
        {
            cout << "Emp_id : " << emp_id << " | Name : " << name << " | salary : " << salary << endl;
        }

};

class compareSalary         // functor bana raha hu
{
    public:
    /* yaha function call operator bana raha hu 'operator()(args)' isme pahela wala () matlab vo function overloading hai
             aur dushra wala () argument k liye. e.g. operaator+() or operator=() or operator[]() or operator-(), ...etc*/
        bool operator()(employee &e1, employee &e2)     // yaha par argument me two employee ka reference liya hu        
        {
            return e1.getSalary() < e2.getSalary();    // aur logic return kar raha hu  ascending me arrange hoga yaha isliye '<'
        }

        /*
            The reason why < (less than) is used instead of > (greater than) in the compareSalary functor for the 
            priority_queue is to prioritize employees in ascending order of salary. tho jo last wala top manajayega aur vo return hoga

            In the priority_queue, elements are sorted in such a way that the element with the highest priority comes first. 
            In this case, the priority is determined by the comparison function inside the compareSalary functor.
        */

};

int main()
{
    priority_queue <int> pq1;                       // vector (bydefault)
    priority_queue <string, deque<string>> pq2;     // queue

    priority_queue<employee, deque<employee>, compareSalary> pq3;           // ye bana hai non-primitive type se

    /*
        The line of code pq3.push(*(new employee(1, "BOT", 20000))); is used to create a new employee object dynamically 
        using the new operator, and then push that object into the pq3 priority queue. and * is use for dereferencing coz
        vo hume reference provide karta hai and then vo push hoga
    */

    pq3.push(*(new employee(1, "BOT", 20000)));
    pq3.push(*(new employee(2, "NOOB", 50000)));
    pq3.push(*(new employee(3, "PIRO", 150)));
    pq3.push(*(new employee(4, "NEWBIE", 60000)));

    employee e = pq3.top();
    e.showEmployee();    

/*
// for integer value
    pq1.push(20);
    pq1.push(40);
    pq1.push(60);
    pq1.push(80);
    pq1.push(100);

    pq1.pop();      // top element pop hoga
    cout << "front = " << pq1.top() << endl;

// for string value
    pq2.push("asdf");
    pq2.push("mnbv");
    pq2.push("uiop");
    pq2.push("fghj");

    pq2.pop();
    cout << "top ele = " << pq2.top() << endl;
    */

    return 0;
}