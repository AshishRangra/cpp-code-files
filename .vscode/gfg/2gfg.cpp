// largest element in array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // int a[6]={4,5,6,3,2,1};
    // sort(a,a+6);
    // for(int i=0;i<7;i++){
    //     cout<<a[i];
    // }
    // cout<<endl;
    // cout<<a[5];
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    int large_element;
    large_element=a[n-1];
    cout<<"Largest element in an array: "<<large_element;

    
return 0;
}