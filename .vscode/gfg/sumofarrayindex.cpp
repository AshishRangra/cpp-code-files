#include<iostream>
#include<array>
#include<vector>
using namespace std ;
int main()
{
int a[7]={1,2,3,4,5,70};
int b[6]={7,8,9,2,3,6};
int c[120];
int d[10000];
int k=0;
for(int i=0;i<6;i++){
    c[k]=a[i]+b[i];
    if(c[k]<=9){ 
        // d[i]+=c[i];
        cout<<c[k]<<"  ";k++;
    }
    else{  
int p=0;
 p+=c[k];
c[k]=p/10;
// cout<<c[k]<<" ";
k++;
c[k]=p%10;
// cout<<c[k]<<" ";
k++;



}}

 cout<<endl<<"array<:";
for(int i=0;i<10;i++){
   
    cout<<c[i]<<"  ";
}



return 0;
}