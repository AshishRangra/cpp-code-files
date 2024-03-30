// C/C++ Program for Reversal algorithm for array rotation
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
int n,d;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
cout<<"after soting input:";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

cout<<endl;
int k=0;
cout<<"enter the swapping element ":
cin>>d;
for(int i=d;i<n;i++){
    b[k]=a[i];
    k++;
}
for(int i=0;i<d;i++){
    b[k]=a[i];
    k++;
}
for(int i=0;i<n;i++){
    a[i]=b[i];
}
cout<<"after swapping:";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}cout<<endl;
cout<<"after reversing:";
for(int i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
}cout<<endl;
return 0;
}