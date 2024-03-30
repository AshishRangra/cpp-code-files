#include <iostream>
using namespace std;
void moveZero(int *arr, int n)
{
    // int j = n - 1;
    // int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         count++;
    //     }
    // }
    // // cout << "count" << count;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0 && count > 0)
    //     {
    //         swap(arr[i], arr[j--]);
    //         count--;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        if (arr[i] == 0)
        {
            j = i + 1;
        }
        while (arr[j] != 0)
        {
            j++;
        }
        swap(arr[i], arr[j]);
    }
}
int main()
{
    // int arr[] = {1, 2, 0, 3, 0, 0, 0, 4, 3, 2, 1, 2};
    // moveZero(arr, 12);
    int arr[] = {3, 5, 0, 0, 4};
    moveZero(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}