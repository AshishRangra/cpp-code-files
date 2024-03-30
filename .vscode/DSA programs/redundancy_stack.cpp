#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool findREdundancy(string &s)
{
    stack<char> ss;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            ss.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isRedundant = true;
                while (ss.top() != '(')
                {
                    /* code */
                    char top = ss.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {

                        isRedundant = false;
                    }
                    ss.pop();
                }
                if (ss.empty())
                    return false;
                ss.pop();
                if (isRedundant == true)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    string s = "a-b";
    if (findREdundancy(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}