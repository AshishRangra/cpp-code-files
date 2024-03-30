#include<iostream>
using namespace std ;
bool checkPrime(int n){
    bool isPrime=true;
    if(n<2)
    return false;

    else{
        for(int i=2;i<=n/2;++i){
            if(n%i==0)
            isPrime=false;
            break;
        }
    }
    return isPrime;
}
int main()
{
int n,i;
bool flag=false;
cout<<"Enter a positive integer:";
cin>>n;
for(int i=2;i<=n/2;++i){
    if(checkPrime(i)){
    if(checkPrime(n-i)){
        cout<<n<<"="<<i<<"+"<<n-i<<endl;
        flag=true;
    }
}}
if(!flag){
    cout<<n<<"cant be expressed as sum of two prime no";
    
}
return 0;
}