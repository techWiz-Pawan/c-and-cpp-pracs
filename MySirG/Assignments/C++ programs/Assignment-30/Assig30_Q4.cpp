// pascal triangle
#include<iostream>
using namespace std;
void pascal_triangle(int);
int combi(int , int);
int fact(int);

int fact(int n)
{
    if(n == 0)
        return 1;
    
    return n * fact(n-1);   
    
}

int combi(int n, int r)
{
    int comb;
    comb = fact(n)/(fact(r)*fact(n-r));

    return comb;
}

void pascal_triangle(int row)
{
    int i, j;
    int col = 2*row-1;
    for ( i = 1; i <= row; i++)
    {
        int flag=1, r=0;
        for ( j = 1; j <= col; j++)
        {
            if(j >= (row+1)-i && j <= (row-1)+i)
            {
                if(flag == 1)
                {
                    cout << combi(i-1, r);
                    r++;
                }
                else
                    cout << "  ";

                flag = 1 - flag;
            }
            else
                cout << "  ";
        }
        cout << "\n";
        
    }
    

}

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int N_line;
        cout << "Enter number of line you need in pascal triangle: ";
        cin >> N_line;

        pascal_triangle(N_line);

    cout<<"\n";
    return 0;
    
}
