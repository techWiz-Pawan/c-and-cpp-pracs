#include <iostream>
using namespace std;

class MAXHeap
{
    private:
        int Capacity;
        int lastIndex;
        int* ptr;

    public:
        MAXHeap(int);
        void insert(int);
        int peek_top();
        void Delete();

        ~MAXHeap();
};

MAXHeap::MAXHeap(int cap)
{
    Capacity = cap;
    lastIndex = -1;
    ptr = new int[Capacity];
}

void MAXHeap::insert(int data)
{
    
}

