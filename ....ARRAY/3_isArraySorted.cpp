#include <iostream>
#include <algorithm>
using namespace std;
// bool isArraySorted(int *arr, int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
bool isArraySorted(int *arr, int n)
{
    if (is_sorted(arr, arr + n))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    // int arr[] = {1, 2, 2, 3, 1, 4};
    int arr[] = {1, 2, 2, 3, 3, 4, 4};
    cout << isArraySorted(arr, 6);
    return 0;
}