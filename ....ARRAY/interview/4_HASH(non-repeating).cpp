#include <iostream>
#include <unordered_map>
using namespace std;
int firstNonRepeatingElement(int arr[], int n)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        auto temp = umap.find(arr[i]);
        if (temp->second == 1)
            return arr[i];
    }
}
int main()
{
    int arr[] = {9, 4, 9, 6, 7, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << firstNonRepeatingElement(arr, n);
    return 0;
}

