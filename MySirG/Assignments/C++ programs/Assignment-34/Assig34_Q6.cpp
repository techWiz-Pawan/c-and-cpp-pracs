#include <iostream>
using namespace std;

class Number
{
    private:
        int size;
        int *arr;

    public:
        Number(int size)
        {
            this->size = size;
            arr = new int[size];
        }

        Number(Number& N)
        {
            size = N.size;
            arr = new int[size];
            for (int i = 0; i < size; i++)
            {
                arr[i] = N.arr[i]; 
            }
            
        }

        ~Number()
        {
            delete []arr;
        }

        void setElement(int index, int ele)
        {
            if(index >= 0 && index < size)
                arr[index] = ele;
            
        }

        void displayArray()
        {
            cout << "Array elements: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << "   ";
            }
            
        }

};

using namespace std;

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Number num(5);

        num.setElement(0, 1);
        num.setElement(1, 10);
        num.setElement(2, 20);
        num.setElement(3, 30);
        num.setElement(4, 40);
        
        num.displayArray();

    cout << "\n";
    return 0;
}
