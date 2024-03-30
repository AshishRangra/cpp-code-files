#include <iostream>
#include <stdlib.h>
#include <stack>
#include <limits.h>
#include <vector>
using namespace std;
vector<int> nextSmallerElement(vector<int> a, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = a[i];
        while (!s.empty() && s.top() != -1 && a[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallerElement(vector<int> a, int n)
{

    stack<int> s;
    s.push(-1);
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        int curr = a[i];
        while (!s.empty() && s.top() != -1 && a[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangleArea(vector<int> &a)
{
    int n = a.size();
    vector<int> next(n);
    next = nextSmallerElement(a, n);
    vector<int> prev(n);
    prev = prevSmallerElement(a, n);
    // int area = INT_MIN;
    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = a[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;

        area = max(area, newArea);
    }
    // cout << area;
    return area;
}
int main()
{
    vector<int> a = {6, 2, 5, 4, 5, 1, 6};
    // int n = a.size();
    cout << largestRectangleArea(a);

    return 0;
}