#include<iostream>
using namespace std ;
int func(int n){
   
    if(n==0)
    return 1;
    return n*func(n-1);
}
// int funcc(int r){
   
   
//     return r*func(r-1);
// }
int fun(int n,int r){
    //  int z=n-r;
    if( n==0){
    return 1;}

    return func(n-r);
    // return func(n-r);
}
int main()
{
int n,r;
cin>>n>>r;
int nCr;
nCr=func(n)/func(r)*fun(n,r);
cout<<nCr;
// cout<<fun(n,r);
return 0;
}