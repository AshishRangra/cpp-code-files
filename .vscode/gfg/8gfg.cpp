// C/C++ Program for Largest Sum Contiguous Subarray
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
// int a[]={1,2,3,4,5,6};
int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
int l=0;
sort(a,a+n);

 for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    } cout<<endl;
for(int i=n-1;i>=(n/2);i--){
    l+=a[i];
}
cout<<"Maximum contiguous sum is :"<<l;
return 0;
}