// C/C++ Program for Merge an array of size n into another array of size m+n
#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
// {int a[]={1,3,5,7,9};
// int b[]={0,2,4,6,8};
// int c[10];
int m,n;
cin>>m>>n;
int a[m],b[n],c[m+n];
for(int i=0;i<m;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
for(int i=0;i<m;i++){
   cout<<a[i]<<"    ";
}cout<<endl;
for(int i=0;i<n;i++){
   cout<<b[i]<<"    ";
}cout<<endl;
int k=0;
for(int i=0;i<m;i++){
    c[k]=a[i];
    // cout<<c[k]<<"   ";
    k++;
}cout<<endl;
for(int i=0;i<n;i++){
    c[k]=b[i];
    // cout<<c[k]<<"   ";
    k++;
}cout<<endl;
sort(c,c+(m+n));

for(int i=0;i<m+n;i++){
   cout<<c[i]<<"   ";
}
return 0;
}