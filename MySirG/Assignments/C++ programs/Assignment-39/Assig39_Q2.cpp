#include <iostream>
#include <fstream>
using namespace std;
void searchWord();

ofstream& writing()
{
    ofstream sendF;
    sendF.open("message.txt", ios::out);

    return sendF;
}
void searchWord()
{

}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    writing();
    searchWord();

    cout << "\n";
    return 0;
}
