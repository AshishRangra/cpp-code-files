#include <iostream>
using namespace std;
void reverse_of_array(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout << "Enter the size of array u want" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse_of_array(arr, n);
    // int len = sizeof(arr) / sizeof(int);
    // cout<<"Length of array "<<len;
    cout << "Reverse of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}