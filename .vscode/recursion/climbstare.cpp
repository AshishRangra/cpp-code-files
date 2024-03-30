#include<iostream>
using namespace std ;
int func(long long nStair){
    if(nStair<0)
    return 0;
    if(nStair==0)
        return 1;

int ans=func(nStair-1)+func(nStair-2);;
    return ans;
}
int main()
{
int n;
cin>>n;
cout<<func(n);
return 0;
}