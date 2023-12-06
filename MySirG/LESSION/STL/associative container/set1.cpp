#include <iostream>
#include <set>
#include <string>

using namespace std;

class Book
{
    private:
        int Book_id;
        string name;
        float price;

    public:
        Book(int id, string n, float p) : Book_id(id), name(n), price(p)
        {}

        int getBook_ID() const
        {
            return Book_id;
        }

        float getBook_price() const
        {
            return price;
        }

        string getBook_name() const
        {
            return name;
        }

        void showBook() const
        {
            cout << "Book_ID : " << Book_id << " Name : " << name << " Price : " << price << endl;
        }
};

class Order_by_ID        // sorting in term of book id so we need a functor
{
    public:
        bool operator()(const Book &b1, const Book &b2) const
        {
            if(b1.getBook_ID() < b2.getBook_ID())
                return true;
            return false;
        }
};

class Order_by_Price        // sorting in term of book price so we need a functor
{
    public:
        bool operator()(const Book &b1, const Book &b2) const
        {
            if(b1.getBook_price() < b2.getBook_price())
                return true;
            return false;
        }
};

class Order_by_Name        // sorting in term of book name so we need a functor
{
    public:
        bool operator()(const Book &b1, const Book &b2) const
        {
            if(b1.getBook_name() < b2.getBook_name())
                return true;
            return false;
        }
};

int main()
{
    set<Book, Order_by_ID> s1 = {        // * isliye kyu k dereferencing karna hai
                                        *new Book(1, "cpp", 400.0),
                                        *new Book(4, "python", 300.0),
                                        *new Book(5, "java", 480.0),
                                        *new Book(2, "C#", 279.0),
                                        *new Book(3, "ruby", 340.0)
                                    };
    cout << "Sorted by ID :- \n";
    for(auto x:s1)
        x.showBook();
    cout << endl;

    cout << endl;
    set<Book, Order_by_Price> s2 = {        // * isliye kyu k dereferencing karna hai
                                        *new Book(1, "cpp", 400.0),
                                        *new Book(4, "python", 300.0),
                                        *new Book(5, "java", 480.0),
                                        *new Book(2, "C#", 279.0),
                                        *new Book(3, "ruby", 340.0)
                                    };
    cout << "Sorted by Price :- \n";
    for(auto x:s2)
        x.showBook();
    cout << endl;

    cout << endl;
    set<Book, Order_by_Name> s3 = {        // * isliye kyu k dereferencing karna hai
                                        *new Book(1, "cpp", 400.0),
                                        *new Book(4, "python", 300.0),
                                        *new Book(5, "java", 480.0),
                                        *new Book(2, "C#", 279.0),
                                        *new Book(3, "ruby", 340.0)
                                    };
    
    cout << "Sorted by Name :- \n";     
    // using explicit iterator
    set<Book, Order_by_Name>:: iterator it;
    for(it = s3.begin(); it != s3.end(); it++)
        it->showBook();
    cout << endl;

    return 0;
}