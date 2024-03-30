#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void Solve(stack<int> i, int count, int size)
{
    if (count == size / 2)
    {
        i.pop();

        return;
    }
    int num = i.top();
    i.pop();
    count++;
    Solve(i, count, size);
    i.push(num);
}
void del(stack<int> a, int size)
{
    int count = 0;
    Solve(a, count, size);
}
int main()
{
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    del(a, a.size());
    while (!a.empty())
    {
        // int p = a.top();

        cout << a.top() << endl;
        a.pop();
    }
    return 0;
}