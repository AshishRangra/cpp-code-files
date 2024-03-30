#include <iostream>
#include <vector>
#include <string>
using namespace std;
string check(string a)
{
    for (int i = 0; i < a.length() / 2; i++)
    {
        if (a[i] != a[a.length() - i - 1])
        {
            
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    string s = "ra2r";
    cout << check(s);
    return 0;
}