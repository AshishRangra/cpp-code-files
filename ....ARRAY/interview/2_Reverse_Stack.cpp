#include <iostream>
#include <stack>
#include <string>
using namespace std;
void reverse(string s)
{
    stack<char> charStack;
    for (char i : s)
        charStack.push(i);
    string reversed = "";
    while (!charStack.empty())
    {
        reversed += charStack.top();
        charStack.pop();
    }
    cout << reversed << endl;
}
int main()
{
    string s = "Ashish";
    reverse(s);
    return 0;
}
