#include <iostream>
#include <queue>
#include <deque>
#include <list>
#include <vector>

using namespace std;
int main()
{
    queue<int, list<int>> q1;

    cout << "isEmpty = " << q1.empty() << endl;

    q1.push(10);        // av tho front element ye hai pop() karne se ye wala udd jayega
    q1.push(20);
    q1.push(30);

    q1.pop();
    cout << "front = " << q1.front() << endl;
    cout << "back = " << q1.back() << endl;

    cout << "size = " << q1.size() << endl;

    return 0;
}