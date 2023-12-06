#include<iostream>
using namespace std;

struct book
{
    private:
        int book_id;
        char title[20];
        float price;

    public:
        void inputBook()
        {
            cout << "Enter book ID: ";
            cin >> book_id;

            cin.ignore();
            cout << "Enter book name: ";
            cin.getline(title, 20);

            cout << "Enter book price: ";
            cin >> price;
        }

        void displayBook()
        {
            cout << "\nBook ID: " << book_id << endl;
            cout << "\nBook title: " << title << endl;
            cout << "\nBook price: " << price << endl;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        book b1;
        b1.inputBook();
        b1.displayBook();
        

    cout << "\n";
    return 0;
}
