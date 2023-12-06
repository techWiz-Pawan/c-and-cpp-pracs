#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    node* prev;
    int item;
    node* next;
};

class DLL 
{
    private:
        node *start;
    
    public:
        DLL();

        void insert_atFirst(int);
        void insert_atLast(int);
        void insert_node(node*, int);

        node* search(int);
        void edit(node*, int);

        void delete_atFirst();
        void delete_atLast();
        void delete_node(node*);

        DLL(const DLL &);
        DLL& operator=(DLL &);

        ~DLL();
};

DLL::DLL()
{
    start = nullptr;
}

void DLL::insert_atFirst(int data)
{
    node *n = new node;         // create node dynamically
    n->prev = NULL;
    n->item = data;
    n->next = start;
    start->prev = n;
    start = n;

}

void DLL::insert_atLast(int data)
{
    node *n = new node;
    node *t;

    n->item = data;
    n->next = NULL;

    t = start;
    while(t->next != NULL)
        t = t->next;
    n->prev = t;
    t->next = n;

}

void DLL::insert_node(node *NODE, int data)
{
    node *n = new node;
    n->prev = NODE;
    n->item = data;
    n->next = NODE->next;

    if(NODE->next)              // if NODE ka next is NULL tho aage koi node nahi hoga tub nahi chalega "NODE->next->prev = n"
        NODE->next->prev = n;
    NODE->next = n;
}

node* DLL::search(int data)
{
        node *t = start;
        while (t)                   
        {
            if(t->item == data)
                return t;
            t = t->next;
        }
        return NULL;
    
}

void DLL::delete_atFirst()
{
    node *t;

    if(start)
    {
        t = start;
        start = t->next;
        if(t->next)
            t->next->prev = NULL;
        delete t;
    }
    else
        cout << "Linked list is empty, deletion can't be performed" << endl;
}

void DLL::delete_atLast()       
{
    node *t;
    if(start)
    {
        t = start;
        if(!t->next)        // jub list me ek he node hai tub ye karna padhega
        {
            delete t;
            start = NULL;
        }

        while (t->next != NULL)
            t = t->next;
        
        t->prev->next = NULL;
        delete t; 
        
    }
    else
        cout << "Linked list is empty, deletion can't be performed" << endl;

}

void DLL::delete_node(node *NODE)
{
    if(start)
    {
        if(!NODE->prev && !NODE->next)      // //////////
        {
            delete NODE;
            start = nullptr; 
        }
        else
        {
            NODE->prev->next = NODE->next;
            if(NODE->next)      // uske aage node exist karta hai ke nahi usse check kar raha hu
                NODE->next->prev = NODE->prev;

            delete NODE;
        }
    }
}

DLL::DLL(const DLL &list)       // 'const' because it guarantees that the list object passed to the constructor will not be modified during the copy operation.
{
    node* t = list.start;
    start = nullptr;

    while(t)
    {
        insert_atLast(t->item);
        t = t->next;
    }
    
}

DLL& DLL::operator=(DLL &list)
{
    node *t = list.start;
    start = nullptr;

    while(start)
        delete_atFirst();
    
    while (t)
    {
        insert_atFirst(t->item);
        t = t->next;
    }
    
}

DLL::~DLL()
{
    while (start)
    {
        delete_atFirst();
    }
    
}

