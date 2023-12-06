#include <iostream>
using namespace std;

template <typename X>
void sort_array(X ch[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i != j && ch[i] < ch[j])
            {
                X t = ch[i];
                ch[i] = ch[j];
                ch[j] = t;
            }

        }
        
    }
    
}

int main()
{   
    double ch[5] = {'e', 't', 's', 'y', 'a'};

    sort_array(ch, 5);

    cout << "After sorting : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;
    

    return 0;
}