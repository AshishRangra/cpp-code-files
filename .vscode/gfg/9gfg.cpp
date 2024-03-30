// C/C++ Program for Find the Missing Number
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
int n;
cin>>n;
int a[n];//1,3,4,5,7,9
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;

// int a[]={0,1,2,4,5,7,8,9};
 int l,m;
 cout<<"enter strting number :";
cin>>m;

 cout<<"strting element :"<<m<<endl;
int k;
 l=m-1;
for(int i=0;i<=a[n-1];i++){
   b : l++;
   if(l<a[n-1]){
   for(int j=0;j<=a[n-1];j++){
    if(a[j]==l){
    goto b;
    }
    else if(j==n-1){
     cout<<"Missing element from given array is:"<<l<<endl;      
        goto b;
    }
   }
   } 

 }
return 0;
}