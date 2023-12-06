// HOLD --> logical error
#include <iostream>
using namespace std;

class Game
{
    private:
        int arr[5];

    public:
        void setScore(int round, int score)
        {
            arr[round] = score;
        }
        int getScore(int round)
        {
            return arr[round];   
        }

};

class GameResult : public Game
{
    private:
        int ARR[5];

    public:
        void setResult(int round)
        {
            ARR[round] = getScore(round);
        }
        int getResult(int round)
        {
            return ARR[round];
        }
};

int main()
{
    cout << "Hi Easy" << endl;

        /* Start your code here */
    Game g1;
    g1.setScore(0, 1);
    g1.setScore(1, 2);
    g1.setScore(2, 0);
    g1.setScore(3, 2);
    g1.setScore(4, 0);
        
    for (int i = 0; i < 5; i++)
    {
        cout << "round: " << i+1 << "   Score: " << g1.getScore(i) << endl; 
    }

    GameResult result;
    
    result.setResult(0);
    result.setResult(1);
    result.setResult(2);
    result.setResult(3);
    result.setResult(4);

    cout << "\n";
    
    cout << "round 1 :" << result.getResult(0) << endl;
    cout << "round 2 :" << result.getResult(1) << endl;
    cout << "round 3 :" << result.getResult(2) << endl;
    cout << "round 4 :" << result.getResult(3) << endl;
    cout << "round 5 :" << result.getResult(4) << endl;
    
    cout << "\n";
    return 0;
}
