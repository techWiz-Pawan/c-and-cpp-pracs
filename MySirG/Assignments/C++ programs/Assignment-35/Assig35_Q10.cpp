// HOLD //  data structure padhne k baad

#include <iostream>
using namespace std;

class Array
{
    private:
        int *p;
        int size;
    
    public:
        Array(int arr_size) : size(arr_size)
        {
            p = new int[arr_size];
        }

        ~Array()
        {
            delete[] p;
        }



};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        const int ARRAY_SIZE = 5;
        Array arr(ARRAY_SIZE);
        

    cout << "\n";
    return 0;
}
