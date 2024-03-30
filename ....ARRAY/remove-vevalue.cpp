#include <iostream>
using namespace std;
void rotate(int *arr, int n)
{
    for (int i = 4; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    rotate(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}