#include <iostream>
using namespace std;

class Array
{
    private:
        int *p;
        int size;
    public:
        Array(int);
        Array(Array &);
};

Array::Array(int size)
{
    p = new int(size);
}

Array::Array(Array &A)
{
    size = A.size;
    p = new int(size);
    for (int i = 0; i <= size; i++)
    {
        p[i] = A.p[i];
    }
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    Array a1(5);
    Array a2 = a1;

    cout << "\n";
    return 0;
}
