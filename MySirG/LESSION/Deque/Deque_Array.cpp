                    ////              Deque using Array               ////
#include <iostream>
#include <stdio.h>
using namespace std;

class Deque
{
    private:
        int capacity;
        int front, rear;
        int *ptr;
    public:
        Deque(int);
        bool isFull();
        bool isEmpty();

        void insertFront(int);
        void insertBack(int);
        void deleteFront();
        void deleteBack();
        
        int viewFront();
        int viewBack();

        void display();

        Deque(Deque &);
        Deque& operator=(Deque &);

        ~Deque();
};

Deque::Deque(int cap)
{
    capacity = cap;
    front = rear = -1;
    if(ptr)
        delete []ptr;
    ptr = new int(capacity);
}

bool Deque::isFull()
{
    if(front == 0 && rear == capacity-1 || front == rear + 1)
        return true;
    else
        false;
}

bool Deque::isEmpty()
{
    if(rear == -1 && front == -1)
        return true;
    else
        return false;
}

/*
    3 situation for insertion in Deque:-    (for front)
    |--> if Deque is empty condition: rare == -1 / front = -1
    |       solution: rare = 0; , front = 0; hoga aur hume ptr[front] me dalana hai kyuki front me insert karna hai data
    |
    |--> situation: "front == 0" 
    |       solution: front = capacity-1;  
    |
    |--> normal situation: rare ke aage insert kardo
    |       solution: rare++ kar k 
    |
    |   (ye saare condition insertion function me daalna hoga to make insertion function)
*/

void Deque::insertFront(int data)   
{
    if(isFull())
        cout << "Queue is Full, Overflow condition" << endl;
    if(isEmpty())       // front == -1
    {
        rear = front = 0;       
        ptr[front] = data;
    }
    else if(front == 0)
    {
        /* When you insert an element at the front, you decrement the front index to move 
        it to the previous position. similar to "front--;" */
        front = capacity-1;
        ptr[front] = data;
    }
    else
    {
        front--;
        ptr[front] = data;
    }
    
}

void Deque::insertBack(int data)
{
    if(isFull())
        cout << "Overflow Condition, insertion not possible" << endl;
    if(isEmpty())
    {
        front = rear = 0;
        ptr[rear] = data;
    }
    else if(rear == capacity-1)
    {
        rear = 0;
        ptr[rear] = data;
    }
    else
    {
        rear++;
        ptr[rear] = data;
    }

}

void Deque::deleteFront()
{
    if(isEmpty())
        cout << "Deletion cant be done, Underflow condition" << endl;
    if(rear == front)
        rear = front = -1;
    else if(front == capacity - 1)
        front = 0;
    else
        front++;    // in normal condition after deletion, front will point to next ele
}

void Deque::deleteBack()
{
    if(isEmpty())
        cout << "Deletion cant be done, Underflow condition" << endl;
    if(front == rear)
        front = rear = -1;
    /* back/rear se delete karte karte rear == 0 ho jaye tho uske baad circular fashion 
    me rear -1 nahi hona chaheye bulki wapaz capacity-1 pe chala jana chaheye */
    else if(rear == 0)           
        rear = capacity - 1;
    else
        rear--;     // in normal condition
}

int Deque::viewFront()
{
    if(isEmpty())
        cout << "UnderFlow condition, no element is found" << endl;
    return ptr[front];
}

int Deque::viewBack()
{
    if(isEmpty())
        cout << "UnderFlow condition, no element is found" << endl;
    return ptr[rear];
}

Deque::Deque(Deque &q)      
{/*  copy me pura array copy kar do garbage k saath front aur rear v deep copy ho 
    raha hai tho kaha se kaha tak element hai vo v pata chal jaye gaa */
    capacity = q.capacity;
    front = q.front;
    rear = q.rear;
    ptr = new int[capacity];
    for(int i=0 ; i<capacity; i++)
    {
        ptr[i] = q.ptr[i];
    }
}

Deque& Deque::operator=(Deque &q)
{
    if(this == &q)      // Check for self-assignment
        return *this;        // Return the current object if trying to assign itself.

    if(ptr)
    {
        delete []ptr;
    }

    capacity = q.capacity;
    front = q.front;
    rear = q.rear;
    ptr = new int[capacity];
    for(int i=0 ; i<capacity; i++)
    {
        ptr[i] = q.ptr[i];
    }

    return *this;
}

void Deque::display()
{
    int i = front;      // traverse karane k liye ek variable liye hai 'i'
    while(i != rear)
    {
        cout << ptr[i] << "  ";
        i = (i+1)%capacity;     // formula to move to next element in circular array formate
        // ^__ check jenny circular array for more info
    }
}

Deque::~Deque()
{
        delete []ptr;
}