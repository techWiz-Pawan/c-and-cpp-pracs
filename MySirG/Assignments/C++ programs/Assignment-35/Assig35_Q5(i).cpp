#include <iostream>
using namespace std;

class matrix
{
    private:
        int M[3][3];

    public:
        void inputMatrix()      
        {
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> M[i][j];       
                }
            }
        }

        void printMatrix()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << M[i][j] << "  ";       
                }
                cout << endl;
            }
        }

        matrix operator+(matrix);
        matrix operator-(matrix);
        matrix operator*(matrix);

};

matrix matrix::operator+(matrix mat)
{
    matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.M[i][j] = M[i][j] + mat.M[i][j];       
        }
    }
    return temp;

}

matrix matrix::operator-(matrix mat)
{
    matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.M[i][j] = M[i][j] - mat.M[i][j];       
        }
    }
    return temp;
}

matrix matrix::operator*(matrix mat)
{
    matrix temp;
    int sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (M[i][k] * mat.M[k][j]);
             temp.M[i][j] = sum;   
            }
             
        }
    }
    return temp;
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
        matrix m1, m2, m3;
        
        cout << "Enter matrix 1 elements: ";
        m1.inputMatrix();
        cout << "Enter matrix 2 elements: ";
        m2.inputMatrix();

        cout << "\nmatrix 1: \n";
        m1.printMatrix();
        cout << "\nmatrix 2: \n";
        m2.printMatrix();

        // operation '+' , '-' , '*'.

        m3 = m1 + m2;
        cout << "\nTwo matrix sum: " << endl;
        m3.printMatrix();

        m3 = m1 - m2;
        cout << "\nTwo matrix sub: " << endl;
        m3.printMatrix();

        m3 = m1 * m2;
        cout << "\nTwo matrix mul: " << endl;
        m3.printMatrix();


    cout << "\n";
    return 0;
}
