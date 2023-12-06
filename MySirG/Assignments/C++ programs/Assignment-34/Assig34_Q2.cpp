/* Define non-parameterise and parameterise constructor */
#include <iostream>
using namespace std;

class customer
{
    private:
        int cust_id;
        string name, email, mobile;     // mobile me koi add/subtract karna nahi hai tho string le sakta hu 

                                // non-parameterise
        customer()
        {
            cust_id = 1;
            name = "sholuu";
            email = "xyz123@gmail.com";
            mobile = "9892813367";
        }

                                // parameterise
        customer(int id, string n, string e, string mob)
        {
            cust_id = id;
            email = e;
            mobile = mob;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        

    cout << "\n";
    return 0;
}
