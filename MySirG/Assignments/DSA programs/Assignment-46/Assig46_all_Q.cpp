#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    node* prev;
    int item;
    node* next;
};

class CDLL
{
    private:
        node *start;
    
    public:
        CDLL();

        void insert_atFirst(int);
        void insert_atLast(int);
        void insert_node(node*, int);

        node* search(int);

        void delete_atFirst();
        void delete_atLast();
        void delete_node(node*);

        CDLL(CDLL &);
        CDLL& operator=(CDLL &);

        ~CDLL();
};

CDLL::CDLL()
{
    start = NULL;
}

void CDLL::insert_atFirst(int data)
{
    node *n = new node;
    node *last = start->prev;
    n->item = data;
    if(!start)
    {
        n->prev = n;
        n->next = n;
        start = n;
    }
    else if(start == start->prev && start == start->next)
    {
        n->prev = start;
        n->next = start;
        start->prev = n;
        start->next = n;
        start = n;
    }
    else
    {
        node *last = start->prev;
        n->prev = last;
        n->next = last->next;
        start->prev = n;
        last->next = n;
        start = n;
    }
}

void CDLL::insert_atLast(int data)
{
    node *n = new node; 
    n->item = data;
    if(!start)
    {
        n->prev = n;
        n->next = n;
        start = n;
    }
    else if(start == start->prev && start == start->next)
    {
        n->prev = start;
        n->next = start;
        start->prev = n;
        start->next = n;
    }
    else
    {
        node *last = start->prev;
        n->prev = last;
        n->next = start;
        start->prev = n;
        last->next = n;
    }
}

void CDLL::insert_node(node *NODE, int data)
{
    node *last = start->prev;    
        if(NODE == last)
            insert_atLast(data);
        else if(NODE)
        {
            node *n = new node;
            n->item = data;
            n->prev = NODE;
            n->next = NODE->next;
            NODE->next = n;
            NODE->next->prev = n;
        }
}

node* CDLL::search(int data)
{
    node *t = start;
    if(start)
    {
        do
        {
            if(t->item == data)
                return t;
            t = t->next;
        } while (t == start);
        return NULL;
    }
    else
        return NULL;
}

void CDLL::delete_atFirst()
{
    if(!start)
        cout << "Linked list is empty" << endl;
    else
    {
        node *last, *t;
        last = start->prev;
        t = start;
        if(start == last)
        {
            start = NULL;
            delete t;
        }
        else
        {
            last->next = t->next;
            start = t->next;
            delete t;
        }
        
    }
}

void CDLL::delete_atLast()
{
    if(!start)
    {
        cout << "Linked list is empty, deletion can't be performed" << endl;
    }
    else
    {
        node *last, *lastSecondNode;
        last = start->prev;
        lastSecondNode = last->prev;
        if(start == last)
        {
            // Only one node in the linked list
            start = NULL;
            delete last;
        }
        else
        {
            start->prev = last;
            lastSecondNode->next = start;
            delete last;
        }
    }
}

void CDLL::delete_node(node *NODE)
{
    if(!NODE && !start)
        cout << "Linked list is empty, deletion can't be performed" << endl;
    else
    {
        node *last;
        last = start->prev;
        if(start == NODE)
            delete_atFirst();
        else if(last == NODE)
            delete_atLast();
        else
        {
            NODE->prev->next = NODE->next;
            NODE->next->prev = NODE->prev;

            delete NODE;
        }
    }
}

CDLL::CDLL(CDLL &list)
{
    // initialise new list with NULL
    start = NULL;

    if(list.start)      // check if the source list is not empty
    {
        node *t = list.start;
        do
        {
            insert_atLast(t->item);
            t = t->next;
        } while (t != list.start);      // jub tak source list ka start != t hai tub tak
        
    }
}

CDLL& CDLL::operator=(CDLL &list)
{

    // Check for self-assignment (to handle a = a case) [use GPT for more info] it means assigning in the same list
    // in main() if we bymistakely do obj1 = obj1 assigning in the same obj1 then this situation happen
    if (this == &list)
    {
        return *this;
    }

    // if the current list is not empty then free that first
    while (start)
    {
        delete_atFirst();
    }
    start = NULL;

    if(list.start)
    {
        node *t = list.start;
        do
        {
            insert_atLast(t->item);
                t = t->next;
        } while (t != list.start);
        
    }
    else
        start = NULL;

    return *this;
}

CDLL::~CDLL()
{
    while(start)
        delete_atFirst();
}