#include <iostream>
#include <unordered_map>
using namespace std;
int RepeatingElement(int arr[], int n)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        auto temp = umap.find(arr[i]);
        if (temp->second > 1)
            return i + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10, 5, 100, 50, 3, 50, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << RepeatingElement(arr, n);

    return 0;
}