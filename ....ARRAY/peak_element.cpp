#include <iostream>
using namespace std;
int findPeak(int *arr, int n)
{
    if (n == 1)
        return 0;
    if (arr[0] >= arr[1])
        return 0;
    if (arr[n - 1] >= arr[n - 2])
        return n - 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1] && arr[i] >= arr[i - 1])
        {
            cout << arr[i] << " ";
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 0, 5, 3};
    findPeak(arr, 5);
    return 0;
}
