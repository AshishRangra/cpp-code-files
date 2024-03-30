// C/C++ Program for Write a program to reverse an array
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
cout<<"Reverse of an array:";
for(int i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
}

return 0;
}