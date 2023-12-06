#include <iostream>
using namespace std;

class shape
{
    private:
        string shapeName;

    public:
        void setShapeName(string s)
        {
            shapeName = s;
        }
        string getShapeName()
        {
            return shapeName;
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        shape s1;
        s1.setShapeName("Triangle");
        cout << "Shape Name: " << s1.getShapeName();

    cout << "\n";
    return 0;
}
