#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string s = "Ashish";
    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        char ch = s[i];
        c.push(ch);
    }
    string ans = "";
    while (!c.empty())
    {
        char ch = c.top();
        ans.push_back(ch);
        c.pop();
    }
    cout << "Answer    " << ans << endl;
    return 0;
}