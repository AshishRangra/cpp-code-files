#include <iostream>
#include <unordered_map>

using namespace std;
bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        int key = it->first;

        int val = it->second;
        int pair = x - key;
        if (pair == key)
        {
            if (val > 1)
                return 1;
        }
        else
        {
            if (umap.find(pair) != umap.end())
                return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 4, 45, 10, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << hasArrayTwoCandidates(arr, n, 150);
    return 0;
}