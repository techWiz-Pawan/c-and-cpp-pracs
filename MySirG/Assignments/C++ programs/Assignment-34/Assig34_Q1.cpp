#include <iostream>
using namespace std;

class cuboid
{
    private:
        int length, breadth, height;
    
    public:
        cuboid(int x, int y, int z)
        {
            length = x;
            breadth = y;
            height = z;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        cuboid c1(4, 5, 6);
        

    cout << "\n";
    return 0;
}
