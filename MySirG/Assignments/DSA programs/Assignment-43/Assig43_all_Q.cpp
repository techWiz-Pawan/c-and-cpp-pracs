#include <iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class SLL
{
    private:
        node *start;
    
    public:
        SLL();
        SLL(SLL &);
        SLL& operator=(SLL &);

        void insert_atFirst(int);
        void insert_atLast(int);
        void insert_after(node*, int);
        node* search(int);              // "node*" matlab vo node ka address return karega
        void edit(node*, int);
        int count();
        void delete_First();
        void delete_Last();
        void delete_node(node*);

        ~SLL();
        
};

SLL::SLL()
{
    start = NULL;
}

SLL::SLL(SLL &list)
{
    node *t = list.start;   // t se old SLL ko traverse karva raha hu jo node ko point kar raha hu vo copy hote jayega
    start = nullptr;           // initiall new SLL NULL ko point karwa dena chaheye nahi ho usme garbage hoga jiss wild pointer bolenge
    while (t)               // jub tak t NULL na ho tub tak copy hote rahe
    {
        insert_atLast(t->item);     // ye new SLL k last me add hote jayega aur isme item uss node ka v pass kar raha hu
        t = t->next;                // ye traverse hone me kaam ayega
    }
       
}

SLL& SLL::operator=(SLL &list)
{
    node *t = list.start;
    /* ho sakta hai ke jub mai copy kar raha hu tho usme pahele se koi list ho tho uss 
    list ko remove karna padhe ga */
    while (start)      // agar koi list hai tho usse remove kar do jub tak start me NULL na aa jay tub tak first node delete hote jaye
    {
        delete_First();
    }

    while (t)
    {
        insert_atLast(t->item);
        t = t->next;
    }
    // this matlab current object ka address return karega
    return *this;       // jiss object ko return karna hai vo caller object hai aur caller object ka pointer hai this pointer
}

void SLL::insert_atFirst(int data)
{ 
    /* ek naya node hai jo SLL me 1st position pe insert karana hai aur insert hone 
    se pahele 1. uss new node me ka v apna pointer hoga.  2. uss new node k member 
    v assign kar lo insert karne se pahele */

    node* n = new node;
    n->item = data;
    n->next = start;
    start = n;          // abb start uss node ko point nahi karega new node ko point karega kyuki new node abb first node hai insert karne k baad

}

void SLL::insert_atLast(int data)
{
    node *t;
    node *n = new node;
    n->item = data;
    n->next = NULL;

    if(start == NULL)
        start = n; 
    else
    {
        t = start;      // naya pointer me starting node ka address assign kar diya
        while(t->next != NULL)    // "t->next"  matlab t jiss node ko point kar raha hai usska next vala member
            t = t->next;
        t->next = n; 
    }

}

node* SLL::search(int data)
{
    node *t;
    t = start;
    while(t)        // jub 't' me NULL hoga tho loop end ho jayega aur empty list hoga tubb v NULL dega tho alag se banane k jarurat nahi
    {
        if(t->item == data)
            return t;
        t = t->next;
    }
    return NULL;        // -1 return nahi kar sakte kyu ki vo int hai isliye NULL jub data nahi milega
    
}

void SLL::insert_after(node* NODE, int data)
{ 
    if(!NODE)          // if 'NODE' is NULL
    {
        node *n = new node;
        n->item = data;
        n->next = NULL;     // since NODE is NULL the new node will be first and last node so the address in that node will be NULL

    }
    else        // NODE is not NULL it contain some address then,
    {
        node *n = new node;
        n->item = data;
        n->next = NODE->next;
        NODE->next = n; 
    }
}

void SLL::delete_First()
{
    node *t;
    if(start)       // agar start me NULL hai matlab list is empty tho ye if nahi chalega
    {    
        t = start;
        start = t->next; 

        delete t;
    }
    else
        cout << "list is empty, nothing to delete" << endl;
}

void SLL::delete_Last()
{
    node* t;
    try
    {
        t = start;
        if(start == NULL)
            throw 1;
        else
        {
            while(t->next->next != NULL)        // "t->next->next" matlab t jis node ko point kar raha hai uske just aage wale node me next box me NULL check karega
            {
                t = t->next;        // nahi mila tho next node jane k liye
            }
            delete t->next;         // delete the last node t av last second node pe baitha hoga lekin t->next last node ko point kar raha hai 
            t->next = NULL;
        }

    }
    catch(int e)
    {
        cout << "Linked List is empty, cant perform deletion" << endl;
    }
    
}

void SLL::delete_node(node* NODE)
{
    node *t;
    try
    {
        if(start)
            throw 1;
        if(start == NODE)
            delete_First();
        else
        {
            t = start;
            while(t->next != NODE)
                t = t->next;
            t->next = NODE->next;
            delete NODE;
        }    
    }
    catch(int e)
    {
        cout << "Linked List is empty, deletion of node can't be performed" << endl;
    }
    
}

void SLL::edit(node* NODE, int data)
{
    try
    {
        if(start)
            throw 1;
        
        NODE->item = data;
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Linked list is empty, can't perform edit operation" << endl;
    }
    
}

int SLL::count()
{
    int cnt = 0;
    node *t = start;

    while (t)       // t me null hua tho cnt=0 hoga no need of exception handling
    {
        cnt++;
        t = t->next; 
    }

    return cnt;   
}

SLL::~SLL()
{
    while (start)
    {
        delete_First();
    }
    
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */

    cout << "\n";
    return 0;
}
