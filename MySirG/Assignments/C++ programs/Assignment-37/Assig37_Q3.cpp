#include <iostream>
using namespace std;

class complex
{
    private:    
        int a, b;

    public:
        void getData(int a, int b)
        {
            this->a = a;
            this->b = b;
        }

        void showData()
        {
            cout << a << " + " << b << "i";
        }
};

void create_OBJ()       // non-member function created 
{
    complex* ptr = new complex;
    ptr->getData(2, 4);
    ptr->showData();   
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        create_OBJ();        

    cout << "\n";
    return 0;
}
