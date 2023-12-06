#include <iostream>
using namespace std;

class Book
{
    private:
        int book_id;
        string title;
        float price;

    public:
        Book()
        {
            book_id = 23;
            title = "everything is lie";
            price = 250.0;
        }

        Book(int id, string t, float p)
        {
            book_id = id;
            title = t;
            price = p;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        Book b(22, "life and death", 450.0);        

    cout << "\n";
    return 0;
}
