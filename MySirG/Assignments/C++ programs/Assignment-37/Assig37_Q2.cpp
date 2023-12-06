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

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        complex c1;
        c1.getData(2, 5);

        c1.showData();

    cout << "\n";
    return 0;
}
