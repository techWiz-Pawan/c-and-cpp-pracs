#include <iostream>
using namespace std;

class circle
{
    private:
        int radius;

    public:
        circle()
        {
            radius = 5;
        }

        circle(int r)
        {
            radius = r;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    circle c(8);

    

    cout << "\n";
    return 0;
}
