#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(11);
    s.insert(19);
    s.insert(100);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    s.erase(1);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    // s.clear();
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    if (s.find(11) != s.end())
        cout << "Found" << endl;
    else
        cout << "Not FOund";

    return 0;
}