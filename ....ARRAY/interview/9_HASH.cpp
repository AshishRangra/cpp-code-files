#include <iostream>
#include <unordered_map>
using namespace std;
string winner(string arr[])
{
    int n = 15;

    unordered_map<string, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    int val = 0;
    for (auto it = umap.begin(); it != umap.end(); it++)
    {

        if (val < it->second)
        {
            val = it->second;
        }
    }
    return arr[val];
}
int main()
{
    string arr[] = {"john", "johnny", "jackie", "johnny",
                    "john", "jackie", "jamie", "jamie",
                    "john", "johnny", "jamie", "johnny",
                    "john", "johnny", "johnny"};
    cout << winner(arr);

    return 0;
}