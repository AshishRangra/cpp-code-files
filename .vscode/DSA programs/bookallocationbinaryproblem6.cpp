#include<iostream>
using namespace std ;
bool isPossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if( pagesum +arr[i]<=mid){
            pagesum+=arr[i];
    }
    return true;
}
int allocateBooks(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossibleSolution(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        // mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    // int a[] = {12, 34, 67, 90};
    int a[] = {10, 20, 30, 40};
    cout << allocateBooks(a, 4, 2);
    cout << endl;
    return 0;
}