#include<iostream>
using namespace std ;
int factorial(int n){
    // if(n==0)
    // return 1;
    // int choti=factorial(n-1);
    // int badi=n*choti;
    // return badi;
    int c; 
        if(n==0)
        return 1;
        else{
         for(int i=0;i<n;i++){
           c=n*factorial(n-1);
        }return c;
    }
}
int main()
{
int n;
cin>>n;
cout<<factorial(n);

return 0;
}