                                // stack using array //
#include <iostream>
#include <stdio.h>

using namespace std;

class Stack
{
    private:
        int capacity;
        int top;
        int *ptr;
    
    public:
        Stack();
        Stack(int);     // parameterize constructor
        void createStack(int);
        void push(int);
        bool isFull();
        bool isEmpty();
        int peek();
        void pop();

        Stack(Stack &);
        Stack& operator=(Stack &);

        ~Stack();
};

Stack::Stack()      // constructor
{
    capacity = 0;
    top = -1;
    ptr = NULL;
}

Stack::Stack(int size)
{
    capacity = size;
    top = -1;
    ptr = new int[capacity];
}

void Stack::createStack(int size)
{
    capacity = size;
    top = -1;           // filhal stack khali hai tho -1, 0 nahi likh sakte kyu ke 0 se start hota hai
    if(ptr != NULL)     // agar createStack multiple time call kiya tho memory leak ho sakta hai isliye ye line likhte hai
        delete []ptr;
    ptr = new int[capacity];
}

bool Stack::isFull()
{
    return (top == capacity-1); // "capacity-1" coz counting start from 0. 
}

bool Stack::isEmpty()
{
    return (top == -1);
}

void Stack::push(int data)      // insert in stack
{
    try
    {
        if(isFull())
            throw 1;

        top++;
        ptr[top] = data; 
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Stack Overflow, Stack is full" << endl;
    }   
}

int Stack::peek()
{
    // peek top element of stack
    if(isEmpty())
        cout << "Stack Underflow, Stack is empty" << endl;
    else
        return ptr[top];
}

void Stack::pop()
{
    if(isEmpty())
        cout << "Stack Underflow, Stack is empty" << endl;
    else
        top--;
}

Stack::Stack(Stack &s)
{
    capacity = s.capacity;
    top = s.top;
    ptr = new int[capacity];
    for (int i = 0; i <= top; i++)
    {
        ptr[i] = s.ptr[i];
    }
}

Stack& Stack::operator=(Stack &s)
{
    if(ptr != NULL)
        delete []ptr;
        
    capacity = s.capacity;
    top = s.top;
    ptr = new int[capacity];
    for (int i = 0; i <= top; i++)
    {
        ptr[i] = s.ptr[i];
    }

    return *this;
}

Stack::~Stack()
{
    if(ptr != NULL)
        delete []ptr;
}