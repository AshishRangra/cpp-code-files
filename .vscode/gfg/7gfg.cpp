// C/C++ Program for Find the Number Occurring Odd Number of Times
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int n;
    cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
 for(int i=0;i<n;i++){
    b: int l=0;
    for(int j=0;j<n;j++){
        if(a[i]==a[j]){
         l++; 
        //  cout<<"inside j : "<<l<<endl;     
         for(int k=j+1;k<n;k++){  
           if(a[k]==a[i] ){
            l++; 
            // cout<<"inside k: "<<l<<endl;
           } 
            }          
           if(l%2!=0){
            cout<<a[i]<<endl;
                        }
           else{
            i++;
            goto b;
           }
           if(i==n-1){
            return 0;
           }           
                      }
    } 
}
return 0;
}