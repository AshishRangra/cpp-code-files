#include <iostream>
using namespace std;
void rotatedArray(int a[], int n, int k)
{
    // int i=0;
    int b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp = (i + k) % n;
        b[temp] = a[i];
    }
    // a[n] = b[n];
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    int k = 3;
    rotatedArray(arr, 7, k);

    return 0;
}

// #include<vector>
// #include<iostream>
// using namespace std;
// void rotatedArray(vector<int> arr,int k){
//     vector<int>temp(arr.size());
//     for(int i=0;i<arr.size();i++){
//         temp[(i+k)%arr.size()]=arr[i];

//     }
//     arr=temp;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     vector<int>arr={1,2,3,4,5,6,8};
//     int k=3;
//     rotatedArray(arr,k);
//     return 0;
// }