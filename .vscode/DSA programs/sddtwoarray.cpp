#include<iostream>
using namespace std ;
int main()
{
int n,m;
cin>>n>>m;
int a[n],c[100],e[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    
}
if(n==m){
for(int i=0;i<m;i++){
    cin>>e[i];
    
}

}
else{
    
   int count =n-m;
   
   for(int i=0;i<count;i++){
    
    e[i]=0;
    cout<<e[i]<<" ";
   }
   for(int i=count;i<n;i++){
    cin>>e[i];
   }
}

int k=n-1;
int d[1000];
int carry=0;
for(int i=n-1;i>=0;i--)
{
    // int carry=0;
    if(i!=0){
    // cout<<"carry"<<carry<<endl;
    
    d[i]=a[i]+e[i]+carry;
    carry=0;
    if(d[i]<=9){ 
        c[k]=d[i];
        k--;
    }
    else{
        c[k]=d[i]%10;
        carry=d[i]/10;
        k--;


    }
    }
    else{
        c[k]=a[i]+e[i]+carry;
        k--;
    }
}
for(int i=0;i<n;i++){
    cout<<c[i]<<" ";
}
// for(int i=0;i<n;i++){
//     cout<<e[i];
// }
    return 0;
}