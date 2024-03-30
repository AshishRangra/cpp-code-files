// C/C++ Program for Majority Element
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // int a[]={1,2,2,3,4,3,5,3,6};
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    int l=-1;
    int c[n];
    int k=0;
   sort(a,a+n);
    for(int i=0;i<n;i++){
        l++;
        for(int j=0;j<n;j++){
            if(l==j){
             ;
            }
           else if(a[l]==a[j] ){
          
           cout<<a[j];
        
           }
        }
    if(i==n-1){
        cout<<"no majority";
    }
    }
//   for(int i=0;i<n;i++){
//     cout<<c[i];
//   }
   return 0;
}