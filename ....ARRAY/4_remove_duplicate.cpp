#include <iostream>
using namespace std;
// void removeDuplicate(int *arr, int n)
// {
//     int count = 0;
//     int j = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if ((arr[i] - arr[i - 1]) != 0)
//         {
//             arr[j++] = arr[i];
//             n--;
//         }
//     }

// }
int removeDuplicate(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n - 1];
    return j;
}
int main()
{
    // int arr[] = {1, 1, 2, 2, 3, 3};
    // //
    // int n = removeDuplicate(arr, 6);
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicate(arr, n);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
