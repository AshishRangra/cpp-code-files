#include <iostream>
using namespace std;
void max_array(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1, 3};
    max_array(arr, 9);
    return 0;
}