#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> umap;
    umap["Ashish"] = 12;
    umap["Rangra"] = 123;
    umap["Ankit"] = 8;
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    umap.insert(make_pair("Shivam", 44));
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    string key = "Shivam";
    if (umap.find(key) != umap.end())
    {
        auto temp = umap.find(key);
        cout << "Key is  " << temp->first << endl;
        cout << "Value is " << temp->second << endl;
    }
    cout << umap.size();
    umap.erase(key);
    cout << endl
         << endl
         << endl;
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    int arr[] = {1, 2, 1, 2, 34, 2, 1, 2, 5, 6, 64, 43, 3, 5, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    unordered_map<int, int> unmap;
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        unmap[key]++;
    }
    for (auto it = unmap.begin(); it != unmap.end(); it++)
    {
        cout << it->first << "         " << it->second << endl;
    }
    return 0;
}