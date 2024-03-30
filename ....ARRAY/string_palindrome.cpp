#include <iostream>
using namespace std;
bool checkPalindrome(string &a)
{
    int len = a.length();
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        if (a[start] == a[end])
        {
            start++;
            end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string a = "Ashish";
    // string a = "NAMAN";
    cout << checkPalindrome(a);

    return 0;
}