#include<iostream>
using namespace std ;
int power(int ss,int n){
    // base case
    if(n==0)
    return 1;
    // recursive relation
    // int smallerProblem=power(ss,n-1);
    // int bigProblem=ss*smallerProblem;
    // return bigProblem;
     return ss*power(ss,n-1);
}
int main()
{
int n,ss;
cin>>ss>>n;
cout<<power(ss,n);
return 0;
}