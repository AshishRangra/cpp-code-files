#include <iostream>
#include <Stack>
using namespace std;
int findMinimumCost(string s)
{
    if (s.length() % 2 == 1)
    {
        return -1;
    }
    stack<char> a;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{')
        {
            a.push(ch);
        }
        else
        {
            if (!a.empty() && a.top() == '{')
            {
                a.pop();
            }
            else
            {
                a.push(ch);
            }
        }
        int aa = 0, b = 0;
        while (!a.empty())
        {
            if (a.top() == '{')
            {
                b++;
            }
            else
            {
                aa++;
            }
            a.pop();
        }
        int ans = (aa + 1) / 2 + (b + 1) / 2;
        return ans;
    }
}
int main()
{
    string ss = "{{{}}";
    cout << findMinimumCost(ss);
    return 0;
}