                ////            DEque using Linked list               ////
#include <iostream>
#include <stdio.h>
using namespace std;

struct node 
{
    node *prev;
    int item;
    node *next;
};

class DEque
{
    private:
        node *front;
        node *rear;
    public:
        DEque();
        void insertFront(int);
        void insertBack(int);
        void deleteFront();
        void deleteBack();

        int viewFront();
        int viewBack();

        bool isEmpty();

        DEque(DEque &);
        DEque& operator=(DEque &);

        ~DEque();
};

DEque::DEque()
{
    front = NULL;
    rear = NULL;
}

bool DEque::isEmpty()
{
    if(rear == front == NULL)
        return true;
    else
        return false;
}

void DEque::insertFront(int data)
{
    node *n = new node;
    n->item = data;
    if(front)
    {
        n->prev = NULL;
        n->next = front;
        front->prev = n;
        front = n;   
    }
    else
    {
        n->prev = NULL;
        n->next = front;        // front NULL ko point kar raha hai aur n->next last hai tho vo v NULL ko point karne lag jayega
        front = rear = n;
    }
}

void DEque::insertBack(int data)
{
    node *n = new node;
    n->item = data;

    if(rear == NULL)
    {
        n->prev = rear;         
        n->next = NULL;
        front = rear = n;
    }
    else
    {
        n->prev = rear;
        n->next = NULL;
        rear->next = n;
        rear = n;
    }
}

void DEque::deleteFront()
{
    if(front == NULL)
        cout << "UnderFlow condition, deletion can't be done" << endl;
    if(front == rear)
    {
        delete front;
        front = rear = NULL;
    }
    else
    {
        front = front->next;
        delete front->prev;
        front->prev = NULL;
    }
}

void DEque::deleteBack()
{
    if(rear == NULL)
        cout << "UnderFlow condition, deletion can't be done" << endl;
    if(rear == front)
    {
        delete rear;
        rear = front = NULL;
    }
    else
    {
        rear = rear->prev;
        delete rear->next;
        rear->next = NULL;

    }
}

int DEque::viewFront()
{
    if(front == NULL)
        cout << "Underflow condition" << endl;
    else
        return front->item;
}

int DEque::viewBack()
{
    if(rear == NULL)
        cout << "Underflow condition" << endl;
    else
        return rear->item;
}

DEque::DEque(DEque &d)      
{
    node *t;
    /*line no.: 152 --> "insertBack(t->item);" ye garbage value insert karne lagg jaye 
                        gaa islie front = rear = NULL kar k rakhte hai */
    front = NULL;       
    rear = NULL;
    if(d.front == NULL)     
        return;     // the DEque is empty so it will return nothing
    else
    {
        t = d.front;
        while(t != NULL)        // t jub last node tak pahunche ga tub t == rear bun chuka hoga jo NULL ko point kar raha hoga
        {
            insertBack(t->item);       // taa kee reverse me print naa hoo
            t = t->next;
        }
    }
}

DEque& DEque::operator=(DEque &d)
{
    // agar new list me kuch hai tho vo delete ho jaye
    while(front)
        deleteFront();      // iska matlab front == rear == NULL hai tho alag se likhne ke jarurat nahi
    node *t;
    if(d.front == NULL)
        return;
    while(t != NULL)
    {
        t = d.front;
        insertBack(t->item);
        t = t->next;
    }

    return *this;
}

DEque::~DEque()
{
    while(front)
    {
        deleteFront();
    }
}
