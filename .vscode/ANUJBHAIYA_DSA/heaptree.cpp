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
void heapifyy(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree
		heapify(arr, n, largest);
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