#include <iostream>
#include <stack>
using namespace std;
stack<int> pp(stack<int> s, int ele)
{
    if (s.empty())
    {
        s.push(ele);
    }
    else
    {
        int num = s.top();
        s.pop();

        s = pp(s, ele);
        s.push(num);
    }
    return s;
}
void pus_bottom(stack<int> s, int ele)
{
    s = pp(s, ele);
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    pus_bottom(s, 10);

    return 0;
}