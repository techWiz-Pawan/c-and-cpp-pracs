//  revise Q1 of Assig 27  //
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        char* S_ptr;
        int str_len;

    protected:
        char* inputString()   
        {
            char* str;
            int initialSize = 10;
            int currentLength = 0;

            str = new char[initialSize];

            if (str == nullptr) {
                cout << "Memory allocation FAILED!" << endl;
                return nullptr;
            }

            cout << "Enter Text: ";
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
                if (currentLength == initialSize - 1) {
                    initialSize *= 2;
                    char* temp = new char[initialSize];
                    memcpy(temp, str, currentLength);
                    delete[] str;
                    str = temp;
                }

                str[currentLength++] = static_cast<char>(c);      // typecasting of c
            }
            str[currentLength] = '\0';

            return str;
        }

    public:
        String()
        {
            S_ptr = NULL;
            str_len = 0;
        }

        void setString() // if no arguments
        {
            if(S_ptr != NULL)   // agar NULL nahi hai matlab vo kisi ko point kar raha hoga tho usse free karna hoga
            {
                delete []S_ptr;
                str_len = 0;
            }
            S_ptr = inputString();
            str_len = strlen(S_ptr);
        }

        void setString(char arr[])
        {
            if(S_ptr != NULL)
            {
                delete []S_ptr;
                str_len = 0;
            }
            strcpy(S_ptr, arr);
            str_len = strlen(arr);
        }
        
        void toUpperCase()
        {
            for (int i = 0; i < str_len; i++)
            {
                if(S_ptr[i] >= 'a' && S_ptr[i] <= 'z')
                {
                    S_ptr[i] -= 32; 
                }
            }  
        }

        void toLowerCase()
        {
            for (int i = 0; i < str_len; i++)
            {
                if(S_ptr[i] >= 'A' && S_ptr[i] <= 'Z')
                {
                    S_ptr[i] += 32; 
                }
            }  
        }

        void printString()
        {
            cout << "Entered string: " << endl << S_ptr;
        }

        char* getString()
        {
            return S_ptr;
        }

        int strLength()
        {
            return str_len;
        }

        ~String()
        {
            delete []S_ptr;
            str_len = 0;
        }

};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        String str_obj;
        str_obj.setString();

        int len = str_obj.strLength();
        cout << "\nLength of the string: " << len << endl;

        str_obj.toUpperCase();
        cout << "\nUppercase string: " << endl;
        str_obj.printString();

        str_obj.toLowerCase();
        cout << "\nLowercase string: " << endl;
        str_obj.printString();
        

    cout << "\n";
    return 0;
}
