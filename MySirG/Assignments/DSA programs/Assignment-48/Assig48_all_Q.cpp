                    ////      stack using Linked list      ////
#include <iostream>
using namespace std;
#define EMPTY_STACK 1

struct node
{
    int item;
    node* next;
};

class stack
{
    private:
        node* top; 
    public:
        stack();
        void push(int);
        int peek();         // peek() will return the top's value
        void pop();
        void reverse();

        stack(stack &);
        stack& operator=(stack &);

        ~stack();
};

stack::stack()
{
    top = NULL;
}

void stack::push(int data)
{
    node* n = new node;        // ek new node bana lo push karne k liye
    n->item = data;
    n->next = top;  // n jo new node hai vo purana top node ko point kare isliye "n->next = top"
    top = n;           // fir top new node ko point karne k liye
}

int stack::peek()
{
    try
    {
        if(top == NULL)
            throw EMPTY_STACK;
        else
            return top->item;
    }
    catch(int e)
    {
        if(e == EMPTY_STACK)
            cout << "stack is empty" << endl;
    }
    
}

void stack::pop()
{
    try
    {
        if(top == NULL)
            throw EMPTY_STACK;
        else
        {
            node* t = top;
            top = top->next;
            delete []t;
        }
    }
    catch(int e)
    {
        if(e == EMPTY_STACK)
            cout << "stack is empty" << endl;
    }
    
}

void stack::reverse()
{
    stack s1;           // naya object banaya usme list k node push honge tho reverse ho jaye ga
    while(top != NULL)
    {
        s1.push(peek());
        pop();
    }
    top = s1.top;
    s1.top = NULL;
}

stack::stack(stack &s)
{
    node *t;
    s.reverse();
    t = s.top;
    while(t)
    {
        push(t->item);        // ye wala line reverse kar dega list ko jo new list me copy ho raha hai, isliye upper reverse function call kiya 
        t = t->next;    
    }
    s.reverse();            // original list ko wapas reverse call kiya taaki vo ulta se wapus sidha ho jaye list
}

stack& stack::operator=(stack &s)
{
    // jiss list me store hone wala hai agar vo empty nahi hai tho usse empty karna hoga
    if(top != NULL)     
    {
        while(top)
            pop();
    }

    node *t;
    s.reverse();
    t = s.top;
    while(top)
    {
        s.push(t->item);
        t = t->next;
    }

    s.reverse();

    return *this;
} 

stack::~stack()
{
    while(top != NULL)
    {
        pop();
    }
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */

    cout << "\n";
    return 0;
}
