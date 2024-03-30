#include <iostream>
#include <stack>
using namespace std;
void sorted(stack<int> &s, int n)
{
    if (s.empty() || s.top() <= n)
    {
        s.push(n);
    }
    else
    {
        int a = s.top();
        s.pop();
        sorted(s, n);
        s.push(a);
    }
}
void sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    else
    {
        int t = s.top();
        s.pop();
        sort(s);
        sorted(s, t);
    }
}
int main()
{
    stack<int> a;
    a.push(1);
    a.push(0);
    a.push(-9);
    a.push(121);
    sort(a);
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }

    return 0;
}