                        /* Object by Object reading and writing */
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<fstream>
using namespace std;
class Book
{
    private:
        int bookid;
        char title[20];
        float price;
    
    public:

    void displayBook()
    {
        cout<<bookid<<"  "<<title<<"  "<<price<<endl;
    }
    void inputBook()
    {
        cout<<"Enter bookid, title and price: ";
        cin>>bookid;
        if(bookid<0)
            bookid=-bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
    }
    void store();
    void viewAllBooks();
};
void Book::store()
{
    ofstream fout;
    /*
        bookfile.dat file will be created which will keep book object data
        ios::app -> for appending all book data
        ios::binary -> jub file me txt k alawa aur v tarah ka data hai 
    */
    fout.open("bookfile.dat",ios::app|ios::binary);
    /*
        write() function hota hai ofstream k pass
        1st argument: address uss location ka jisme av data rakha hai (matlab: b1 me data rakha hai av aur mughe file me pahuchana hai )
        matlab caller object me rakha hai tho caller object 'b1' ka address i.e. (char*)this  => (char*) uss 'this' pointer ka typecast hoga kuki data character type hai  
        (char*)this  => isse hum byte byte access kar lenge

        2nd argument: kitna data => sizeof(*this)  *this matlab dereferencing this pointer ka jo hoga b1
    */
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void Book::viewAllBooks()
{
    ifstream fin;
    fin.open("bookfile.dat",ios::in|ios::binary);
    if(!fin)
        cout<<"File Not Found";
    else
    {
        // yaha par saare book ka detail(id title price) read hoga ek k baad ek jub tak eof naa ho jaye
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            displayBook();
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}
int menu()
{
    int choice;
    cout<<"\n1. Store new Book Record";
    cout<<"\n2. View All Book Records";
    cout<<"\n3. Exit";
    cout<<"\n\nEnter your choice";
    cin>>choice;
    return choice;
}
int main()
{
    Book b1;
    while(true)
    {
        switch(menu())
        {
            case 1:
                b1.inputBook();
                b1.store();
                break;
            case 2:
                b1.viewAllBooks();
                break;
            case 3:
                exit(0);
            default:
                cout<<"Invalid Choice";

        }
    }
    
}
