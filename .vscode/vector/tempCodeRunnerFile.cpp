#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
int rr(int *arr, int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        swap(arr[i], arr[k - i - 1]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 3;
    // cin>>k;
    //     for(int i=k-1;i>=0;i--){
    //         cout<<arr[i];
    //     }
    // for(int i=4;i>=k;i--){
    //         cout<<arr[i];
    //     }
    rr(arr, 5, 3);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}