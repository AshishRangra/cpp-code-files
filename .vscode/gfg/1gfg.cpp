// Program to find sum of elements in an array
#include<iostream>
using namespace std;
int main()
{
    // int a[]={1,2,3,4,5,6};
    // int sum=0;
    // sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];

    // cout<<sum;
//     for(int i=0;i<6;i++){
//         sum=sum+a[i];
       
//     }
//    cout<<sum;
int n;
cin>>n;
int a[n];

for(int i =0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}
cout<<endl;
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+a[i];
}
cout<<sum;
    return 0;
}