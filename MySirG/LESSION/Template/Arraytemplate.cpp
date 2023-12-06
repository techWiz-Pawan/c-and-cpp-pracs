#include <stdio.h>
#include <iostream>
#include <string.h>

#define INVALID_INDEX 1
#define OVERFLOW 2
#define UNDERFLOW 3

using namespace std;

template <class X>
class arrayTemplate
{
    private:
        int capacity;
        int lastIndex;
        X* ptr;

    public:
        arrayTemplate();
        void createArray(int);

        arrayTemplate(arrayTemplate &);
        arrayTemplate& operator=(arrayTemplate &);

        void insert(int, X);
        void append(X);
        X getItem(int);
        bool isFull();
        bool isEmpty();
        void Delete(int);
        void Edit(int, X);
        int count();
        int getCapacity();

        ~arrayTemplate();
};

template <class X>
arrayTemplate<X>::arrayTemplate()
{
    ptr = NULL;
}

template <class X>
arrayTemplate<X>::arrayTemplate(arrayTemplate<X> &arr)          // caller oblect me source object assign karna hai
{
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;

    ptr = new X[capacity];
    for (int i = 0; i <= lastIndex; i++)
        ptr[i] = arr.ptr[i];
    
}

template <class X>
arrayTemplate<X>& arrayTemplate<X>::operator=(arrayTemplate<X> &arr)
{
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;

    if(ptr != NULL)
        delete []ptr;
    
    ptr = new X[capacity];
    for (int i = 0; i <= lastIndex; i++)
        ptr[i] = arr.ptr[i];

    return (*this);
    
}

template <class X>
void arrayTemplate<X>::createArray(int cap)
{
    capacity = cap;
    lastIndex = -1;

    if(ptr != NULL)
        delete []ptr;
    ptr = new X[capacity];
}


template <class X>
void arrayTemplate<X>::insert(int index, X data)
{
    try
    {
        if(index < 0 || index > lastIndex+1)
            throw INVALID_INDEX;
        if(isFull())
            throw OVERFLOW;
        int i;
        for (i = lastIndex+1; i >= index; i--)
            ptr[i] = ptr[i-1];
        ptr[i] = data;
        lastIndex++;
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Given index is INVALID";
        if(e == 2)
            cout << "Array is full, Insertion can't be performed.";
    }
    
}

template <class X>
void arrayTemplate<X>::append(X data)
{
    try
    {
        if(isFull())
            throw OVERFLOW;

        lastIndex++;
        ptr[lastIndex] = data;
        
    }
    catch(int e)
    {
        if(e==2)
            cout << "\noverflow: append can't performed.";
    }
}

template <class X>
X arrayTemplate<X>::getItem(int index)
{
    try
    {
        if(index < 0 || index > lastIndex+1)
            throw INVALID_INDEX;
        
        return ptr[index];
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Invalid Index";
    }
    
}

template <class X>
bool arrayTemplate<X>::isFull()
{
    return (lastIndex == capacity-1);
        
}

template <class X>
bool arrayTemplate<X>::isEmpty()
{
    return (lastIndex == -1);
}

template <class X>
void arrayTemplate<X>::Delete(int index)
{
    try
    {
        if(index < 0 || index > lastIndex+1)
            throw INVALID_INDEX;
        if(isEmpty())
            throw UNDERFLOW;
        
        for (int i = index; i < lastIndex; i++)
            ptr[i] = ptr[i+1];
        lastIndex--;
        
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Given index is INVALID";
        if(e == 3)
            cout << "Array is empty, Deletetion can't be performed";
    }
    
}

template <class X>
void arrayTemplate<X>::Edit(int index, X newdata)
{
    try
    {
        if(index < 0 || index > lastIndex+1)
            throw INVALID_INDEX;
       
        ptr[index] = newdata;
        
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Given index is INVALID";
       
    }
}

template <class X>
int arrayTemplate<X>::count()
{
    return lastIndex+1;
} 

template <class X>
int arrayTemplate<X>::getCapacity()
{
    return capacity;
}

template <class X>
arrayTemplate<X>::~arrayTemplate()
{
    delete []ptr;
}


int main()
{
    arrayTemplate<int> obj1;        // if i want my array element in integer type
    arrayTemplate<float> obj2;      // if i want my array element in float type 
    arrayTemplate<string> obj3;     // if i want my array element in string type 

    // create array with by providing capacity
    obj1.createArray(5);            
    obj2.createArray(4);
    obj3.createArray(3);

    obj1.append(3);
    obj1.append(7);
    obj1.append(2);

    for (int i = 0; i < obj1.count(); i++)
        cout << obj1.getItem(i) << " ";
    
    cout << endl;

    obj2.append(1.5f);          // in programming bydefault it become double so to specify float we write 'f' after number
    obj2.append(8.3f);

    obj3.append("Easy");
    obj3.append("Pain");

    cout << obj1.getItem(0) << endl;
    cout << obj2.getItem(0) << endl;
    cout << obj3.getItem(0) << endl;

    arrayTemplate<string> obj4 = obj3;
    cout << obj4.count() << endl;

    return 0;
}