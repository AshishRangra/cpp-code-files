#include <unordered_set>
#include <iostream>
using namespace std;
bool findSubarraySum(int *arr, int k)
{
    int n = sizeof(arr) / sizeof(int);
    unordered_set<int> s;
    int preSum = 0;
    for (int i = 0; i < n; i++)
    {
        preSum += arr[i];
        if (preSum == k)
            return true;
        if (s.find(preSum - k) != s.end())
            return true;

        s.insert(preSum);
    }
    return false;
}

int main()
{
    int arr[] = {110, 2, -1, -2, 10};
    cout << findSubarraySum(arr, 0);
    return 0;
}