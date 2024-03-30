#include<iostream>
using namespace std ;
int main()
{
int a,f=0,sum=0;
cin>>a;
for(int i=2;i<=a;i++){
    
    if(a%i==0){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                f=1;
                
                break;
            }
           
            }
            if(f==0){
                sum=sum+i;
                cout<<i<<" ";
        }
    }
}
cout<<endl;
cout<<sum;
return 0;
}














