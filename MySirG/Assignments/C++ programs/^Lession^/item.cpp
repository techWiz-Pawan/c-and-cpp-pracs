#include<iostream>
using namespace std;

/* 
                    //  *** If instance/static variables are public ***  //

    class item
    {   
        public:
            int a, b;        // instance member variables
            static int k;   //  static member variable
    };
    int item::k;

    int main()
    {
        item i1, i2;
        i2.a = 5;
        cout << i1.a << endl;                   // aise v likh sakte hai jub object define na ho
        i1.k = 10;                              // item::k = 10 
        cout << "k = " << i2.k << endl;         // cout << "k = " << item::k << endl;

        cout << "\n";
        return 0;
    }

*/

/*-----------------------------------------------------------------------------------------*/


                        //  *** If instance/static variables are private ***  //

    class item 
    {
        private:
            int a, b;
            static int k;

        public:
            void set_a(int x)       // instance Method
            {
                a = x;
            }
            void set_b(int y)       // instance Method
            {
                b = y;
            }
            int get_a()             // instance Method
            {
                return a;
            }
            int get_b()             // instance Method
            {
                return b;
            }

        // jub function static variable and instance variable dono ko access kar raha hai tub instance method
            void set_k(int z)       // instance Method
            {
                k = z;
            }
            int get_k()             // instance Method
            {
                return k;
            }

            
        /*
                    // static method v use kar sakte hai yaha
            // kewal static variable ko he acces kar rahe ho tub static method;  

            static void set_k(int z)       // static Method
            {
                k = z;
            }
            static int get_k()             // static Method
            {
                return k;
            }
        */
            

    };

    int item::k;        // defining static member variable 

    int main()
    {
        item i1, i2;
        i1.set_a(5);
        i2.set_a(6);
        cout << "a = " << i2.get_a() << endl;
        cout << "a = " << i1.get_a() << endl;

        i1.set_k(10);
        cout << "k = " << i2.get_k() << endl;

        cout << "\n";
        return 0;
    }


/*-----------------------------------------------------------------------------------------*/

/*
            //  *** If instance/static variables are private but object not there ***  //

    class item 
    {
        private:
            int a, b;
            static int k;

        public:
            void set_a(int x)       // instance Method
            {
                a = x;
            }
            void set_b(int y)       // instance Method
            {
                b = y;
            }
            int get_a()             // instance Method
            {
                return a;
            }
            int get_b()             // instance Method
            {
                return b;
            }
            static void set_k(int z)       // static Method
            {
                k = z;
            }
            static int get_k()             // static Method
            {
                return k;
            }

    };
    int item::k;        // defining static member variable 

    int main()
    {
        // you can't acces 'a' or 'b' coz they need object i.e. (item i1, i2)

        item::set_k(10);
        cout << "k = " << item::get_k() << endl;

        cout << "\n";
        return 0;
    }
*/