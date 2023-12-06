#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    int item;
    node *next;
};

class CLL
{
    private:
        node *last;

    public:
        CLL();

        void insert_atFirst(int);
        void insert_atLast(int);
        void insert_node(node*, int);

        void delete_atFirst();
        void delete_atLast();
        void delete_node(node*);

        node* search(int);

        CLL(CLL &);
        CLL& operator=(CLL &);

        ~CLL();
};

CLL::CLL()
{
    last = NULL;        // it says that when it was first created list was empty.
}

void CLL::insert_atFirst(int data)
{
    node *n = new node;
    n->item = data;
    
    if(!last)       // if list is empty so first node will be added like this
    {
        n->next = n;
        last = n;
    }
    else
    {
        n->next = last->next;
        last->next = n;
    }
}

void CLL::insert_atLast(int data)
{
    node *n = new node;
    n->item = data;

    if(!last)
    {
        n->next = n;        // list empty hai tho ye pahela node hoga tho n k next me khud ka he address aa jaye kyu k circular banana hai
        last = n;
    }
    else
    {
        n->next = last->next;
        last->next = n;
        last = n;  
    }
}

void CLL::insert_node(node* NODE, int data)
{
    node *n = new node;
    if(NODE == last)                // if NODE is pointing "last" node 
        insert_atLast(data);
    else if(NODE)
    {
        n->item = data;
        n->next = NODE->next;
        NODE->next = n;
    }
}

void CLL::delete_atFirst()
{
    node* r;            // making r to point first node
    try
    {
        if(!last)
            throw 1;

        r = last->next;
        r = r->next;
        if(last == r)       // if list have only one node
            last = NULL;
        delete r;    
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Linked list is empty, deletion can't be done" << endl;
    } 

}

void CLL::delete_atLast()
{
    node* t;
    if(last == NULL)
        cout << "Linked list is empty, deletion can't be done" << endl;

    if(last->next = last)       // if list have only one node
    {
        delete last;
        last = NULL;
    }
    else
    {
        t = last->next;
        while (t->next != last)
            t = t->next;

        t->next = last->next;
        last = t;
        delete last;
    }

}

void CLL::delete_node(node *NODE)
{
    node *t;
    if(NODE != NULL)
    {
        if(NODE == last)
            delete_atLast();
        else if(NODE == last->next)
            delete_atFirst();
        else
        {
            t = last->next;
            while(t->next != NODE)      // yaha par traverse karana hai NODE pointer giss node ko point kar raha hai uske just pahele node ko
                t = t->next;
            t->next = NODE->next;
            delete NODE;
        }
    }
    else
        cout << "Linked list is empty, deletion can't be performed" << endl;
}

node* CLL::search(int data)
{
    if(!last)
    {
        cout << "Linked list is empty" << endl;
        return NULL;
    }
    
    node *t = last->next;       // t pointing first node now
    /* we need do while loop coz if we traverse then it check only till secondlast node */

    do
    {
        if(t->item == data)
            return t;
    } while (t != last->next);     // 't' and 'last->next' are same matlab jub vo pura ghum k wapus first node tak pahuncha tub tak  
    // is "t != last->next" situation k waza se first node ko check nahi hoga tho isliye do while loop lagaya giss waza se do me first node check ho jayega fir loop chalega
 
    return NULL;        // agar nahi mila tho NULL return karo 
}

CLL::CLL(CLL &list)
{
    node *t;
    if(list.last == NULL)
        last = NULL;
    else
    {
        t = list.last->next;        // t is pointing to first node of old CLL
        while (t != list.last)
        {
            insert_atLast(t->item);
            t = t->next;
        }
        insert_atLast(list.last->item); // last node buch gaya tha tho usse alag se karna padha
    }
}

CLL& CLL::operator=(CLL &list)
{
    node* t;
    while (last)        // clear the current CLL to avoid memory leak
    {
        delete_atFirst();
    }
    
    if(list.last == NULL)       // agar old CLL me last pointer NULL hai tho new CLL ka last v NULL ko point karega
        last = NULL;
    else
    {
        t = list.last->next;
        while(t != list.last)
        {
            insert_atLast(t->item);
            t = t->next;
        }
        insert_atLast(list.last->item);
    }

    return *this;
}

CLL::~CLL()
{
    while(last)                  // jub tak last me NULL nahi aa raha hai tub tak
        delete_atFirst();
}

