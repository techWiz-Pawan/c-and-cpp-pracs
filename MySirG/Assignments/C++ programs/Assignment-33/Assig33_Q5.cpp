#include <iostream>
using namespace std;

class matrix
{
    private:
        int M[3][3];
    
    public:
        void setMatrix(int m[][3])
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    M[i][j] = m[i][j];
                }
            }
        }

        void printMatrix()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << M[i][j] << " ";
                }
                cout << "\n";
            }
        }

        matrix addMatrix(matrix);
        matrix subMatrix(matrix);
        matrix mulMatrix(matrix);
        matrix transpose();
        bool isSingular();
};

matrix matrix::addMatrix(matrix m2)
{
    matrix temp;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.M[i][j] = M[i][j] + m2.M[i][j];
        }
        
    }
    return temp;
    
}

matrix matrix::subMatrix(matrix m2)
{
    matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.M[i][j] = M[i][j] - m2.M[i][j];
        }  
    }
    return temp;
}

matrix matrix::mulMatrix(matrix m2)
{
    int sum;
    matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (M[i][k] * m2.M[k][j]);
                temp.M[i][j] = sum;
            }
            
        }
        
    }
    return temp;
    
}

matrix matrix::transpose()
{
    matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.M[j][i] = M[i][j];
        }
        
    }
    return temp;
    
}

bool matrix::isSingular()
{
    int d;
    d = M[0][0] * ((M[2][2] * M[1][1]) - (M[2][1] * M[1][2])) -
        M[0][1] * ((M[2][2] * M[1][0]) - (M[2][0] * M[1][2])) +
        M[0][2] * ((M[2][1] * M[1][0]) - (M[2][0] * M[1][1]));

    return (d == 0);     // here return will check 'd == 0' or not if it is o then it will return 'true' 
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    
    matrix m1, m2, result;
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
        
    m1.setMatrix(matrix1);
    m2.setMatrix(matrix2);

    cout << "Matrix 1: " << endl;
    m1.printMatrix();

    cout << "Matrix 2: " << endl;
    m2.printMatrix();

    cout << "Matrix Addition result: " << endl;
    result = m1.addMatrix(m2);
    result.printMatrix();

    cout << "Matrix Substraction result: " << endl;
    result = m1.subMatrix(m2);
    result.printMatrix();

    cout << "Matrix Multiplication result: " << endl;
    result = m1.mulMatrix(m2);
    result.printMatrix();

    cout << "Matrix transpose result: " << endl;
    result = m1.transpose();
    result.printMatrix();

    if(m1.isSingular())
        cout << "matrix m1 is singular." << endl;
    else
        cout << "matrix m1 is NOT singular." << endl;

    cout << "\n";
    return 0;
}
