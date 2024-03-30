#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> next_small_ele(vector<int> a, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = a[i];
        while (s.top() >= curr)
        {
            /* code
             */
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    } 
     return ans;
}
int main()
{
    vector<int> a;
    a.push_back(2);
    a.push_back(1);
    a.push_back(4);
    a.push_back(3);
    next_small_ele(a, 4);

    return 0;
}