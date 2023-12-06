/*  Define a class Array with appropriate number of variable and functions  */
#include <iostream>
#include <stdio.h>
using namespace std;

class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;             
    
    public:
        Array();
        Array(Array &);
        Array& operator=(Array &);

        void createArray(int);       
        void insert(int, int);       
        void append(int);            
        int getItem(int);            
        bool isEmpty();
        bool isFull();
        void Delete(int);            
        void edit(int, int);         
        int count();
        int getCapacity();
        /******************************************************************************/
        void sortArray();
        void printArray();
        int greatestEle();
        int smallestEle();
        bool searchELE(int);
        int arrayELE_sum();
        double allEle_Average();
        void rotateArray();
        void removeDuplicateELE();
        int secondLargestELE();
        void swapELE(int, int);
        ~Array();
};
Array::Array()
{
    ptr = NULL;       
}
/* 
     When the constructor is called, there is no previous memory block allocated for ptr, 
     so there is no need to delete anything.
*/
Array::Array(Array &arr)    // this is also constructor with argument of source/caller object
{
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

void Array::createArray(int initialSize)
{
    capacity = initialSize;
    lastIndex = -1;             
    if(ptr != NULL)
        delete []ptr;           
    ptr = new int(capacity);    
}

bool Array::isFull()
{
    return (lastIndex == capacity-1);
}

void Array::append(int data )
{
    if(!isFull())
    {
        lastIndex++;            
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

void Array::sortArray()
{
    for (int i = 0; i <= lastIndex; i++)
    {
        for (int j = i+1; j <= lastIndex; j++)
        {
            if(ptr[i] > ptr[j])
            {
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }  
    }
}

int Array::greatestEle()
{
    int max = ptr[0];
    for (int i = 0; i <= lastIndex; i++)
    {
        if(max < ptr[i])
            max = ptr[i];
    }
    return max;  
}

int Array::secondLargestELE()
{
    sortArray();
    return ptr[lastIndex-1];
}

int Array::smallestEle()
{
    int min = ptr[0];
    for (int i = 0; i <= lastIndex; i++)
    {
        if(min > ptr[i])
            min = ptr[i];
    }
    return min;
    
}

bool Array::searchELE(int data)
{
    for (int i = 0; i <= lastIndex; i++)
    {
        if(ptr[i] == data)
            return true;
    }
    return false; 
}

int Array::arrayELE_sum()
{
    int sum = 0;
    if(isEmpty())
    {
        cout << "Array is empty" << endl;
        return 0;
    }
    
    for (int i = 0; i <= lastIndex; i++)
    {
        sum += ptr[i];
    }
    return sum;
}

double Array::allEle_Average()
{
    
    if(isEmpty())
    {
        cout << "The array is empty." << endl;
        return 0.0;
    }
    double AVG = static_cast<double>(arrayELE_sum())/(lastIndex+1);
    return AVG; 
    
}

void Array::rotateArray()
{
    try
    {
        if(isEmpty())
            throw 1;

        int lastELE = ptr[lastIndex];
        for (int i = lastIndex; i > 0; i--)
        {
            ptr[i] = ptr[i-1];
        }
        ptr[0] = lastELE;
    }
    catch(int e)
    {
        if(e == 1)
            cout << "Array rotation can't be done, because array is empty" << endl;
    }
    
}

void Array::removeDuplicateELE()
{
    for (int i = 0; i <= lastIndex; i++)
    {
        for (int j = 0; j <= lastIndex; j++)
        {
            if(i != j && ptr[i] == ptr[j])
                ptr[j] = -1;
        }
    }

    for (int i = 0; i <= lastIndex; i++)
    {
        if(ptr[i] == -1)
            Delete(i);
    }   
}

void Array::swapELE(int index1, int index2)
{
    if (index1 >= 0 && index1 <= lastIndex && index2 >= 0 && index2 <= lastIndex)
    {
        int temp = ptr[index1];
        ptr[index1] = ptr[index2];
        ptr[index2] = temp;
    }
    else
    {
        cout << "Invalid indices provided for swapping." << endl;
    }
}

void Array::printArray()
{
    for (int i = 0; i <= lastIndex; i++)
    {
        cout << ptr[i] << "  ";
    }
    cout << endl;
}

Array::~Array()
{
    delete []ptr;
}

int main()
{
    Array arr;
    arr.createArray(5);     // Create an array with initial capacity of 5

    arr.append(3);
    arr.append(7);
    arr.append(2);
    arr.append(9);
    arr.append(2);

    cout << "Original Array: ";
    arr.printArray();

    arr.sortArray();

    cout << "Sorted Array: ";
    arr.printArray();
                            ///////////////////////////
    int greatest_ele = arr.greatestEle();
    cout << "Greatest element: " << greatest_ele << endl;
                            ///////////////////////////
    int smallest_ele = arr.smallestEle();
    cout << "smallestest element: " << smallest_ele << endl;
                            ///////////////////////////
    if(arr.searchELE(9))
        cout << "Element found" << endl;
    else
        cout << "Element Not found" << endl;
                            ///////////////////////////
    int sum = arr.arrayELE_sum();
    cout << "sum of all the elements in array: " << sum << endl;
                            ///////////////////////////
    double AVG = arr.allEle_Average();
    cout << "The average of  all elements in an array: " << AVG << endl;
                            ///////////////////////////
    arr.rotateArray();
    cout << "array after rotating right" << endl;
    arr.printArray();
                            /////////////////////////    
    arr.removeDuplicateELE();
    cout << "removing duplicate element" << endl;
    arr.printArray();
                            /////////////////////////
    int sLarge = arr.secondLargestELE();
    cout << "Second Largest element: " << sLarge << endl;
                            /////////////////////////
    arr.swapELE(1, 3);
    cout << "After Swaping" << endl;
    arr.printArray();

    cout << endl;
    return 0;
}