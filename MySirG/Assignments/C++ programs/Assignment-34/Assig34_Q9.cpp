#include <iostream>
using namespace std;

class Room
{
    private:
        int room_no;
        string room_type;       // AC or NON-AC
        bool is_AC;
        float price;

    public:
        Room(int r_n, string r_t, bool b, float r_p)
        {
            room_no = r_n;
            room_type = r_t;
            is_AC = b;
            price = r_p;
        }

        void showData()
        {
            cout << "Room No.: " << room_no << endl;
            cout << "Room Type: " << room_type << endl;
            cout << "AC or NON-AC: " << (is_AC ? "yes" : "no") << endl;
            cout << "Price: " << price << endl;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    Room r1(101, "AC", true, 500.0);
    
    r1.showData();

    cout << "\n";
    return 0;
}
