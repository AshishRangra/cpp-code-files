// find duplicate element

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    // XOR all elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR [1, n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    cout << ans;
    return ans;
}
int main()
{
    vector<int> arr = {5, 2, 5, 2, 7, 6, 6};
    findDuplicate(arr);
}