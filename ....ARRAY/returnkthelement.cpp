#include <iostream>
#include <algorithm>
using namespace std;
void returnk(int *arr, int k, int n)
{
    sort(arr, arr + n);
    cout << arr[k - 1];
}
int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15}, K = 3;
    int arr1[] = {7, 10, 4, 3, 20, 15}, K1 = 4;
    returnk(arr, K, 6);
    returnk(arr1, K1, 6);
    return 0;
}