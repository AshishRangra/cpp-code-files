#include <iostream>
using namespace std;
int second_larg(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    int secondmax = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && arr[i] >= secondmax)
        {
            secondmax = arr[i];
        }
    }
    cout << secondmax;
}
int second_small(int *arr, int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    int secondmin = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != min && (arr[i] > min && arr[i - 1] == min))
        {
            secondmin = arr[i];
        }
    }
    cout << secondmin;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    second_larg(arr, 6);
    second_small(arr, 6);
    return 0;
}