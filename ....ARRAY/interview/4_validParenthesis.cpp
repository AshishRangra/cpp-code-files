#include <iostream>
#include <stack>
using namespace std;
bool validParenthesis(string a)
{
    stack<char> st;
    for (int i = 0; i < a.length(); i++)
    {
        if (st.empty())
        {
            st.push(a[i]);
        }
        else if (st.top() == '{' && a[i] == '}' || st.top() == '(' && a[i] == ')' || st.top() == '[' && a[i] == ']')
        {
            st.pop();
        }
        else
        {
            st.push(a[i]);
        }
    }
    if (st.empty())
        return true;
    else
    {
        return false;
    }
}
int main()
{
    string expr = "{()}[]";
    cout << validParenthesis(expr);
    return 0;
}