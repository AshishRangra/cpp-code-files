#include <iostream>
using namespace std;
void heapify(int a[], int n, int i)
{

    int parent = (i - 1) / 2;

    if (a[parent] > 0)
    {
        if (a[i] > a[parent])
        {
            swap(a[i], a[parent]);
            heapify(a, n, parent);
        }
    }
}
void insert(int a[], int &n, int k)
{
    n = n + 1;
    a[n - 1] = k;
    heapify(a, n, n - 1);
}
void heapifyy(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[right] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapifyy(a, n, largest);
    }
}
void deleteh(int a[], int &n)
{
    a[0] = a[n - 1];
    n = n - 1;
    // int i = 1;
    heapifyy(a, n, 0);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    int a[] = {10, 5, 3, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);
    // cout<<n;
    int k = 60;
    // heapify(a,n,0);
    // insert(a, n, k);
    deleteh(a, n);
    printArray(a, n);
    return 0;
}