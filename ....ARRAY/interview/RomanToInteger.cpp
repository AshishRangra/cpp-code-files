#include <iostream>
#include <unordered_map>
using namespace std;
void romanTointeger(string s)
{
    unordered_map<char, int> umap;
    umap.insert({'I', 1});
    umap.insert({'V', 5});
    umap.insert({'X', 10});
    umap.insert({'L', 50});
    umap.insert({'C', 100});
    umap.insert({'D', 500});
    umap.insert({'M', 1000});
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (umap[s[i]] < umap[s[i + 1]])
        {
            sum += umap[s[i + 1]] - umap[s[i]];
            i++;
            continue; // skips the rest of cuurent iteration and moves to next iterationof the loop
        }
        sum += umap[s[i]];
    }
    cout << sum;
}
int main()
{
    string s = "XIV";
    romanTointeger(s);
    return 0;
}