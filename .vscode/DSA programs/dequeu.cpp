#include <iostream>
#include <queue>
using namespace std;
int main()
{
    deque<int> q;
    q.push_back(1);
    q.push_front(12);
    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop_back();
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop_back();
    cout << q.front() << endl;
    cout << q.back() << endl;
    return 0;
}