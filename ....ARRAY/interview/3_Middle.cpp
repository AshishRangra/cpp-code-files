#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void deleteMiddleElement(stack<int> &s, int count, int pos)
{
    if (s.empty())
        return;

    int top = s.top();
    s.pop();
    deleteMiddleElement(s, count + 1, pos);
    if (count != pos)
        s.push(top);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int len = st.size();
    int middle = len / 2.0;
    deleteMiddleElement(st, 0, middle);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}