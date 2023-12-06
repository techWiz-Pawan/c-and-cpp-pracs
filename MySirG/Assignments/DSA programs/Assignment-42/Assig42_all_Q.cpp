#include <iostream>
#include <stdio.h>

using namespace std;

class DynArray
{
    private:
        int Capacity;
        int lastIndex;
        int *ptr;

    protected:
        void doubleArray();
        void halfArray();

    public:
        DynArray();
        DynArray(DynArray &);
        DynArray& operator=(DynArray &);
        void createArray(int);
        bool isFull();
        bool isEmpty();
        void append(int);
        void insert(int, int);
        int getItem(int);
        void Delete(int);
};

DynArray::DynArray()
{
    ptr = NULL;
}

DynArray::DynArray(DynArray &arr)
{
    Capacity = arr.Capacity;
    lastIndex = arr.lastIndex;

    if(ptr != NULL)
        delete []ptr;
    for (int i = 0; i <= lastIndex; i++)
    {
        ptr[i] = arr.ptr[i];
    }
}

DynArray& DynArray::operator=(DynArray &arr)
{
    Capacity = arr.Capacity;
    lastIndex = arr.lastIndex;
    if(ptr != NULL)
        delete []ptr;
    for (int i = 0; i <= lastIndex; i++)
    {
        ptr[i] = arr.ptr[i];
    }
    
}

void DynArray::createArray(int initialSize)
{
    Capacity = initialSize;
    lastIndex = -1;
    if(ptr != NULL)
        delete []ptr;
    ptr = new int(Capacity);
}

void DynArray::doubleArray()
{
    int *temp;
    temp = new int(2 * Capacity);
    for (int i = 0; i <= lastIndex; i++)
    {
        temp[i] = ptr[i];
    }
    delete []ptr;
    ptr = temp;
    Capacity *= 2;
    
}

void DynArray::halfArray()
{
    int *temp;
    temp = new int(Capacity/2);
    for (int i = 0; i <= lastIndex; i++)
    {
        temp[i] = ptr[i];
    }
    delete []ptr;
    ptr = temp;
    Capacity /= 2;
    
}

bool DynArray::isFull()
{
    return (lastIndex == Capacity-1);
}

bool DynArray::isEmpty()
{
    return (lastIndex == -1);
}

void DynArray::append(int data)
{
    if(isFull())
        doubleArray();
    lastIndex++;                
    ptr[lastIndex] = data;
}

void DynArray::insert(int index, int data)
{
    try
    {
        if(index < 0 || index >= lastIndex)
            throw 1;
        if(isFull())
            doubleArray();
        for (int i = lastIndex; i >= index; i--)
            ptr[i+1] = ptr[i];

        ptr[index] = data;
        lastIndex++;
    }
    catch(int e)
    {
        if(e == 1)
            cout << "invalid Index" << endl;
    }
    
}

int DynArray::getItem(int index)
{
    try
    {
        if(index < 0 || index >= lastIndex)
            throw 1;
        return ptr[index];
    }
    catch(int e)
    {
        if(e == 1)
            cout << "invalid Index" << endl;
    }
    return -1;

}

void DynArray::Delete(int index)
{
    try
    {
        if(index < 0 || index >= lastIndex)
            throw 1;
        for(int i = index; i < lastIndex; i++)
        {
            ptr[i] = ptr[i+1];
        }
        lastIndex--;

        if(Capacity > 1 && lastIndex+1 <= Capacity/2)
            halfArray();
/*
    "Capacity > 1" ---> to ensure that resizing only occurs if the array has more than 
    one element. This avoids reducing the capacity to zero or a negative value, 
    which wouldn't be meaningful.

    "lastIndex+1 <= Capacity/2" ---> to check if the number of elements in the array after 
    deletion is less than or equal to half of its current capacity.
*/            

    }
    catch(int e)
    {
        if(e == 1)
            cout << "Invalid Index" << endl;
    }
    
}

DynArray::~DynArray()
{
    delete []ptr;
}