#include <iostream>
// #include <string.h>
#include <cstring>
using namespace std;

int main() {
    // Write C++ code here
    char* str;
    int initialSize = 10;
    int currentLen = 0;
    
    str = new char[initialSize];
    if(str == NULL)
    {
        cout << "Memory allocation FAILED!" << endl;
        return 1;
    }
    
    cout << "Enter Text: ";
    int c;
    while((c = getchar()) != '\n' && c != EOF)
    {
        if(currentLen == initialSize - 1)
        {
            initialSize *= 2;
            char* temp = new char[initialSize];
            memcpy(temp, str, currentLen);
            
            delete []str;
            str = temp;
        }
        str[currentLen++] = static_cast<char>(c);       // typecasting of c
        
    }
    str[currentLen] = '\0';
    
    cout << "You Entered: " << endl;
    cout << str << endl;
    
    delete []str;

    return 0;
}