#include <iostream>
using namespace std;

class Item
{
    private:
        int a, b;
    
    public:
    void setData(int x, int y) {a=x, b=y;}
    void showData() 
    {
        cout << "a = " << a << " b = " << b << endl;
    }
    /* operator+  <-- isse as a member banaya hai par mughe as a non member banana tha as a 
        friend banana hai tho kya karna hoga  */
    friend Item operator+(Item, Item);  
    friend Item operator-(Item); 
    friend Item operator+(int, Item);
    Item operator+(int);    

};

Item operator+(Item X, Item Y)  // two argument pass(i1, i2) coz caller object nahi hai iska
{
    Item temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;

    return temp; 
}

Item operator-(Item i)
{
    Item temp;
    temp.a = -i.a;
    temp.b = -i.b;

    return temp; 
}

Item Item::operator+(int k)
{
    Item temp;
    temp.a = a+k;
    temp.b = b+k;

    return temp; 
}

Item operator+(int k, Item i)
{
    Item temp;
    temp.a = i.a + k;
    temp.b = i.b;

    return temp;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Item i1, i2, i3 ;
        i1.setData(3, 4);
        i2.setData(5, 2);
        
        // '+' ko overload karna padhega as a friend function.
        i3 = i1 + i2;                 //  <-- abstract way of writing
        //  i3 = operator+(i1, i2);   // detail way of writing 
        i3.showData();

        i3 = -i1; 
        i3.showData();

        i3 = i1 + 5;        // can be done for both member function and friend also only argument change
        i3.showData();

        i3 = 5 + i1;        //can do only in friend coz left operand is not caller
        i3.showData();

    cout << "\n";
    return 0;
}
