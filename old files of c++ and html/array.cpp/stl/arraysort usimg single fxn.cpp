#include<iostream>
#include<list>
#include <bits/stdc++>
using namespace std ;

int main()
{
    
   int a[9];
   int n=sizeof(a)/sizeof(a[0]);
   for(int i=0;i<9;i++)
{
    cin>>a[i];
}
cout<<" element in array are:"<<endl;
for(int i=0;i<9;i++){
    cout<<a[i];
}
cout<<"elements after sorting ";
sort(a,a+n);
return 0;
}