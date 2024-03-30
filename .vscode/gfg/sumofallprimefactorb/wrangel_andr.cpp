#include<iostream>
using namespace std ;
bool isprime(int n ){
    for(int i=1;i*i<=n;i++){
    if(n%i==0)
    return false;
}
    return true;
}
int sum(int l,int r){
    int sum=0;
    for(int i=l;i<=r;i++){
        if(isprime(i))
        continue;
        for(int j=1;j<i;j++){
            if(i%j==0 && isprime(j))
            sum+=j;
        }
    }return sum;
}

int main()
{
cout<<sum(1,6);
return 0;
}