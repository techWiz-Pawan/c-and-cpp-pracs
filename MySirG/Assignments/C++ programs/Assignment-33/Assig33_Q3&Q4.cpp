#include <iostream>
using namespace std;

class TestResult
{
    private:
        int roll_no, right, wrong, net_score;
        static int right_weightage, wrong_weightage; 
    
    public:
        void setRoll_no(int roll) {roll_no = roll;}
        void setRight(int r) {right = r;}
        void setWrong(int w) {wrong = w;}
        void setNet_score(int n) {net_score = n;}

        int getRoll_no() {return roll_no;}
        int getRight() {return right;}
        int getWrong() {return wrong;}
        int getNet_score() {return net_score;}

        static void setRight_weightage(int r_w) {right_weightage = r_w;}
        static void setWrong_weightage(int w_w) {wrong_weightage = w_w;}
        static int getRight_weightage() {return right_weightage;}
        static int getWrong_weightage() {return wrong_weightage;}
};

int TestResult::right_weightage = 4;
int TestResult::wrong_weightage = 1;

void setTestResult(TestResult& tr, int roll, int r, int w)
{
    tr.setRoll_no(roll);
    tr.setRight(r);
    tr.setWrong(w);
    tr.setNet_score(r*TestResult::getRight_weightage() - w*TestResult::getWrong_weightage());
}

void sortBY_NetScore(TestResult stu_result[], int size)
{
    int i, j; 
    TestResult temp;
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if(stu_result[i].getNet_score() > stu_result[j].getNet_score())
            {
                temp = stu_result[i];
                stu_result[i] = stu_result[j];
                stu_result[j] = temp;
            }
        }
    }
   
}

void printTestResult(TestResult tr)
{
    cout << "\n" << tr.getRoll_no() << " " << tr.getRight() << " " << tr.getWrong() << " " << tr.getNet_score();
}

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    TestResult stu_result[5];

    setTestResult(stu_result[0], 101, 50, 40);
    setTestResult(stu_result[1], 102, 60, 25);
    setTestResult(stu_result[2], 103, 76, 20);
    setTestResult(stu_result[3], 104, 82, 8);
    setTestResult(stu_result[4], 105, 98, 3);
    
    sortBY_NetScore(stu_result, 5);

    for (int i = 0; i < 5; i++)
    {
        printTestResult(stu_result[i]);
        cout << endl;    
    }

    cout << "\n";
    return 0;
}
