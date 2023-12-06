#include<iostream>
using namespace std;
void findHighestDigi(int);

void findHighestDigi(int n)     // 73
{
    int max, smax, maxele=0;    // maxele = 9
    while (n)
    {
        max = n%10;     //3
        n = n/10;
        smax = n%10;    //7

        if(maxele <= max || maxele <= smax)    
        {
            if(smax > max)
                maxele = smax;
            else
                maxele = max;

        }
        
    }
    cout << "The highest ele: " << maxele;

    
}

int main()
{
    cout<<"Hi Easy"<<endl;

        /* Start your code here */
        int num = 1234;

        findHighestDigi(num);

    cout<<"\n";
    return 0;
}


