#include <iostream>
using namespace std;

class complex
{
    private:
        int real, imag;
    public:
        complex(int a, int b) : real(a), imag(b)
        {}  
        void showData();  
};

void complex::showData()
{
    // cout << "\n";
    cout << real << " + " << imag << "i" << endl;
}

void Obj_array()
{
    // in question it was given only one parameterize constructor
    // complex c[5] = {{3, 6}, {2, 5}, {6, 4}, {2, 3}, {8, 3}}; <-- this wrong way

    complex c[5] = {complex(3, 4), complex(2, 5), complex(5, 8), complex(1, 5), complex(1, 9)};
    for (int i = 0; i < 5; i++)
    {
        c[i].showData();
    }
    
    
    // this are "{complex(3, 4), complex(2, 5), complex(5, 8), complex(1, 5), complex(1, 9)}" initialiser list
}    

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        complex c(2, 7);
        c.showData();
        cout << endl;
        Obj_array();

    cout << "\n";
    return 0;
}
