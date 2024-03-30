#include <iostream>
#include <unordered_set>
using namespace std;
int Intersection(int arr[], int arr2[], int n, int m)
{
    int count = 0;
    unordered_set<int> uset;
    for (int i = 0; i < n; i++)
    {
        uset.insert(arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (uset.find(arr2[i]) != uset.end())
            count++;
    }
    return count;
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {30, 4, 5, 6};
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
    cout << Intersection(arr1, arr2, n, m);
    return 0;
}