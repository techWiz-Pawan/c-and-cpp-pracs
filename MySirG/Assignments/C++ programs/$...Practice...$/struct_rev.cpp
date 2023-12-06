#include<iostream>
#include<string.h>
#include<stdio.h> 
using namespace std;

struct book
{
    int book_id;
    char title[20];
    float price;
};
book inputBookData();
void displayBookData(book);
int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        book b1 = {1, "drilling c++", 350.0}, b2, b3;

        b2.book_id = 2;
        strcpy(b2.title, "Hello World");
        b2.price = 270.0;

        b3 = inputBookData();
        displayBookData(b3);

    cout<<"\n";
    return 0;
}

book inputBookData()
{
    book b;
    cout << "Enter book Id: ";
    cin >> b.book_id;

    cin.ignore();                            
    cout << "Entet book title: ";
    
    cin.getline(b.title, 20);           

    cout << "Enter book price: ";
    cin >> b.price;

    return b;
}

void displayBookData(book b)
{
    cout << "Book ID: " << b.book_id << endl;
    cout << "Book Name: " << b.title << endl;
    cout << "Book Price: " << b.price << endl;

}


/* 
        In c lang

    1] fflush(stdin);
    2] fgets(b.title, 20, stdin); 
    3] struct book b;   --> 'struct' is used in c
    4] in c we cant use function
        struct book
        {
            int book_id;
            char title[20];
            float price;
        };

*/