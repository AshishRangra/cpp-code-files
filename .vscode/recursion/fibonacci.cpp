#include<iostream>
using namespace std ;
int fibonacci(int x){
    if(x==0)
    return 0;
    if(x==1)
    return 1;
    // only show recursion and position of fibonacci
    
    int ans=fibonacci(x-1)+fibonacci(x-2);
    return ans;
  
}
int main()
{
int x;
cin>>x;
cout<<fibonacci(x);
return 0;
}