#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    int Pno;        // priority number
    int item;
    node* next;
};

class PriorityQueue
{
    private:
        node* start;
    public:
        PriorityQueue();
        bool isEmpty();
        void insert(int, int);          // Pno, data
        void Delete();
        int getHighest_priorityELE();       // highest priority wala element
        int getHighest_priorityNUM();       // highest priority wala jo number

        PriorityQueue(PriorityQueue &);
        PriorityQueue& operator=(PriorityQueue &);

        ~PriorityQueue();
};

PriorityQueue::PriorityQueue()
{
    start = NULL;
}

bool PriorityQueue::isEmpty()
{
    if(start == NULL)
        return true;
    else
        return false;
}

void PriorityQueue::insert(int P_num, int data)
{
    node *n = new node;
    n->item = data;
    n->Pno = P_num;
    node *t;

    // if(start == NULL)       // list empty condition simply insert first ele 
    // {
    //     n->next = NULL;          // isse n->next = start v likh sakte hai kyuki start NULL ko he point kar raha hai
    //     start = n;
    // }
    // else if(start->Pno < n->Pno)        // matlab start me insert me insert hoga
    // {
    //     n->next = start;
    //     start = n;
    // }

    // we can also write above like this since both having same operation to handle situation 

    if(start == NULL || start->next < n->next)      // 2 condition if you want to insert at first node
    {
        n->next = start;        // start me NULL tha vo assign hoga
        start = n;
    }
    else
    {
        t = start;
        while(t->next != NULL)
        {
            if(t->next->Pno < n->Pno)       // 2nd node se check karunga taaki lastSecond ko access kar pau agar direct 2nd node ko check kar raha hu matlab first node v Pno jada hoga
                break;          // agar t->next->Pno chota hai tho t increment karne ke jarurat nahi tho break kar do
            t = t->next;        // aur agar bada hai next node ko point karwa doo
        }
        //  agar break chala hoga tho first node ko he point karta hoga 't' nahi tho update t mila hoga jiska use karke

        n->next = t->next;
        t->next = n;
        
    }

}

void PriorityQueue::Delete()
{
    if(isEmpty())
        cout << "Linked list empty, underFlow condition" << endl;
    // first node ka element highest priority hota hai matalb front element delete hoga 
    node *t = start;
    start = t->next;
    delete t;
}

int PriorityQueue::getHighest_priorityELE()     // return item
{
    if(start != NULL)
        return start->item;
    cout << "UnderFlow condition" << endl;
}

int PriorityQueue::getHighest_priorityNUM()     // return Pno
{
    if(start != NULL)
        return start->Pno;
    cout << "UnderFlow condition" << endl;
}

PriorityQueue::PriorityQueue(PriorityQueue & PQ)
{
    start = NULL;
    if(PQ.start != NULL)        // agar source list he NULL hai tho naya list v NULL hoga
    {        
        node* t = PQ.start;
        // agar source list is not empty tho traverse kar k list ko copy karte jao
        while(t != NULL)        // it will traverse all node for copying
        {
            insert(t->Pno, t->item);
            t = t->next;
        }
    }
}

PriorityQueue& PriorityQueue::operator=(PriorityQueue & PQ)
{
    while(start)    // agar new list me koi garbage hoga tho delete ho jaye
        Delete();
    if(PQ.start != NULL)
    {
        node* t = PQ.start;
        while(t != NULL)
        {
            insert(t->Pno, t->item);
            t = t->next;
        }
    }

    return *this;
}

PriorityQueue::~PriorityQueue()
{
    while(start)
    {
        Delete();
    }
}