#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &a, int n)
{
    if (a.empty())
    {
        a.push(n);
        return;
    }
    else
    {
        int num = a.top();
        a.pop();
        insert(a, n);
        a.push(num);
    }
}
void rec(stack<int> &a)
{
    if (a.empty())
    {
        return;
    }
    else
    {
        int t = a.top();
        a.pop();
        rec(a);
        insert(a, t);
    }
    return;
}
int main()
{
    stack<int> a, b;
    a.push(13);
    a.push(32);
    a.push(12);
    a.push(23);
    b=a;
    cout << "Orignal stack" << endl;
    while (!a.empty())
    {
        cout << a.top() << endl;
        a.pop();
    }
    rec(b);
    cout << "after reverse" << endl;
    while (!b.empty())
    {
        cout << b.top() << endl;
        b.pop();
    }

    return 0;
}