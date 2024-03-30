#include <iostream>
using namespace std;
int elementAtIndex(int a[], int k, int s, int e)
{

    int mid = s + (e - s) / 2;
    if (a[mid] == k)
        return mid;
    else if (a[mid] > k)
    {
        e = mid - 1;
        return elementAtIndex(a, k, s, e);
    }
    else
    {
        s = mid + 1;
        return elementAtIndex(a, k, s, e);
    }
    return mid;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 7;
    cout << elementAtIndex(arr, k, 0, 8);
    return 0;
}