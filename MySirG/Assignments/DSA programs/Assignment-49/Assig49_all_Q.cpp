                        ////      Queue using Array       /////
#include <iostream>
#include <stdio.h>

using namespace std;

class Queue
{
    private:
        int capacity;
        int front, rear;        // front matlab oldest inputed value
        int *ptr;

    public:
        Queue(int);        // capacity k liye ek argument pass hoga
        bool isFull();
        bool isEmpty();
        void insert(int);
        int rear_view();
        int front_view();
        int Delete();
        int count();

        Queue(Queue &);
        Queue& operator=(Queue &);

        ~Queue();
};

Queue::Queue(int cap)       // constructor
{
    capacity = cap;
    front = -1;     // front aur rare dono me -1 hona matlab queue empty hai 
    rear = -1;
    ptr = new int(capacity);   // ptr --> [ ][ ][ ][ ]...   jitna capacity ka hoga 
}

bool Queue::isFull()
{
    // condition to check for a full circular queue is (rear == front - 1).
    if(front == 0 && rear == capacity-1 || front == rear + 1)       // check assig 49 video [51:30]
        return true;
    else
        return false;
}

bool Queue::isEmpty()
{
    // isme se koi v -1 hoga matlab queue empty hai kyuki ju insert hoga data tub dono 0 ho jata hai see sir video
    if(rear == -1 && front == -1)       
        return true;
    else
        return false;
}
/*
    3 situation for insertion in queue:-
    |--> if Queue is empty condition: rare == -1 / front = -1
    |       solution: rare = 0; , front = 0; pe insert hoga
    |
    |--> normal situation: rare ke aage insert kardo
    |       solution: rare++ kar k
    |
    |--> situation: "rear == capacity -1"   agar delete karte karte rear move ho kar capacity -1 tak pahunch gaya tho 
    |       solution: rare = 0;   usse fir se zero se bharna chalu karenge
    |
        (ye saare condition insertion function me daalna hoga to make insertion function)
*/
void Queue::insert(int data)
{
    try
    {
        if(capacity <= 0)
            throw 1;
        if(isFull())
            throw 2;
        if(rear == -1)      // matlab queue empty hai
        {
            rear = 0; 
            front = 0;
            ptr[rear] = data;       // ptr[rear] ptr k rare me he data insert hoga
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
    catch(int e)
    {
        if(e == 1)
            cout << "Invalid queue state" << endl;
        if(e == 2)
            cout << "Queue is full, overflow condition" << endl;
        
    }
    
}

int Queue::rear_view()
{
    if(isEmpty())
        cout << "Underflow condition" << endl;
    else
        return ptr[rear];

}

int Queue::front_view()
{
    if(isEmpty)
        cout << "Underflow condition" << endl;
    else
        return ptr[front];
}

/*
    3 situation for deletion in queue:-
    |--> if Queue contain single element:   front == rear 
    |       solution: rare = -1; , front = -1; delete karne k baad dono me -1 dalna hoga
    |
    |--> normal situation: matlab jo av front pe hai
    |       solution: front++ kar k
    |
    |--> situation: "front == capacity -1"   jub front capacity-1 k baraber hoga, matlab delete karte karte last elemnt tak pahunch gaya hoga
    |       solution: front = 0;   delete karne k baad front 0 ko point karega
    |
        (ye saare condition deletion function me daalna hoga to make deletion function)

    NOTE: yaha par element delete karne ka nahi sochte hai sirf pointer move karte hai kyuki
          vo element ko garbage value consider ho jata hai agar front ye rear usse point
          nahi kar raha hai hume sirf front aur rear kisse point kar raha hai usse matlab hai
          tho sirf front aur rear k point karwana chane kardu tho matlab deletion ho gaya
*/
int Queue::Delete()
{
    if(isEmpty())
        cout << "Underflow condition, deletion can't be performed" << endl;
    if(front == rear)       // agar front aur rear ek he ko point kar rahe hai matlab queue me ek he element hai
         front = rear = -1;  
    else  if(front == capacity-1)
        front = 0;
    else
        front++;
}

int Queue::count()
{
    if(isEmpty())
        return 0;
    else if(front == rear)
        return 1;
    else if(rear > front) // if it is not a circular queue
        return rear - front + 1;
    else        // in circular queue case
        return capacity - (front - rear) + 1;
}

Queue::Queue(Queue &q)
{
    capacity = q.capacity;
    front = q.front;
    rear = q.rear;
    ptr = new int[capacity];
    for (int i = 0; i < capacity; i++)
    {
        // garbage k saath assign hoga koi dikkat nahi front or rear ke madat se hum apne data ko acces tho kar he rahe hai
        ptr[i] = q.ptr[i];      
    }
}

Queue& Queue::operator=(Queue &q)
{
    capacity = q.capacity;
    front = q.front;
    rear = q.rear;
    if(ptr != NULL)
    {
        delete []ptr;
    }
    ptr = new int[capacity];
    for (int i = 0; i < capacity; i++)
    {
        ptr[i] = q.ptr[i];      
    }

    return *this;
}

Queue::~Queue()
{
    delete []ptr;
}