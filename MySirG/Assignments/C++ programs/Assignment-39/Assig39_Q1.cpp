#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
void copyContent();

void copyContent()
{
    ofstream sendF;
    ifstream receiveF;
    string str;

    receiveF.open("Assignments/C++ programs/Assignment-39/output/source.txt");
    if(!receiveF)
    {
        cout << "File not Found";
        exit(1);
    }

    sendF.open("Assignments/C++ programs/Assignment-39/output/dest.txt");
    if(!sendF)
    {
        cout << "Destination file not found";
        receiveF.close();
        exit(2);
    }

    if(receiveF && sendF)
    {
        while(getline(receiveF, str))
        {
            sendF << str << endl;
        }
        cout << "File copied successfully. ";
    }
    else
        cout << "File can't open ";

    sendF.close();
    receiveF.close();
    
}
int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */

    copyContent();

    cout << "\n";
    return 0;
}
