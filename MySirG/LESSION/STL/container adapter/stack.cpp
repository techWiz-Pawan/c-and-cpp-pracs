#include <iostream>
#include <stack>
#include <vector>
#include <list>


using namespace std;

int main()
{
    stack<int> s1;                   // adapted from 'deque' (this is bydefault) | matlab yaha double ended queue use ho raha hai
    stack<int, vector<int>> s2;      // if you want to adopt from 'vector' | matlab yaha dynamic array use ho raha hai
    stack<int, list<int>> s3;         // 'list' | matlab yaha doubly linked list use ho raha hai

    // yaha performance v analye kar sakta hu jaise linked List thodi slow hoti hai array fast hota hai aisa kuch

    // methods in stack
    cout << "isEmpty = " << s1.empty() << endl;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.push(400);
    s1.push(500);

    cout << s1.top() << endl;
    cout << s1.size() << endl;

    s1.pop();
    cout << s1.top() << endl;

    return 0;
}

// NOTE //
/* segmentation error : matlab memory se related error */