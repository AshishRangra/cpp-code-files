#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Stack
{
public:
    int mini;
    stack<int> s;
    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {
                s.push(2 * data - mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }
    int POP()
    {
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        s.pop();
        if (curr > mini)
        {
            return curr;
        }
        else
        {
            int prevMin = mini;
            int val = 2 * mini - curr;
            mini = val;
            return prevMin;
        }
    }
    int top()
    {
        if (s.empty())
            return -1;
        int curr = s.top();
        if (curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }
    bool isEmpty()
    {
        return s.empty();
    }
    int getMin()
    {
        if (s.empty())
        {
            if (s.empty())
            {
                return -1;
            }
            return mini;
        }
    }
};
int main()
{
    return 0;
}