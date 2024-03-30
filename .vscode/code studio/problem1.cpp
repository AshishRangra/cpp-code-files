#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++){
      ans=ans^arr[i]; 
    }
    cout<<ans;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    findUnique(a,n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";

    // }
    return 0;
}
