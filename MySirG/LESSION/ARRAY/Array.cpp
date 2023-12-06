/*  Define a class Array with appropriate number of variable and functions  */
#include <iostream>
#include <stdio.h>
using namespace std;

class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;               // for storing address of array 
    
    public:
        Array();
        Array(Array &);
        Array& operator=(Array &);

        void createArray(int);       // args -> size
        void insert(int, int);       // args -> index, value
        void append(int);            // args -> value (jo append hoga)
        int getItem(int);            // args -> index (uss index par value return ne k liye)
        bool isEmpty();
        bool isFull();
        void Delete(int);            // args -> index 
        void edit(int, int);         // args -> index, value (replacing value of that index)
        int count();
        int getCapacity();

        ~Array();
};
Array::Array()      // constructor definition
{
    ptr = NULL;       
}

void Array::createArray(int initialSize)
{
    capacity = initialSize;
    lastIndex = -1;             // av fillal koi element add nahi hua hoga tho lastIndex = -1 rakhna hoga. 0 nahi rakh sakte kyu ki array 0 se start hota hai
    if(ptr != NULL)
        delete []ptr;           // agar pahele koi call kiya hoga aur array bana hoga tho uski memory free ho jaye fir ek naya k liye use hoo
    ptr = new int(capacity);    // DMA for array  
}

Array::Array(Array &arr)        // copy constructor
{
    /*
        here imaging we have Array arr1, arr2; two object and we want copy arr2 = arr1
        but given class contain pointer so we cant copy directly so need to make new ptr for arr2
        so we made new memory using DMA
    */
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;
    ptr = new int(capacity);
    for (int i = 0; i <= lastIndex; i++)
    {
        ptr[i] = arr.ptr[i];
    }
    
}

Array& Array::operator=(Array &arr)
{
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;
    if(ptr != NULL)
        delete []ptr;
    ptr = new int(capacity);
    for (int i = 0; i <= lastIndex; i++)
    {
        ptr[i] = arr.ptr[i];
    }

    return (*this);
}

bool Array::isFull()
{
    return (lastIndex == capacity-1);
}

/*
    ye append function last k ek aage data fill karega.
    jub array pura bhar chuka hoga tub ussme append karna possible nahi hoga

    NOTE: jub v aap array me ya kisi v data structure me insertion/deletion ka kaam kare 
    ya koi aur dushra operation v kare 'tho ye pahele dekhe ke kin halat me vo operation perform 
    nahi ho sakta hai' usske baad operation perform karne k baare me soche

    e.g; yaha par append function me array pura bhara hai tho operation nahi ho payega 
*/

void Array::append(int data )
{
    if(!isFull())
    {
        lastIndex++;            // lastIndex k aage wala me append karoge isliye
        ptr[lastIndex] = data;
    }
    else
        cout << "overflow: append operation not performed." << endl;   
}

bool Array::isEmpty()
{
    return (lastIndex == -1);
}

void Array::insert(int index, int data)
{
    try
    {
        if(index < 0 || index > lastIndex+1)
            throw 1;
        if(isFull())
            throw 2;
        else
        {
            int i;
            for ( i = lastIndex; i >= index; i--)
            {
                ptr[i+1] = ptr[i];
            }
            ptr[index] = data;
            lastIndex++;
        }
    }
    catch(int e)
    {
        if(e == 1)
            cout << "invalid index" << endl;
        else if(e == 2)
            cout << "overflow" << endl;
    }
   
}

int Array::getItem(int index) 
{
    try
    {
        if(index < 0 || index > lastIndex)
            throw 1;
            
        return ptr[index];    
    }
    catch(int e)
    {
        if(e==1)
            cout << "invalid index or empty Array" << endl;
    }
    return -1;   
}

int Array::getCapacity()
{
    return capacity;
}

int Array::count()
{
    return lastIndex+1;
}

void Array::edit(int index, int newData)
{
    try
    {
        if(index < 0 || index > lastIndex)
            throw 1;
        
        ptr[index] = newData;
        
    }
    catch(int e)
    {
        if(e==1)
            cout << "invalid Index or empty array" << endl;
    }
}

void Array::Delete(int index)
{
    try
    {
        if(index < 0 || index > lastIndex+1)
            throw 1;
        
        for (int i = index; i < lastIndex+1; i++)
        {
            ptr[i] = ptr[i+1];
        }
        lastIndex--;
        
    }
    catch(int e)
    {
        if(e==1)
            cout << "invalid Index or empty array" << endl;
    }
    
}


Array::~Array()
{
    delete []ptr;
}