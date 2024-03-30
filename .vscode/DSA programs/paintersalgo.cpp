#include <iostream>
using namespace std;
bool isPossible(int a[], int n, int k, int mid)
{
    int painterCount = 1;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
        {
            return false;
        }
        if (currSum + a[i] > mid)
        {
            painterCount++;
            currSum = a[i];
            if (painterCount > k)
            {
                return false;
            }
        }
    }
    return true;
}
int findLargestMinDistance(int a[], int n, int k)
{
    int s = 0;
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int end = sum;
    while (s <= end)
    {
        int mid = s + (end - s) / 2;
        if (isPossible(a, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int a[] = {5, 5, 5, 5};
    cout << findLargestMinDistance(a, 4, 2);
}