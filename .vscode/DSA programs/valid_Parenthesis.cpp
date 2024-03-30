#include <iostream>
#include <stdlib.h>
#include <stack>
#include <string>
using namespace std;
bool isValid(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        if (ch == '{' || ch == '(' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                char top = s.top();
                if (ch == '}' && top == '{' || ch == ')' && top == '(' || ch == ']' && top == '[')
                {
                    s.pop();
                }
                else
                {
                    cout << false;
                    return false;
                }
            }
            else
            {
                cout << false;
                return false;
            }
        }
        if (s.empty())
        {
            cout << "true";
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    // stack<char>s;
    // s.push('{');
    //  s.push('(');
    //   s.push(')');
    //    s.push('}');
    //     // s.push('{');
    string s = "{()]}";
    if (isValid(s))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "unbalanced";
    }

    cout << 0;
}