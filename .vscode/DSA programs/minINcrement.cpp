#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long int minIncrements(vector<int> a, int n)
{
    // Code here
    long ans = 0;
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
    {
        int dif = a[i - 1] - a[i];
        if (a[i - 1] >= a[i])
        {
            ans = dif + ans + 1;
            a[i] = a[i] + dif + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {1, 1, 2, 3};
    cout << minIncrements(a, 4);
    return 0;
}