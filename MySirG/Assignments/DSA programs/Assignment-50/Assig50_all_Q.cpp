                    ////      queue using Linked list       ////
#include <iostream>
#include <stdio.h>
#define EMPTY_LIST 1
using namespace std;

struct node
{
    int item;
    node* next;
};

class Queue
{
    private:
        node* front;    // start
        node* rear;     // last
    public:
        Queue();
        void insert(int);
        int rear_view();
        int front_view();
        void Delete();
        int count();

        Queue(Queue &);
        Queue& operator=(Queue &);

        ~Queue();
};

Queue::Queue()
{
    // initially empty hai
    front = NULL;
    rear = NULL;
}

void Queue::insert(int data)
{
    node* n = new node;
    n->item = data;
    n->next = NULL;     // queue me insertion sirf rear me hota hai matlab last isliye naya element insert hoga tho vo last element hoga isliye uska next me NULL hai
    if(rear == NULL)        // agar rear NULL hai tho front v NULL hoga
    {
        // list is empty
        front = n;
        rear = n;
    }
    else    // if list is not empty
    {
        rear->next = n;     // rear last node hoga tho uske next me n ayega
        rear = n;   // last node abb vo new node hai tho usko rear point karega
    }
}

int Queue::rear_view()
{
    if(rear == NULL)
        throw EMPTY_LIST;
    else
        return rear->item;
}

int Queue::front_view()
{
    if(front == NULL)
        throw EMPTY_LIST;
    else
        return front->item;
}

void Queue::Delete()
{
    if(front == NULL)
        throw EMPTY_LIST;
    if(front == rear)
    {
        delete front;
        rear = NULL;
        front = NULL;
    }
    else
    {
        node* t;
        t = front;
        front = front->next;
        delete t;
    }
    
}

int Queue::count()
{
    node* t = front;
    int cnt = 0;
    while(t)
    {
        cnt++;
        t = t->next;
    }

    return cnt;
}

Queue::Queue(Queue &q)
{
    front = rear = NULL;    // new Linked list k front aur rear me NULL taki vo list empty ho copy karne k liye

    node* t = q.front;
    while(t != NULL)        // jub tak source list ka t NULL nahi hota tub tak chale
    {
        insert(t->item);     
        t = t->next;
    }
}

Queue& Queue::operator=(Queue &q)
{
    while(front != NULL)
        Delete();
    node* t = q.front;
    while(t)
    {
        insert(t->item);
        t = t->next;
    }
    return *this;
}

Queue::~Queue()
{
    while(front)
    {
        Delete();
    }
}