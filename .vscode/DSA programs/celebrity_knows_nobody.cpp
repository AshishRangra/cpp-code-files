#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool knows(vector<vector<int>> &as, int a, int b)
{
    if (as[a][b] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int celebrityProblem(vector<vector<int>> &as, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if (knows(as, a, b))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }

    int candidate = s.top();
    s.pop();

    for (int i = 0; i < n; i++)
    {
        if (i != candidate && (knows(as, candidate, i) || !knows(as, i, candidate)))
        {
            return -1;
        }
    }

    return candidate;
}

int main()
{
    vector<vector<int>> a = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    int n = 3;
    cout << celebrityProblem(a, n);
    return 0;
}